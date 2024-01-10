class Abstraction{
  public static void main(String [] args){

Audi a1 = new Audi();
a1.start();

  }
}

class Audi extends Car {
 void start(){
        System.out.println("Audi is starting ");

 }

}

class BMW extends Car{
      void start(){
        System.out.println("BMW is starting ");
      }
}

abstract class Car{
 
  int price;
  abstract void start();
}