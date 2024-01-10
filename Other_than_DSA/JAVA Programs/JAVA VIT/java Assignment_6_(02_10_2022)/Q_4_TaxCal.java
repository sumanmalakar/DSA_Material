import java.util.*;

class Employee {
  String EmpName;
  int Empno;
  String designation;
  double Base_salary;

  public void getData() {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter Employee Name, EmpNo, designation & Base_salary...");
    EmpName = sc.next();
    Empno = sc.nextInt();
    designation = sc.next();
    Base_salary = sc.nextDouble();

  }

  public void display() {
    System.out.println("Name :- " + EmpName + "\n EmpNo :- " + Empno + "\n Designation :- " + designation
        + "\n BaseSalary :- " + Base_salary);
  }

  public double calCulateTotal() {
    Double TotalSalary;
    double DFA = (Base_salary * 38) / 100;
    double HRA = (Base_salary * 15) / 100;

    TotalSalary =( Base_salary + DFA + HRA);


    // System.out.println("The total salary = "+TotalSalary );
    return TotalSalary;
  }

}

class TaxCal extends Employee {

  double TaxCal;

  public double taxCal(){
    double TotalSalary = calCulateTotal();
    
    if (TotalSalary < 300000) {
      TaxCal = 0;

    } else if (TotalSalary > 300000 && TotalSalary < 500000) {
      TaxCal = (TotalSalary * 10) / 100;

    } else if (TotalSalary > 500000 && TotalSalary < 1000000) {
      TaxCal = (TotalSalary * 20) / 100;

    } else {
      TaxCal = (TotalSalary * 30) / 100;
    }
return TaxCal;
  }


  public void display() {
    super.display();
    System.out.println("The total salary = " +calCulateTotal());
    System.out.println("The Tax pay by use is "+taxCal());

  }




}

public class Q_4_TaxCal {
public static void main(String args []){
  TaxCal t = new TaxCal();
  t.getData();
  t.display();


}
}
