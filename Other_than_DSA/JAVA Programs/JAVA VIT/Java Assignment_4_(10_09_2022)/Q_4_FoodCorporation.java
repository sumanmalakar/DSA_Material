import java.util.Scanner;

class emp {

  double BasePay;
  int Hours_Worked;

  void emp_input(Double BasePay, int Hours_Worked) {
    this.BasePay = BasePay;
    this.Hours_Worked = Hours_Worked;
  }

  void print() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the number of employees ");
    int n = sc.nextInt();
    for (int i = 0; i < n; i++) {
      System.out.println("\nEnter the BasePay & Work_hours for employee " + (i + 1));
      double b = sc.nextDouble();
      int h = sc.nextInt();

      emp_input(b, h);

      System.out.println("BasePay  = " + b);
      System.out.println("Hours Worked  = " + h);

      double TotalPay = b * h;

      System.out.println("Employee " + (i + 1) + " Total pay is = " + TotalPay);

    }
    sc.close();

  }
}

public class Q_4_FoodCorporation {
  public static void main(String[] args) {
    emp e1;
    e1 = new emp();
    e1.print();

  }
}
