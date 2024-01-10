import java.util.*;
import java.util.Arrays;

public class Array_Practice_Set {
  public static void main(String[] args) {

    // Practice Problem 1

    // float[] arr = { 45.7f, 67.8f, 63.4f, 99.2f, 100.0f };

    // float sum = 0;
    // for(float element : arr){
    // sum += element;
    // if(target == element){
    // System.out.println("present");
    // }
    // }
    // System.out.println(sum);

    // Practice Problem 2

    // float[] arr = { 45.7f, 67.8f, 63.4f, 99.2f, 100.0f };

    // float target = 67.9f;
    // boolean isInArray = false;
    // for (float element : arr) {
    // if (target == element) {
    // isInArray = true;
    // break;
    // }
    // }

    // if(isInArray){
    // System.out.println("Element is present");
    // }else{
    // System.out.println("Element is not present");
    // }

    // Practice Problem 3

    // float[] arr = { 45.7f, 67.8f, 63.4f, 99.2f, 100.0f };

    // float sum = 0;
    // for(float element : arr){
    // sum += element;
    // }

    // System.out.println("The value of average marks is " +sum/arr.length);

    // Practice problem 4

    // int [][] mat1 = {{1,2,3},{4,5,6}};
    // int [][] mat2 = {{8,9,2}, {10,23,1}};
    // int [][] mat3 = {{0,0,0}, {0,0,0}};

    // for(int i=0; i<mat1.length; i++){
    // for(int j= 0; j<mat1[i].length; j++){
    // mat3[i][j] = mat1[i][j] + mat2[i][j];
    // }
    // }

    // for (int i = 0; i < mat3.length; i++) {
    // for (int j = 0; j < mat3[i].length; j++) {
    // System.out.print(mat3[i][j] + " ");
    // }
    // System.out.println();
    // }

    // practice problem 5

    // int [] arr = {12,15,16,20,33,50};

    // for(int i=0; i<arr.length/2; i++){
    // int temp = arr[arr.length - i - 1];
    // arr[arr.length-i-1] = arr[i];
    // arr[i] = temp;
    // }
    // int s = 0;
    // int e = arr.length-1;
    // System.out.println("length = " + e);

    // while(s<e){

    // int temp = arr[s];
    // arr[s] = arr[e];
    // arr[e] = temp;

    // s++;
    // e--;
    // }

    // for(int element : arr){
    // System.out.print(element +" ");
    // }

    // practice problem 6
    // int arr [] = {12,15,16,2,33,50};

    // boolean isSorted = true;
    // for(int i=1; i<arr.length; i++){
    // if(arr[i-1]>arr[i]){
    // isSorted = false;
    // break;
    // }
    // }

    // if(isSorted){
    // System.out.println("Array is Sorted");
    // }else{
    // System.out.println("Array is UnSorted");
    // }
    // int arr[] = { 12, 15, 16, 2, 33, 50 };

    // for (int element : arr) {
    // element = element + 10;
    // // System.out.println(element + 10 );
    // System.out.println(element);

    // }

    // for (int element : arr) {

    // System.out.println(element);

    // }

    // int arr1[] = { 12, 15, 16, 2, 33, 50, 6, 7, 2, 1 };
    // int arr2[] = { 1, 3, 4, 5, 6, 7, 7, 8, 8, 10 };

    // int result[] = new int[10];

    // for (int i = 0; i < arr1.length; i++) {
    //   result[i] = arr1[i] + arr2[i];
    // }
    // Arrays.sort(result);

    // for (int element : result) {
    //   System.out.print(element + " ");
    // }

    // int min = result[0];
    // int max = result[0];

    // for(int i=1; i<result.length; i++){
    //   if(min>result[i]){
    //     min = result[i];
    //   }else if(max<result[i]){
    //     max = result[i];
    //   }
    // }
   
    // System.out.println("\n Min = " + min + " Max = "+ max);

    // int s = 0;
    // int e = result.length-1  ;

    // while(s<=e){
    //   System.out.println("S = "+s+" E = "+e);
    //   int temp = result[s];
    //   result[s] = result[e];
    //   result[e] = temp;

     
    //   s++;
    //   e--;

    // }

   
    // // }
    // for (int element : result) {
    //   System.out.print(element + " ");
    // }

    // System.out.println("Hello");

    int arr [][] = {{1,2,3},
                     {5,6,7},
                    {12,3,6}};

  
   for(int i=0; i<arr.length; i++){
   
     for(int j =0; j<arr[i].length; j++){
       System.out.print(arr[j][i] + " ");
     }
     System.out.println();
   }             
   
   int sum = 0;
   System.out.println("****************");
   
   for(int a[]: arr){
     for(int b:a){
       System.out.print(b+" ");
       sum = sum + b;
     }
     System.out.println();
   } 
   System.out.println("sum is = "+sum);
  

  }
}
