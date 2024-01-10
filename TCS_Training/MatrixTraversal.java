import java.util.*;

public class MatrixTraversal {

  public static int count = 0;

  private static void printMatrix(int mat[][], int m, int n,
      int i, int j, List<Integer> list) {
    // return if i or j crosses matrix size
    if (i > m || j > n)
      return;
    list.add(mat[i][j]);
    if (i == m && j == n) {
      count++;
    }
    printMatrix(mat, m, n, i + 1, j, list);
    printMatrix(mat, m, n, i, j + 1, list);
    list.remove(list.size() - 1);

  }

  // Driver code
  public static void main(String[] args) {
    int m = 3;
    int n = 3;
    int mat[][] = { { 1, 2, 3 },
        { 4, 5, 6 }, { 3, 4, 5 } };

    List<Integer> list = new ArrayList<>();
    printMatrix(mat, m - 1, n - 1, 0, 0, list);
    System.out.println(count);
  }
}

