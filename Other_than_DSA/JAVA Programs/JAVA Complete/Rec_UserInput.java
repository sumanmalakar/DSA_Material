import java.util.Scanner;

public class Rec_UserInput {

  int l, b;
  Scanner sc = new Scanner(System.in);

  private void setData() {
    System.out.println("Enter the length");
    this.l = sc.nextInt();
    System.out.println("Enter the breadth");
    this.b = sc.nextInt();
  }

  public int result() {
    return l * b;
  }

  public static void main(String[] args) {
    Rec_UserInput r;
    r = new Rec_UserInput();
    r.setData();
    System.out.println(r.result());
  }
}
