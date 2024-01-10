class Base { // Super Class
  int x;

  public int getX() {
    return x;
  }

  public void setX(int x) {
    System.out.println("I am in base and setting x now..");
    this.x = x;
  }

  public void printMe() {
    System.out.println("I am a constructor ..");
  }
}

class Derived extends Base { // child class
  int y;

  public int getY() {
    return y;
  }

  public void setY(int y) {
    System.out.println("I am in Derived class and setting to the value of Y");
    this.y = y;
  }

}

public class Inheritance {
  public static void main(String[] args) {
    // Base b = new Base();
    // b.setX(4);
    // System.out.println(b.getX());

    Derived d = new Derived();
    d.setX(4);
    d.setY(19);
    System.out.println(d.getX());
    System.out.println(d.getY());

  }
}
