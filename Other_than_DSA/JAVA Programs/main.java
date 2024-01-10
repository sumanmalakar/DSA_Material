import java.util.Scanner;

class a{

 static int  sum(int a , int b) {return a+b;
}
  public static void main(String [] args){

    // System.out.println("Hello, this is suman malakar!..");

    // String name = "Suman Malakar";

    // System.out.println(name);

// int a = 45, x = 56, y = 67;
// float b = 45.22f;
// boolean isAdult = false;

// System.out.println(x);
// System.out.println(b);
// System.out.println(isAdult);

/* Rule for constructing name of variables in java

 1. can contain , digits, underscores, dollar_signs, letters
 2. Should begin with a letter, $ or _
 3. Java is case sensitive language which means that 
 suman and Suman are tow differen variavbles altogthers
 4. Should not contains withespaces
 5. You cannot use reserved keywords from java
 */
    /* Two types of Java Datat Types:
    1. primite - byte(1 byte), short(2 bytes), int(4 bytes), long(8 bytes), float(4 bytes), double(8 bytes), boolean(1 bit), char( 2 bytes).

    2. Non primitive or Reference Data Type - 
    */

    // byte u =  56;
    // double d = 45.89893d;
    // // System.out.println(d);

    // char grade = 'A';
    // System.out.println(grade);

    
    /* Operators in Java:-

    a) Arithmetic operators
    b) Assignment operators
    c) Logical Opertors
    d) Comparison Operators

*/

/*


int  num1 = 45, num2 = 5;

  System.out.println("The value of num1 + num2 is = ");
  System.out.println(num1+num2);


  System.out.println("The value of num1 - num2 is = ");
  System.out.println(num1-num2);
  

System.out.println("The value of num1 * num2 is = ");
  System.out.println(num1*num2);

  System.out.println("The value of num1 / num2 is = ");
  System.out.println(num1/num2);

  System.out.println("The value of num1 % num2 is = ");
  System.out.println(num1%num2);
  System.out.println("now different kind of operation we are going to perform ");
  System.out.println(num1++); // 45
  System.out.println(++num1); // 47
  System.out.println(num1--); // 47
  System.out.println(--num1); // 45


* 1. == : Check for equality of two values
* 2. != : Check if two values are not equal
* 3. <
* 4. >
* 5. <=
* 6. >=
*
*
* Logical Operators:
* 1. && - Logical and operator - retruns true only if both condition are true
* 2. || - Logical or operator - return true if any one  conditions are true
* 3. ! - Logical not - Reverse that result from true to false and vice versa

*/ 

/*   
// Taking user input in java

Scanner scan = new Scanner(System.in);
System.out.println("Enter a number");
// String input = scan.nextLine();
// String input = scan.next();
int input = scan.nextInt();


System.out.println(input);

*/

// String name = "SumaN";
// String channel = "SumanVit";

// System.out.println(name);
// System.out.println(name.length());
// System.out.println(name.toUpperCase());
// System.out.println(name.toLowerCase());



// System.out.println(name + " from\" " + channel);
// System.out.println(name + " from\\ " + channel);
// System.out.println(name + " from\t " + channel);
// System.out.println(name + " from\n " + channel);


// System.out.println(name.contains("u"));
// System.out.println(name.charAt(2)); // index start form 0
// System.out.println(name.endsWith("aN"));
// System.out.println(name.indexOf("ma"));
// System.out.println(name.indexOf("ka"));


// int num1 = 4, num2 = 7;
// System.out.println(Math.max(num1,num2));
// System.out.println(Math.min(num1,num2));
// System.out.println(Math.sqrt(36));
// System.out.println(Math.abs(-36));
// System.out.println(Math.abs(6));
// System.out.println(Math.random());
// System.out.println(4 + (800-4)*Math.random());
// System.out.println(4 + (800-4)*Math.random());
// System.out.println(4 + (800-4)*Math.random());
// System.out.println(4 + (800-4)*Math.random());



// If - else conditionals

// Scanner scan  = new Scanner(System.in);
// System.out.println("Enter Your Age ");
// int age = scan.nextInt();
// // System.out.println(age);

// if(age>20){
//   System.out.println("You are an adult");
// }else if(age>5){
//   System.out.println("You are not a kid");
// }
// else{
//   System.out.println("You are a kid");
// }


// Switch Statement in Java

// switch (age){
//   case 12: 
//      System.out.println("you are 12 years old");
//      break;
//    case 56:
//     System.out.println("You are 56 years old ");
//     break;  
//   case 16:
//   System.out.println("You are 16 years old");
//   break;
//   default:
//    System.out.println("You did not match any of the case");
// }

// Scanner s = new Scanner(System.in);
// System.out.println("Enter a number from 1 to 7 ");
// int day = s.nextInt();

// switch(day){
//   case 1:
//   System.out.println("Today is Monday..");
//   break;
//   case 2:
//   System.out.println("Today is Tuesday..");
//   break;
//   case 3:
//   System.out.println("Today is Wedenesday..");
//   break;
//   case 4:
//   System.out.println("Today is Thursday..");
//   break;
//   case 5:
//   System.out.println("Today is Friday..");
//   break;
//   case 6:
//   System.out.println("Today is Saturday..");
//   break;
//   default:
//   System.out.println("Today is Sunday..");
// }

// Loops

// for(int i=1; i<=10; i++){
//   System.out.println(i);
// }

// int j = 0;
// while(j<10){
//   System.out.println(j);
//   j++;
// }

// int k = 100;

// do{
//  System.out.println(k);
//  k++; 

// }while(k<0);

// for(int i=0; i<=10; i++){
//   if(i==2){
//     continue;
//   }
//     System.out.println(i);
  
// }

// Java Arrays

// int arr[5] = {1,2,3,4,5}; --> in C++
// int [] arr = {1,2,3,4,5}; -->in JAVA

int [] marks = {1,20,3,4,5};

marks[0] = 34;

// System.out.println(marks[0]);

// for(int i=0; i<marks.length; i++){
//   System.out.print(marks[i] + " ");
// }

// // for ecah loop 
// for(int value: marks){
//   System.out.print(value + " ");
// }

// 2d arrays
// int [][] matrix = {{1,2,3},{4,5,6}};

// System.out.println(matrix[0][1]);

// String [] cars = {"Maruti", "Suzuki", "Innova", "Ford Titanium", "Toyota"};

// for(String value: cars){
//   System.out.print(value + " ");
// }

// try - catch
String [] cars = {"Maruti", "Suzuki", "Innova", "Ford Titanium"};

try{
System.out.println(cars[5]);
}catch(Exception e){
System.out.println(e);
}

System.out.println("mansson");

System.out.println(sum(5,6));


  }
}