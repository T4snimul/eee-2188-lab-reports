package lab05;
import java.util.Scanner;

public class FindPrime {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        
        boolean isPrime;
        System.out.print("Enter a number: ");
        int num = input.nextInt();
        
        isPrime = num >= 2;
        
        for(int i=2; i <= num/i; i++) {
            if((num % i) == 0) {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime) System.out.println("Prime");
        else System.out.println("Not Prime");
    }
}