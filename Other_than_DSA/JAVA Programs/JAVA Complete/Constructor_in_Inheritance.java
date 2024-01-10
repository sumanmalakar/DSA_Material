class Base1{
  public Base1(){
    System.out.println("I am a Constructor..");
  }

  Base1(int a){
    System.out.println("I am a overloaded constructor with value of a as: " +a);
  }

}

class Derived1 extends Base1{
  Derived1(){
    // super(9);
    System.out.println("I am a derived class constructor...");
  }

  Derived1(int x, int y){
    super(x);
    System.out.println("I am an overloaded constructor of Derived with vlaue of x and y = "+x+ " "+y);
  }

}

class ChildOfDerived extends Derived1{
  ChildOfDerived(){
    System.out.println("I am a child of derived constructor..");
  }
  ChildOfDerived(int x, int y, int z){
    super(x,y);
    System.out.println("I am an overloaded constructor of ChildDerived with vlaue of x , y , z =  " + x +" "+ y+ " " + z);
  }
}

public class Constructor_in_Inheritance {
  public static void main(String [] args){
// Base1 b = new Base1();
// Derived1 d = new Derived1();
// Derived1 d = new Derived1(5,6);
ChildOfDerived d = new ChildOfDerived(5,6,2);

  }
}
