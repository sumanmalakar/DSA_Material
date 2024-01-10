class A {
    public void f1(int x) {
        System.out.println("SumanMalakar");

    }
}

class B extends A {
    public void f1(int x) {
        System.out.println("AmanMalakar");

    }
}

public class Example {
    public static void main(String[] args) {
        B obj = new B();
        obj.f1(5);
    }
}