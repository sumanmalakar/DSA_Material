import java.util.Scanner;
class Q_1_UserInput{
  public static void main(String [] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the any Statement....");
    String str = sc.nextLine();
    if(str.length()<11){
      System.out.println("Length of Statement must been greater then 10 ");

      System.out.println("Enter the any Statement Again....");
      str = sc.nextLine();
    }

    int i=0;
    while(i<str.length()){
      if (i > 11) {
        break;
      }
      else if(i>=6 && i<=10){

        System.out.print(str.charAt(i));
      }
      i++;
      
    }

  }
}