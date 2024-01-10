class Person {
    private int Age;
    private String Name;

    public void setAge(int a) {
        Age = a;
    }

    public void setName(String n) {
        Name = n;
    }

    public int getAge() {
        return (Age);
    }

    public String getName() {
        return (Name);
    }
}

class Student extends Person {
    private int Rollno;

    public void setRollno(int r) {
        Rollno = r;
    }

    public int getRollno() {
        return (Rollno);
    }
}

public class Example {
    public static void main(String[] args) {
        Student obj = new Student();
        obj.setRollno(45);
        obj.setName("SumanMalakar");
        obj.setAge(19);
        System.out.println("Roll No:" + obj.getRollno());
        System.out.println("Name:" + obj.getName());
        System.out.println("Age:" + obj.getAge());
    }
}