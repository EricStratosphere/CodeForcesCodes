//NOT YET SOLVED

import java.util.*;
public class Boredom{    

    public static void main(String[] args){
	    Scanner scanner = new Scanner(System.in);
	    int n = scanner.nextInt();
    	    int[] arr = new int[n];
	    for(int i = 0; i < n; i++){
	   	arr[i] = scanner.nextInt();
    	    }	
    	    ArrayList<Integer> individualValues = getIndividualValues(arr);
    	    int[] frequency = new int[Collections.max(individualValues).intValue() + 1];
    	    Arrays.fill(frequency, 0);
    	    for(int i = 0; i < n; i++){
    	    	frequency[arr[i]]++;
	    }

	    Collections.sort(individualValues);

    	    int[] table = new int[frequency.length];
    	    Arrays.fill(table, 0);
    	    int firstAnswer = recurSolve(individualValues, frequency, table, 0);
    	    int secondAnswer = individualValues.size() > 1 ? recurSolve(individualValues, frequency, table, 1) : 0;
    		
    	    System.out.println(Math.max(firstAnswer, secondAnswer));
	
    	}
    	public static int recurSolve(ArrayList<Integer> individualValues, int[] frequency, int[] table,int index){
    		if(table[index] > 0)
    			return table[index];
    		int currentValue = individualValues.get(index) * frequency[individualValues.get(index)];
     
    		int firstAnswer = currentValue;
    		int secondAnswer = currentValue;
    		int thirdAnswer = currentValue;
     
    		if(index + 1 < individualValues.size() && individualValues.get(index + 1) != individualValues.get(index) + 1 )
    			firstAnswer = currentValue + recurSolve(individualValues, frequency, table, index + 1);
    		if(index + 2 < individualValues.size())
    			secondAnswer = currentValue + recurSolve(individualValues, frequency, table, index + 2);
    		if(index + 3 < individualValues.size())
    			thirdAnswer = currentValue + recurSolve(individualValues, frequency, table, index + 3);
    		table[index] = Math.max(firstAnswer, Math.max(secondAnswer, thirdAnswer));
    		return table[index];
    	}
     
    	public static ArrayList<Integer> getIndividualValues(int[] arr){
    		ArrayList<Integer> individualValues = new ArrayList<>();
    		int highest = Arrays.stream(arr).max().getAsInt();
    		int[] newArr = new int[highest + 1];
    		Arrays.fill(newArr, 0);
    		for(int i = 0; i < arr.length; i++){
    			newArr[arr[i]]++;
    		}
    		for(int i = 0; i < newArr.length; i++){
    			if(newArr[i] > 0)
    				individualValues.add(i);		
    		}
     
    		return individualValues;
    	}
    }
