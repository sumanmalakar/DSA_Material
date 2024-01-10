class A {
  int i, j;

  A() {
    System.out.println("hello a");
  }

  A(int a, int b) {
    i = a;
    j = b;
  }

  void show() {
    System.out.println("i and j  = " + i + " " + j);
  }
}

class B extends A {
  int k;

  B(int a, int b, int c) {

    super(a, b);
    k = c;
  }

  void show() {
    super.show();
    System.out.println("k is = " + k);
  }
}

public class TestSuper1 {
  public static void main(String[] args) {
    B b = new B(1, 2, 3);
    b.show();

  }
}