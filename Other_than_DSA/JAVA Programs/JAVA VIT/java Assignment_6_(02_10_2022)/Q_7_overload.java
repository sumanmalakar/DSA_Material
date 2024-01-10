class Overload {
   int nextValue(int a)
 {
    a=a+1;
    return a;
 } float nextValue(float a)
 {
    a=a+1;
    return a;
 } double nextValue(double a)
 {
    a=a+1;
    return a;
 } int nextValue()
 {
    System.out.println("null");
    return 0;
 } char nextValue(char a)
 {
    a++;
    return a;
 } String nextValue(String a)
 {
    String nstr="";
    char p=' ';
    char ch;
    for(int i=0;i<a.length();i++)
    {
        if(i==a.length()-1)
        {
        p=a.charAt(i);
        p++;
        break;
        }
        ch=a.charAt(i);
        nstr=nstr+ch;
    }
    nstr=nstr+p;
    return nstr;
 }
}

  public class Q_7_overload {
      
    public static void main(String [] args)
    {
        Overload ob=new Overload();
        System.out.println(ob.nextValue(5));
        System.out.println(ob.nextValue("pavan"));
        System.out.println(ob.nextValue(4.8f));
        System.out.println(ob.nextValue(9.87));
        System.out.println(ob.nextValue('u'));
        ob.nextValue();
    }
}
