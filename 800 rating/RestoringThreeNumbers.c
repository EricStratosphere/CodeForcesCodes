import java.util.Scanner;
public class RestoringThreeNumbers{
    public static void main(String[] args) {
        int[] arr = new int[4];
        initArr(arr);
        int largest = findLargest(arr);
        for(int ctr = 0; ctr < 4; ctr++){
            if(arr[ctr] != largest){
                int num = largest - arr[ctr];
                System.out.print(num + " ");
            }
        }
    }
    public static void initArr(int[] arr){
        Scanner input = new Scanner(System.in);
        for(int ctr = 0; ctr < 4; ctr++){
            arr[ctr] = input.nextInt();   
        }
        input.close();
    }
    public static int findLargest(int[] arr){
        int largest = 0;
        for(int ctr = 0; ctr < 4; ctr++){
            if(arr[ctr] > largest){
                largest = arr[ctr];
            }
        }
        return largest;
    }
}
