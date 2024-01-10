class Q_1_logic {
  // System.out.println("Enter a limit number");
  int calc(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
      if ((i % 3 == 0) || (i % 5 == 0)) {
        sum = sum + i;
      }
      // i++;
    }
    return sum;
  }

  public static void main(String[] args) {
    Q_1_logic m = new Q_1_logic();
    int sum = m.calc(10);
    System.out.println("Sum is " + sum);
  }
}
