import java.util.Scanner;
public class Q_5_even_sum {

    public static void main(String [] args)
   {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the n value");
    int n=sc.nextInt();
    sc.close();
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    System.out.println("The sum of even integers is "+sum);
   } 
}

}
