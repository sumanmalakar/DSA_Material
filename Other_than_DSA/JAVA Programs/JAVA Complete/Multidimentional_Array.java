import java.util.*;
public class Multidimentional_Array {
  public static void main(String [] args){
    // System.out.println("Hello..");
    int [] marks; // A 1 - D Array
    int [] [] flats; // 2 - D Array

    Scanner sc = new Scanner(System.in);

    flats = new int [2][3];

    for(int i=0; i<flats.length; i++){
      for(int j=0; j<flats[i].length; j++){
        System.out.println("Enter element of array ");
        flats[i][j] = sc.nextInt();
      }
    }
    System.out.println("Result = ");

    for (int i = 0; i < flats.length; i++) {
      for (int j = 0; j < flats[i].length; j++) {
        System.out.print(flats[i][j] + " ");
      }
      System.out.println();
    }

  }
}
