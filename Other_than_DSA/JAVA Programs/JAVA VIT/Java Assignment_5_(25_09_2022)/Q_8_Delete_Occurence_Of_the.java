import java.util.*;

public class Q_8_Delete_Occurence_Of_the {

  static void delete_Occurrence(String str, String delete) {
    String brand_New_String = str.toLowerCase();
    String search = delete.toLowerCase();
    String Result_string = "";

    // str = this is the suman the vit student thi vitian
    // delete = the

    int len = search.length(); // 3
    char ch = search.charAt(0); // t

    int i = 0;
    while (i < brand_New_String.length()) {

      String compare = "";
      char c = brand_New_String.charAt(i);
      if ((c == ch) && (i + len) < brand_New_String.length()) {
        compare = compare + brand_New_String.substring(i, i + len);

        if (compare.equals(search)) {
          i = i + len;
          continue;
        } else {
          Result_string = Result_string + c;
        }
      } else {
        Result_string = Result_string + c;
      }

      i++;

    }

    System.out.println(Result_string);
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the statement ... ");
    String str = sc.nextLine();
    System.out.println("Enter the word you want to delete ...");
    String delete = sc.next();

    delete_Occurrence(str, delete);

  }
}
