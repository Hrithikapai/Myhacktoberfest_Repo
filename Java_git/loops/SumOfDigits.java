package loops;
import java.util.Scanner;
public class SumOfDigits {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter your number:-\n");
		int n=sc.nextInt();
		int sum=0;
		while(n>0) {
			int lastdigit= (n%10);
			sum+=lastdigit;
			n=(n/10);
		}
		System.out.print("Sum of the digits of your number:-\n" + sum);
		sc.close();

	}

}
