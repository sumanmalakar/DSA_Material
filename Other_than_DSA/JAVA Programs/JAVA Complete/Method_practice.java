public class Method_practice {

  static void multiplication(int n) {
    for (int i = 1; i <= 10; i++) {
      System.out.println(n + " X " + i + " = " + n * i);
    }
  }

  static void star(int n) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print("* ");
      }
      System.out.println();
    }
  }

  static int sumRec(int n) {
    if (n == 1) {

      return 1;
    }

    return n + sumRec(n - 1);

  }

  static void star2() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j++) {
        System.out.print("* ");
      }
      System.out.println();
    }

  }

  static int fibo(int n){
    if(n==0 || n==1)return n;

    return fibo(n-1) + fibo(n-2);
  }

 static void pattern_Recursive(int n){
   if(n<0) return;
   pattern_Recursive(n-1);
   for(int i=0; i<n; i++){
     System.out.print("* ");
   }
   System.out.println();
 }
  public static void main(String[] args) {
    // problem 1
    // multiplication(5);

    // problem 2
    // star(5);

    // problem 3
    // System.out.println("Sum = "+sumRec(5));

    // problme 4
    // star2();

    // problem 5
    // System.out.println("The element of fibo series = "+ fibo(7));

    //problem 6
    pattern_Recursive(5);
  }

}
