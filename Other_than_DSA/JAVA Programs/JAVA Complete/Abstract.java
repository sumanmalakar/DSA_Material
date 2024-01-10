//Example of an abstract class that has abstract and non-abstract methods  
abstract class Laptop {
  Laptop() {
    System.out.println("Laptop is created");
  }

  abstract void show();

  abstract void run();
  // abstract void window();

  void ssdUpdated() {
    System.out.println("ssd changed");
  }
}

// Creating a Child class which inherits Abstract class
class  Dell extends Laptop {
  void run() {
    System.out.println("Dell is  running so fast...");
  }
  void show(){
    System.out.println("Showing the dell laptop configration ...");
  }
}

class Hp  extends Laptop{
  void run() {
    System.out.println("Hp is  running so fast...");
  }
  
  void show() {
    System.out.println("Showing the hp laptop configration ...");
  }
}

// Creating a Test class which calls abstract and non-abstract methods
class Abstract {
  public static void main(String args[]) {
    Laptop obj;
    obj = new Dell();
    obj = new Hp();
    obj.show();
    obj.run();
    obj.ssdUpdated();
  }
}