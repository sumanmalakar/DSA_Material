class Employee {
  int id;
  String name;
}

public class Custome_Class {
  public static void main(String[] args) {
    System.out.println("This is over custome class");

    Employee suman = new Employee();
    suman.id = 123;
    suman.name = "Let's code together";
    
    System.out.println(suman.id);
    System.out.println(suman.name);
  }
}
