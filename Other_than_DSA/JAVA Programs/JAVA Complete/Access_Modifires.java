class MyEmployee {
  private int id;
  private String name;

  public String getName() {
    return name;
  }

  public int getId() {
    return id;
  }

  public void setName(String n) {
    name = n;
  }

  public void setId(int t) {
    id = t;
  }
}

public class Access_Modifires {
  
  public static void main(String[] args) {

    MyEmployee suman = new MyEmployee();
    suman.setId(12);
    suman.setName("Suman Malakar");
    System.out.println(suman.getId());
    System.out.println(suman.getName());

  }
}
