class Arrays {
  public static void main(String[] args) {

    int [] marks = new int[5];
    marks[0] = 100;
    marks[1] = 60;
    marks[2] = 80;
    marks[3] = 50;
    marks[4] = 30;
  

    for(int i=0; i<marks.length; i++){
      System.out.print(marks[i] + " ");
    }

    System.out.println();

    int [] marks2 = {100,60,80,50,30,10};

    for (int i = 0; i < marks2.length; i++) {
      System.out.print(marks2[i] + " ");
    }

    System.out.println();

    // forEach_Loop
    for(int x : marks2){
      System.out.println(x + " ");
    }


  }
}