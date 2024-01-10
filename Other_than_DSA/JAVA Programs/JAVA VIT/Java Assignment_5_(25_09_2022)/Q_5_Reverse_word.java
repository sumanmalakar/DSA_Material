import java.util.*;

public class Q_5_Reverse_word {

  static String reverse_word(String str) {

    String brand_New_String = "";
    int i = 0, k = 0;

    // the suman malakar from vit

    while (i < str.length()) {
      char ch = str.charAt(i);
      if (ch == ' ') {
        int x = i - 1; // x = 4
        while (x >= k) {
          brand_New_String = brand_New_String + str.charAt(x);
          x--;
        }
        k = i + 1;
        brand_New_String = brand_New_String + " ";

      }
      i++;
    }
    int x = str.length() - 1;
    while (x >= k) {
      brand_New_String = brand_New_String + str.charAt(x);
      x--;
    }

    // eht namus rakalam morf tiv

    return brand_New_String;

  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter any statement ...");
    String st = sc.nextLine();

    System.out.println("Reverse String = " + reverse_word(st));

  }
}
