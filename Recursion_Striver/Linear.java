public class Linear {
  public static void main(String[] args) {
    
  
  int [] arr={1,4,3,5,8};
  int x=50;
  for(int i=0;i<arr.length-1;i++){
    if(arr[i]==x){
      System.out.println(i);
      return;
    }
  }
  System.out.println("Not found");
}
}