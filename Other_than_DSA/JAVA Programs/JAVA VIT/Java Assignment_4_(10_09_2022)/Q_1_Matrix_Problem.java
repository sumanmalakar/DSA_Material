public class Q_1_Matrix_Problem {
  public static void main(String[] args) {
    int rows, cols, sumRow, sumCol, each_element_sum;

    // Initialize matrix a
    int a[][] = {
        { 1, 20, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    // Calculates number of rows and columns present in given matrix
    rows = a.length;
    cols = a[0].length;

    each_element_sum = 0;
    int check1 = 0;
    int row_index = 0;
    for (int i = 0; i < rows; i++) {
      sumRow = 0;
      for (int j = 0; j < cols; j++) {
        sumRow = sumRow + a[i][j];
        if (check1 < sumRow) {
          check1 = sumRow;
          row_index = i + 1;
        }
      }
      System.out.println("Sum of " + (i + 1) + " row: " + sumRow);
      each_element_sum = each_element_sum + sumRow;
    }

    int check2 = 0;
    int col_index = 0;
    for (int i = 0; i < cols; i++) {
      sumCol = 0;
      for (int j = 0; j < rows; j++) {
        sumCol = sumCol + a[j][i];
        if (check2 < sumCol) {
          check2 = sumCol;
          col_index = i + 1;
        }
      }
      System.out.println("Sum of " + (i + 1) + " column: " + sumCol);
    }
    System.out.println(
        "Sum of each element =  " + each_element_sum);
    System.out.println(
        "Row number having largest sum = " + row_index);
    System.out.println(
        "column number having largest sum = " + col_index);

  }
}