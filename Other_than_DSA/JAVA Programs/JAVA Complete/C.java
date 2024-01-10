import java.util.*;

public class C {
    public static void main(String[] args) {
       Scanner sc  = new Scanner(System.in);
       System.out.println("Enter your name ");
       String s = sc.nextLine();
       
      int n = s.length()-1;

    //   while(n>=0){
    //       System.out.print(s.charAt(n));
    //       n--;
    //   }
    
      //  String m = "";
      //  int i=0;
      //      while(i<n){
      //          char ch = s.charAt(i);
      //          if(ch == ' ')
      //   { for(int j=i; j<n; j++){
      //       m = m + s.charAt(j);
      //       if(s.charAt(j+1) ==' '){
      //           break;
      //       }
      //   }
      //   }
      //   if(m.length()>0){
      //       break;
      //   }
      //      i++;
      //  }
      //  System.out.println(m);

      // suman malakr = s.malakar
int i=0; 
String dot = "";
dot = dot + s.charAt(0);

while(i<n){
 // suman kumar malakar
  char ch = s.charAt(i);
  if(ch==' '){
dot = dot + s.charAt(i) +  ".";

String sub = "";
int j;
for( j=i+1; j<n; j++){
   sub = sub+ s.charAt(j);
   
} if(j==n){ 
if (s.charAt(j) == ' ') {
  break;
} else {
  dot = dot + sub + s.charAt(n);
  
}
}
  }
// dot = dot + s.charAt(i);
  
  
i++;

}
System.out.println(dot);



    }
}