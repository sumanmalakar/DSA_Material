import java.util.*;

class employee {
   private String employeid;
   private String empname;
   private int basicsalary, HRA, DA, GS, incometax, netsalary;

   public void read() {
      Scanner scan = new Scanner(System.in);
      System.out.println("Enter the employee id");// taking all the inputs from the user
      employeid = scan.next();
      System.out.println("Enter the employee name");
      empname = scan.next();
      System.out.println("Enter the basic salary of an employee");
      basicsalary = scan.nextInt();
      calculate();
   }

   public void calculate() // calculating all the parameters
   {
      HRA = (10 / 100) * basicsalary;
      DA = (73 / 100) * basicsalary;
      GS = basicsalary + DA + HRA;
      incometax = (30 / 100) * GS;
      netsalary = GS - incometax;
   }

   public void display() // displaying the calculating parameters
   {
      System.out.println("Employeeid  :  " + employeid + "n" + "Employename  :  " + empname + "n"
            + "Employee basic salary :  " + basicsalary + "n" + "HRA  :  " + HRA + "n" + "DA  :  " + DA + "n"
            + "GS  :  " + GS + "n" + "Incometax  :  " + incometax + "n" + "netsalary  :  " + netsalary);
   }

}

class Q_6_employee // main function
{
   public static void main(String args[]) {
      employee employeobj = new employee();
      employeobj.read(); // calling read function
      employeobj.display(); // calling display function
   }
}