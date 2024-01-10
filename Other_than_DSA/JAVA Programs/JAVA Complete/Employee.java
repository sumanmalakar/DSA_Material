 class Emp{
  String eid;
  String name;
  double salary;

  Emp(String id, String name, double salary){
    this.eid = id;
    this.name = name;
    this.salary = salary;

  }

  void show(){
    System.out.println("id "+ eid);
    System.out.println("name "+name);
    System.out.println("salary "+salary);
  }
 

}
public class Employee{
  public static void main(String[] args) {
    Emp e = new Emp("123", "raj", 67363.890);
    e.show();
  }
}