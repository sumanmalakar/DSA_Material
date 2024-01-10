import java.util.*;

public class Q_6_Sort_String {
  static void String_Sort() {
    Scanner sc = new Scanner(System.in);
    ArrayList<String> list = new ArrayList<String>();
    System.out.println("Enter the length of Array...");
    int n = sc.nextInt();

    for (int i = 0; i < n; i++) {
      System.out.println("Enter the " + (i + 1) + " element of array String format = ");

      list.add(sc.next());
    }

    Collections.sort(list);
    System.out.println("sorted element = " + list);

  }

  public static void main(String[] args) {

    String_Sort();

  }
}