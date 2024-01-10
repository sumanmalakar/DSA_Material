import java.util.*;
public class ScannerDemo1
{
public static void main(String [] args)
{
Scanner sc = new Scanner(System.in);
String name = sc.nextLine();
char gender = sc.next().charAt(0);
int age = sc.nextInt();
long mobileNo = sc.nextLong();
System.out.println("Name:" +name);
System.out.println("Gender :" +gender);
System.out.println("Age:" +age);
System.out.println("Mobile Number:" +mobileNo);
}
}