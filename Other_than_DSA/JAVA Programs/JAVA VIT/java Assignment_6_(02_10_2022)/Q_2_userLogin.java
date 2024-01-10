import java.util.*;
public class Q_2_userLogin {

 public static void check(String UserName, String passWord){
   
int cnt = 0;
    int UserName_len = UserName.length();
    int PassWord_len = passWord.length();

    if (UserName_len < 6 || UserName_len > 15) {
      System.out.println("A username must be of length 6-15 characters");
     cnt++;
    } else if (!(UserName.charAt(0) >= 'A' && UserName.charAt(0) <= 'Z')) {
      System.out.println("A username must start with an uppercase English alphabet A to Z");
      cnt++;

    } else if (PassWord_len < 8 || PassWord_len > 256) {
      System.out.println(" A password must not be shorter than 8 characters but must not exceed 256.");
     cnt++;

    } else if (passWord.equals(UserName)) {
      System.out.println("UserName and Password Cannot be same");
      cnt++;

    } 
      int i = 0, j = 0;
      while (i < PassWord_len) {
        char ch = passWord.charAt(i);
        if (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch == ' ') {
          System.out.println("There cannot be any types of parentheses or whitespaces in a password");
        cnt++;

        }
        i++;
      }
      while (j < UserName_len) {
        char ch = UserName.charAt(j);
        if (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch == ' ') {
          System.out.println("There cannot be any types of parentheses or whitespaces in a UserName");
        cnt++;

        }
        j++;
      }
     

    

    if(cnt==0){
System.out.println("UserName & PassWord Varified..!");
      System.out.println("UserName = " + UserName);
      System.out.println("PassWord = " + passWord);
    }
    
  }
  public static void main(String [] args){
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter UserName...");
    String UserName = sc.next();
    System.out.println("Enter Password...");
    String passWord = sc.next();
    // sc.close();
   check(UserName, passWord);


  }
}
