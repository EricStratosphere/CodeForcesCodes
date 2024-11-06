import java.util.Scanner;
public class SoftDrinking {
    public static void main(String[] args) {
        int[] arr = new int[8];
        Scanner input = new Scanner(System.in);
        for(int ctr = 0; ctr < 8;ctr++){
            arr[ctr] = input.nextInt();
        }
        int[] arr2 = new int[3];
        arr2[0] = (arr[1] * arr[2])/ arr[6];
        arr2[1] = arr[3] * arr[4];
        arr2[2] = arr[5] / arr[7];
        //System.out.println(arr2[0] + " " + arr2[1] + " " + arr2[2]);
        int min = minimumFinder(arr2);
        int finVal = min / arr[0]; 
        System.out.println(finVal);
        input.close();
    }
    public static int minimumFinder(int[] arr2){
        int min = arr2[0];
        for(int ctr = 0; ctr < 3; ctr++){
            if(arr2[ctr] < min)
                min = arr2[ctr];
        }
        return min;
    }
}
