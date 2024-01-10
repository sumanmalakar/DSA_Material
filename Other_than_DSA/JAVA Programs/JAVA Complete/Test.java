
class Test{
  public static void main(String[] args) {
  //   int i = 0, a = 0, n = 0;
  //   while ((i = a += 2) <= 100) {
  //     n++;

  //   System.out.println(i + " " + a + " " + n);

  //   }

  //   System.out.println(i + " " + a + " " + n);
  // }

  // String s = "Jacobian";
  // System.out.println(s.indexOf('J'));
  // System.out.println(s.indexOf('c'));
  // System.out.println(s.indexOf('a'));
  // System.out.println(s.indexOf('j'));
  // System.out.println(s.indexOf('c')-1);

  int i,j;
  for(j=0,i=0; j<=100; j++){
    if(j%2==0)
      j++;
    else
      i++;


  System.out.println(j+" "+i);
  // System.out.println(i);

  }

  System.out.println(i);
  }
}