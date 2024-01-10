import java.util.Scanner;

public class Input {
  public static void main(String[] args) {
    System.out.println("Taking Input from the user");
    Scanner sc = new Scanner(System.in);
    // System.out.println("Enter number 1");
    // // int a = sc.nextInt();
    // float a = sc.nextFloat();
    // System.out.println("Enter number 2");
    // // int b = sc.nextInt();
    // float b = sc.nextFloat();

    // System.out.println("The sum of these numbers is "+ (a+b));

    // integer input check
    // boolean b1 = sc.hasNextInt();
    // System.out.println(b1);

    //taking string input
    // String str = sc.next();
    String str = sc.nextLine();
    System.out.println(str);


  }
}