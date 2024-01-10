// keval ek hi public class ho skti hai, ek file me aur class and file ka name same hona chahiye
public class oops{

  public static void main(String [] args)
  {  
    /*   
    System.out.println("Hello World!");

    creating object for person class
    Person p1 = new Person();
    p1.age = 24;
    p1.name = "Suman";
   
   Person p2 = new Person();
   p2.age = 31;
   p2.name = "Shivam";

      Person p3 = new Person(31, "Shivam Sharma");

    System.out.println(p1.age + " " + p1.name);
    System.out.println(p2.age + " " + p2.name);
      

acess methods(function) of person class
    p1.eat();
    p2.walk();
    p2.walk(5);

    System.out.println(Person.count);

    Developer d1 = new Developer(24, "Suman Malakar!..");

    d1.walk(); */ 

    // EncapsulationIntro obj = new EncapsulationIntr();

    obj.doWork();
    

  }
}

// inheritace using extends keyword
class Developer extends Person{
   
   // contructor
   public Developer(int age, String name){
     super(age, name);
      /* super keyword parent ke contructor ko call karne me kam aata hai..  */
   }

     void walk(){
    System.out.println( "Developer "+ name + " is walking." );
  }

} 


class Person{
 protected String name;
  int age;

// static bante hi ye(count) ab class ki property ho chuki hai, object ki property nhi rhi
 static int count;

// default constructor it's name is same as class name
// constructor's are use to create new - new objects

  public Person(){
    count++;
    System.out.println("Creating an object");
  }


  // contructor overload
  public Person(int age, String name ){
    // this(); // ek constructor se dusra call karna ho to this keyword ka use karte hai (iska 2 use hai)
    this.name = name;
    this.age = age;
  }

   void walk(){
    System.out.println( name + " is walking." );
  }


  void eat(){
    System.out.println(name + " is eating. ");
  }

  void walk(int steps){
    System.out.println(name + " walked " + steps);
  }
  
  void doWork(){
    System.out.println("Person is working ");
  }


}