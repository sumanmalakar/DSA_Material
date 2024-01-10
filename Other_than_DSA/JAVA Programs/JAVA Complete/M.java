import java.util.Scanner;

public class M{
      static Scanner sc=new Scanner(System.in);
      static int rows;
      static int cols; 
      static int flats[][]=new int[10][10];
       
	  public static void userInput() {
		  System.out.println("Enter row: ");
		  rows=sc.nextInt();
		  System.out.println("Enter columns: ");
		  cols=sc.nextInt();
		 
		  for(int i=0;i<rows;i++) {
			  for(int j=0;j<cols;j++) {
				  flats[i][j]=sc.nextInt();
			  }
		  }
	  }
		  public static void showUserOutput() {
		  
			  for(int i=0;i<rows;i++) {
				  for(int j=0;j<cols;j++) {
					  System.out.println("The Matrix is :"+flats[i][j]);
				  }
			  }
	  }
	
public static void main(String[] args) {
	M.userInput();
	M.showUserOutput();
}
}