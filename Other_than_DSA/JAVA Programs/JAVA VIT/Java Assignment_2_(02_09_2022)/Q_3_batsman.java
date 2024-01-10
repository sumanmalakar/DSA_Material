import java.util.*;
public class Q_3_batsman {

  String FirstName;
  String LastName;
  int RunsMade;
  int No_of_fours;
  int No_of_sixs;
  Scanner sc = new Scanner(System.in);

  void initil_value(){

    System.out.println("Enter FirstName ");
    this.FirstName = sc.next();
    System.out.println("Enter LastName ");
    this.LastName = sc.next();
    System.out.println("Enter RunMade ");
    this.RunsMade = sc.nextInt();
    System.out.println("Enter No_of_fours ");
    this.No_of_fours = sc.nextInt();
    System.out.println("Enter No_of_sixs ");
    this.No_of_sixs = sc.nextInt();
  }

  void update_run(){
    System.out.println("Enter the update run ");
    this.RunsMade = sc.nextInt();
    System.out.println("your run update "+ this.RunsMade);
  }

  void info(){ 
    System.out.println();
    System.out.println("Name :- "+ this.FirstName+this.LastName);
    System.out.println("No_of_fours & sixs  :- " + this.No_of_fours + " " + this.No_of_sixs);

    System.out.println("Total Run made "+ this.RunsMade);
  }
  public static void main(String[] args) {
    Q_3_batsman virat = new Q_3_batsman();

    virat.initil_value();
    virat.update_run();
    virat.info();
  }
}
