import java.util.Scanner;
public class XeniaAndRingroadAttemptDos {
    public static void main(String[] args){
        long ctr1 = 1; // 4 3 || 3 2 3
        int newlarge = 0; 
        // 1 2 3 4 1 2 3 (4 || -1) // from eight it becomes seven,
        // 2 2 || 1 1
        // 
        Scanner input = new Scanner(System.in);
        int numOfHouses = input.nextInt(), numOfProblems = input.nextInt();
        int[] arrProbs = new int[numOfProblems];
        for(int i = 0; i < numOfProblems; i++){
            arrProbs[i] = input.nextInt();
            if(arrProbs[i] < newlarge){
                newlarge = arrProbs[i];
                ctr1++;
            }
            else {
                newlarge = arrProbs[i];
            }
        }
        long finNum = ((ctr1*numOfHouses) - (numOfHouses - arrProbs[numOfProblems-1])) - 1;
        System.out.println(finNum);
        input.close();
    }
}
