class MyMainEmployee {
  private int id;
  private String name;

  public MyMainEmployee(){
    id = 45;
    name = "Ram Sharma";
  }

  // parameterize constructor
  public MyMainEmployee(String myName, int id) {
    this.id = id;
    name = myName;
  }

  // parameterize constructor
  public MyMainEmployee(String myName) {
    this.id = 98;
    name = myName;
  }

  public String getName() {
    return name;
  }

  public int getId() {
    return id;
  }


}

public class Constructor{
  public static void main(String [] args){

  //  MyMainEmployee suman = new MyMainEmployee("Suman Malakar", 50);
  // MyMainEmployee suman = new MyMainEmployee("Suman Coder Malakar");
  MyMainEmployee suman = new MyMainEmployee();
   System.out.println(suman.getId());
   System.out.println(suman.getName());
   
  }
}