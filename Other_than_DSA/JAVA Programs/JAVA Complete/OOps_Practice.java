
class Employee{
  int salary;
  String name;

  public int getSalary(){
return salary;
  }

  public String getName(){
    return name;
  }

  public void setName(String n){
   name = n;
  }

}
class CellPhone{
  public void ringing(){
    System.out.println("Ringing...");
  }
  public void vibrating(){
    System.out.println("Vibrating...");
  }

}

class Square{
   int side;
   public int area(){
     return side*side;
   }
   public int perimeter(){
     return 4*side;
   }
}

class Tommy{
  public void hit(){
    System.out.println("Hitting the enemy");
  }
  public void run(){
    System.out.println("Running from the enemy");
  }
  public void fire(){
    System.out.println("Firing on the enemy");
  }
}

public class OOps_Practice {
  public static void main(String [] args){
    
// Employee class object
Employee e1 = new Employee();
e1.setName("Suman Malakar");
e1.salary = 500;
System.out.println("Name = "+ e1.getName()+"\nSalary = "+e1.salary );


// Cellphone Class Object
CellPhone vivo = new CellPhone();
vivo.vibrating();
vivo.ringing();



 // Square class object
 Square s = new Square();
s.side = 10;
System.out.println("Area = "+s.area()+ "\nPerimeter = "+s.perimeter());


// Tommy class object
Tommy t = new Tommy();
t.fire();
t.hit();
t.run();


  }
}
