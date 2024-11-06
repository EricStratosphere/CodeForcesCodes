import java.util.Scanner;
public class GameWithSticks {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt(), num2 = input.nextInt();
        int ctr = 0;
        makeArr(num1, num2, ctr);
        input.close();
    }
 
    public static void makeArr(int num1, int num2, int ctr){
        if (num1 * num2 != 0)
          makeArr(num1-1, num2-1, ctr+1);
        else{
          if(ctr%2 == 0)
            System.out.println("Malvika");
          else
            System.out.println("Akshat");
        }
    }
}
