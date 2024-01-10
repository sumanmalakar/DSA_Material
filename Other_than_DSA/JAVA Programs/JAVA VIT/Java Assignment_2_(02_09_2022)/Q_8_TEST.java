import java.util.*;
import java.util.Scanner;

public class Q_8_TEST {
  private int testCode;
  String Description;
  int NoCandidate;
  int CenterReqd;

  public void SCHEDULE() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter value for TestCode ");
    testCode = sc.nextInt();
    System.out.println("Enter the description");
    Description = sc.next();
    System.out.println("Enter the no_of_candidate ");
    NoCandidate = sc.nextInt();

    sc.close();

  }

  private int CALCNTR() {
    return (NoCandidate / 100) + 1;
  }

  void DISPTEST() {
    System.out.println("TestCode = " + testCode);
    System.out.println("Description = " + Description);
    System.out.println("No_Of_Candidate = " + NoCandidate);

    System.out.println("No of center required = " + CALCNTR());

  }

  public static void main(String[] args) {
    Q_8_TEST t = new Q_8_TEST();

    t.SCHEDULE();
    t.DISPTEST();
  }
}
