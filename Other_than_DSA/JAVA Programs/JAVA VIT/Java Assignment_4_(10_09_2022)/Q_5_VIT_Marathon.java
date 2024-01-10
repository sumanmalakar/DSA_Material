class vit {
  String Name[] = { "Amit", "Vikas", "Anil", "Kamlesh", "Suhani", "Kavita", "jalaj" };

  int Time[] = { 341, 273, 278, 329, 445, 402, 388 };

  int fastest_runner() {
    int r = Time[0];
    int index = 0;
    for (int i = 1; i < Time.length; i++) {
      if (r > Time[i]) {
        r = Time[i];
        index = i;
      }
    }

    return index;
  }

  int second_fastest() {
    int fast_1 = fastest_runner();

    int second_fast_runner =  Time[0] - Time[fast_1];
    int index = 0;

    for (int i = 1; i < Time.length; i++) {
      int search = Time[i] - Time[fast_1];
      if ((second_fast_runner > search) && search != 0) {
        second_fast_runner = search;
        index = i;
      }
    }

    return index;

  }

  void fastest_runner1() {
    int f = fastest_runner();
    System.out.println("*********************");
    System.out.println("First_Fastest_Runner Name = " + Name[f] + "\n" + Name[f] +
        " time (in minutes) = " + Time[f]);
    System.out.println();
  }

  void fastest_runner2() {
    int s = second_fastest();
    System.out.println("*********************");
    System.out.println(
        "Second_Fastest_Runner Name = " + Name[s] + "\n" + Name[s] + " time (in minutes) = " + Time[s]);
    System.out.println();

  }
}

public class Q_5_VIT_Marathon {
  public static void main(String[] args) {

    vit v = new vit();

    v.fastest_runner1();
    v.fastest_runner2();

  }

}
