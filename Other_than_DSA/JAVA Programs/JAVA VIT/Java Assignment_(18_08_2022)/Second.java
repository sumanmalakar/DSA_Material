import java.io.*;
import java.util.*;

class Second {
    public static void main(String[] args) {
        int[][] arr1 = { { 1, 2, 3 }, { 4, 5, 6 }, { 1, 3, 2 } };

        int sumRow;
        int sumCol;
        int sumElement = 0;

        // adding two 2D arrays row-wise
        for (int i = 0; i < arr1.length; i++) {
            sumRow  = 0;
            sumCol = 0;
            for (int j = 0; j < arr1[i].length; j++) {
                sumRow = sumRow + arr1[i][j];
                sumCol   = sumCol + arr1[j][i];
                sumElement = sumElement + arr1[i][j];
            }
            System.out.println("Sum of "+(i+1) +" row = "+sumRow);
            System.out.println("Sum of " + (i+1) + " col = " + sumCol);

        }
        System.out.println("Sum of elements =  " + sumElement);


        

        
    }
}