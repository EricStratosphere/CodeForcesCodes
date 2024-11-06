import java.util.Scanner;
public class YetAnotherTwoIntegersProblem {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int limit = input.nextInt();
        for(int ctr = 0; ctr < limit; ctr++){
            int a = input.nextInt(), b = input.nextInt(), iterationCounter = 0;
            iterationCounter = (a < b) ? ((b - a) % 10 == 0 ? ((b - a) / 10) :  ((b - a) / 10) + 1) : ((a - b) % 10 == 0 ? ((a - b) / 10) :  ((a - b) / 10) + 1); 
            System.out.println(iterationCounter);
        }
        input.close();
    }
}
