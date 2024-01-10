import java.util.Scanner;

import javax.sound.sampled.SourceDataLine;

public class project {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("");
        System.out.print("Enter your Number :");
        int a = sc.nextInt();
        System.out.print("Enter table number :");
        int b = sc.nextInt();
        int c = a / b;
        int h = 0;
        // System.out.println(c);
        for (int i = 0; i <= c; i++) {
            int d = b * i;
            h = h + d;
        }
        System.out.println(h);

    }
}
