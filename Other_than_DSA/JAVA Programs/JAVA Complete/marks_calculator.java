import java.util.Scanner;

public class marks_calculator {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the total marks of your examination ");
    int marks = sc.nextInt();
    System.out.println("Enter first subject marks");
    double a = sc.nextDouble();
    System.out.println("Enter second subject marks");
    double b = sc.nextDouble();
    System.out.println("Enter third subject marks");
    double c = sc.nextDouble();
    System.out.println("Enter fourth subject marks");
    double d = sc.nextDouble();
    System.out.println("Enter last subject marks");
    double e = sc.nextDouble();

    double avg = (a + b + c + d + e)*100 / marks;

    System.out.println("The avg is equal = " + avg);
  }
}
