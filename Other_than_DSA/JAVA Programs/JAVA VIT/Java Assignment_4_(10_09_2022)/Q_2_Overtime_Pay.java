import java.util.Scanner;

class Q_2_Overtime_Pay {
  public static void main(String args[]) {

    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the total work hours ");
    int h = sc.nextInt();
    sc.close();

    if (h > 40) {
      int extraPay = (h - 40) * 12;

      System.out.println("You Overtime work hour = " + (h - 40) + "\n Your extra payment = " + extraPay);
    } else {
      System.out.println("Employee Not work overtime");
    }

  }
}