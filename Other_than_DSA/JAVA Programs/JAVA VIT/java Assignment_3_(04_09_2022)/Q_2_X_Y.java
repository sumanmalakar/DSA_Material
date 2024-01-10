import java.util.*;

class coordinates {

  int[] x = new int[11];
  int[] y = new int[11];
  double dis = 0;

  void result() {
    Scanner sc = new Scanner(System.in);

    for (int i = 0; i < 10; i++) {
      System.out.println("Enter coordinates of " + (i + 1) + " point x & y");
      x[i] = sc.nextInt();
      y[i] = sc.nextInt();

    }
    sc.close();
    for (int i = 0; i < 10; i++)
      dis = dis + Math.sqrt(Math.pow((x[i + 1] - x[i]), 2) + Math.pow((y[i + 1] - y[i]), 2));

    System.out.println("The total distance between first and last point is " + dis);

  }

}

public class Q_2_X_Y {
public static void main(String[] args) {
  coordinates n = new coordinates();
  n.result();
}
}
