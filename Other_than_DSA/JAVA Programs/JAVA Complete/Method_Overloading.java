class A {
  static void change(int a) {
    
    a = 98;
  }

  static void change2(int[] arr) {
    arr[0] = 98;
  }

  static void telJoke() {
    System.out.println("This is normal joke");
  }

static void foo(){
  System.out.println("Good morning bro!");
}

static void foo(int a){
  System.out.println("Good morning " + a + " bro!");
}

static void foo(int a, int b){
  System.out.println("Good morning " + a + "bro!");
  System.out.println("Good morning " + b + " bro!");
}

static int  foo(int a, int b, int c) {
  System.out.println("Good morning " + a + "bro!");
  System.out.println("Good morning " + b + " bro!");
  return 1;
}


 
}
public class Method_Overloading{
  public static void main(String[] args) {
    // telJoke();

    // int[] marks = { 52, 73, 77, 89, 98, 94 };
    // // Case 1: Changing the integer
    // int x = 45;
    // change(x);
    // System.out.println("The value of x after running change function is = " + x);

    // // Case 2: Changing the array
    // int[] marks = { 52, 73, 77, 89, 98, 94 };
    // change2(marks);

    // for (int element : marks) {
    // System.out.print(element + " ");
    // }

    // Method Overloading (return type same hona chahiye bus argument different ho
    // skte hai)
    // A.foo();
    A.foo(500);
    // foo(400, 600); // argument are actual

  }
}