import java.util.*;

class qualify {
  int A_marks, B_marks;

  void input() {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter A subject marks ");
    this.A_marks = sc.nextInt();

    System.out.println("Enter B subject marks ");
    this.B_marks = sc.nextInt();

  }

  void conclusion(){
    if((A_marks >= 55) && (B_marks >= 45)){
      System.out.println("Your are Passed!");
    }else if((A_marks >= 65) && (B_marks < 45)){
    System.out.println("Your allowed to reappear in an examination in B to qualify ");
    }else{
      System.out.println("You are failed! ");
    }
  }

}

public class Q_5_student_to_qualify {
  public static void main(String[] args) {
    qualify q = new qualify();
    q.input();
    q.conclusion();
    // System.out.println("Hello Google!");
  }
}