class A{
  void callme(){
    System.out.println("Inside A's callme");
  }
}
class B extends A{
  void callme(){
    System.out.println("Inside B's callme");

  }
}

class C extends A {
  void callme() {
    System.out.println("Inside C's callme");

  }
}

public class Dynamic_Method_dispatch {
  public static void main(String [] args){
    A a = new A();
    B b = new B();
    C c = new C();

    A r;
    r = a;
  }


}
