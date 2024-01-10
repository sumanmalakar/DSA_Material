import java.util.*;

public class Q_3_Occurrence_Of_the {

  static int Occurrence_Of_word(String str, String find) {
    String brand_New_String = str.toLowerCase();
    String search = find.toLowerCase();

    // str = this is the suman the vit student thi vitian
    // find = the

    int len = search.length(); // 3
    int count = 0;
    char ch = search.charAt(0); // t

    int i = 0;
    while (i < brand_New_String.length()) {
      // System.out.print(i+" ");
      String compare = "";
      if (brand_New_String.charAt(i) == ch) {
        compare = compare + brand_New_String.substring(i, i + len);
        if (compare.equals(search)) {
          count++;
          i = i + len - 1;
        }
      }
      i++;

    }

    return count;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the statement ");
    String st = sc.nextLine();
    System.out.println("Enter the word looking for ");
    String looking_for = sc.next();

    sc.close();

    System.out.println("The word " + looking_for + " Occurrences is = " + Occurrence_Of_word(st, looking_for));
  }

}
