class constructor1 {
    private int id;
    private String name;

    public constructor1() {
        id = 1266;
        name = "mukul singh";
        System.out.println("Default constuctor called!");
    }

    public constructor1(int myid, String myname) {
        id = myid;
        name = myname;
    }

    public void setname(String n) {
        name = n;
    }

    public String getname() {
        return name;
    }

    public void setId(int i) {
        id = i;
    }

    public int getid() {
        return id;
    }
}

public class I {
    public static void main(String[] args) {

        constructor1 mukul = new constructor1();
        constructor1 glady = new constructor1(1234, "glady");
        constructor1 suman = new constructor1(12345, "suman");

        System.out.println(mukul.getid());
        System.out.println(mukul.getname());

        System.out.println(glady.getid());
        System.out.println(glady.getname());

        System.out.println(suman.getid());
        System.out.println(suman.getname());

    }

}