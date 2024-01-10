import java.util.Scanner;
public class Cal {
    public static void main(String[] args) {
        Scanner O=new Scanner(System.in);
    int x;
    int a,b;
    int c=0;
        System.out.println("Enter 1 for add 2 for multiply 3 for subtract 4 for divide");
        x=O.nextInt();
         System.out.println("Enter variable 1");
           a=O.nextInt();
         System.out.println("Enter variable 2");
           b=O.nextInt();
        switch(x)
        {
            case 1:
                c=a+b;
                break;
            case 2:
                 c=a*b;
                 break;
            case 3:
                 c=a-b;
                 break;
            case 4:
                 c=a/b;
            default:
                System.out.println("Error!!! Wrong input");
        }
        
        System.out.println("Answer is "+c);
    }
    
}
