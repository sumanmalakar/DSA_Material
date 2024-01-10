import java.util.Scanner;

public class SumOfEven {
  public static int sumEven(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0) {
        sum = sum + i;
      }
    }

    return sum;
  }

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a number ");
    int n = sc.nextInt();
    sc.close();

    if (n <= 0) {
      // throw Arithmetic exception if not eligible to vote
      throw new ArithmeticException("Number is must be greater than 0"); 
    

    } else {

      System.out.println(sumEven(n));

    }

   

  }
}