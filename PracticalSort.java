// import java.util.Scanner;
import java.util.*;

public class PracticalSort {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of boxes (N) and the position of the Head Post Master's office (k):");
        int N = scanner.nextInt();
        int k = scanner.nextInt();

        System.out.println("Enter the weights of the boxes (N space-separated integers):");
        int[] weights = new int[N];
        for (int i = 0; i < N; i++) {
            weights[i] = scanner.nextInt();
        }

        long totalEffort = sortParcels(N, k, weights);
        
        System.out.println("Total effort to sort the boxes and place the heaviest at position " + k + ": " + totalEffort);

        scanner.close();
    }

    public static long sortParcels(int N, int k, int[] weights) {
        int maxWeight = weights[0];
        int maxIndex = 0;

        for (int i = 1; i < N; i++) {
            if (weights[i] > maxWeight) {
                maxWeight = weights[i];
                maxIndex = i;
            }
        }

        long totalEffort = 0;

        if (k != 1) {
            // Swap the heaviest box to the first position
            totalEffort = (long) maxWeight * weights[0];
            int temp = weights[0];
            weights[0] = maxWeight;
            weights[maxIndex] = temp;
        }

        for (int i = 1; i < N - 1; i++) {
            totalEffort += (long) weights[i] * weights[i + 1];
        }

        return totalEffort;
    }
}
