import java.util.Scanner;

class Payment {
  int hour;
  float basepay;

  void input_output() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the  employees work hour ");
    hour = sc.nextInt();

    if (hour > 60) {
      System.out.println("Working hour must be less than 60");
      return;
    }
    System.out.println("Enter the basepay ");
    basepay = sc.nextFloat();
    sc.close();
    if (basepay < 80.0) {
      System.out.println("The BasePay must be greater than (Rs 80.00 an hour)");
      return;
    } else {
      System.out.println("Your total payment = " + payment_System());
    }
    sc.close();
  }

  float payment_System() {

    float Total_payment = hour * basepay;
    float overtime_pay = 0.0f;
    if (hour > 40) {
      int overtime_h = hour - 40;
      overtime_pay = (float) (overtime_h * basepay * 1.5);
      System.out.println("Your overtime work = " + overtime_h + "\nYour Overtime work payment = " + overtime_pay);
    }

    return (Total_payment + overtime_pay);
  }

}

public class Q_3_Food_Corporation_Payment_System {

  public static void main(String[] args) {
    Payment p = new Payment();
    p.input_output();
  }

}