class MyException extends Exception{
String str1;
MyException(String str2)
{str1=str2;}
public String toString()
{return("Ex - facebook" +str1);}
}
class Example{
public static void main(String [] args)
{
try{
System.out.println("SUMAN");
throw new MyException("This is my error message :- ");
}
catch(MyException exp)
{
System.out.println("JAVA");
System.out.println(exp);
}
}}