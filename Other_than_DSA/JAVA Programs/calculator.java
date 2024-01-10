import java.util.Scanner;

class cal{
  public static void main(String [] args){

    int n = 1;

    while(n!=0){

   
      
     float number_1, number_2;

     Scanner scan  = new Scanner(System.in);

     System.out.println("Enter first number");
     number_1 = scan.nextFloat();

     System.out.println("Enter the second number");
     number_2 = scan.nextFloat();

     String prompt = "Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division";

  System.out.println("You have Entered " + number_1 + " and " + number_2);

     System.out.println(prompt);
    int  input = scan.nextInt();

    switch(input){
      case 1:
      System.out.println("Adding these numbers " + (number_1 + number_2)  );
      break;
       case 2:
      System.out.println("Subtracting these numbers " + (number_1 - number_2));
      break;
       case 3:
      System.out.println("Multiplying these numbers "+ (number_1 * number_2));
      break;
       case 4:
      System.out.println("Dividing these numbers "+ (number_1/number_2));
      break;

      default:
      System.out.println("Invalid Input");
    }
    n++;
 
 System.out.println("Enter 0 for exit .. for continue press any key");
  n = scan.nextInt();



 }


  }
}