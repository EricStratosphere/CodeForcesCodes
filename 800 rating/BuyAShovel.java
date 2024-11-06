import java.util.Scanner;
public class BuyAShovel{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int shovelPrice = input.nextInt();
        int rBurles = input.nextInt();
        int ctr = 1;
        minShovels(shovelPrice, rBurles, ctr);
        input.close();  
    }
    public static void minShovels(int shovelPrice, int rBurles, int ctr){
        int temp = shovelPrice;
        if(shovelPrice % 10 == 0)
        {   
            System.out.println(ctr);
        }
        else{
            temp = temp - rBurles;
            if (temp % 10 == 0){
                System.out.println(ctr);
            }
            else{
                shovelPrice += (shovelPrice/ctr);
                ctr++;
                minShovels(shovelPrice, rBurles, ctr);
            }
        }
    }
}
