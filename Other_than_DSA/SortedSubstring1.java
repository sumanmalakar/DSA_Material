import java.util.Arrays;

class SortedSubstring1 {

    public static void substringSort(String[] arr, int n, int maxLen) {

        int count[] = new int[maxLen];
        String[] sortedArr = new String[maxLen];

        Arrays.fill(count, 0);
        Arrays.fill(sortedArr, "");

        // sort the input array
        for (int i = 0; i < n; i++) {

            String s = arr[i];
            int len = s.length();

            if (count[len - 1] == 0) {
                sortedArr[len - 1] = s;
                count[len - 1] = 1;
            } else if (sortedArr[len - 1].equals(s)) {

                // repeated length should be the same string
                count[len - 1]++;
            } else {

                // two different strings with the same
                // length input array cannot be sorted
                System.out.println("Cannot be sorted");
                return;
            }
        }

        // validate that each string is a substring
        // of the following one
        int index = 0;

        // get first element
        while (count[index] == 0)
            index++;

        int prev = index;
        String prevString = sortedArr[prev];

        index++;

        for (; index < maxLen; index++) {

            if (count[index] != 0) {
                String current = sortedArr[index];
                if (current.contains(prevString)) {
                    prev = index;
                    prevString = current;
                } else {
                    System.out.println("Cannot be sorted");
                    return;
                }
            }
        }

        // The array is valid and sorted
        // print the strings in order
        for (int i = 0; i < maxLen; i++) {
            String s = sortedArr[i];
            for (int j = 0; j < count[i]; j++) {
                System.out.println(s);
            }
        }
    }

    public static void main(String[] args) {
        int maxLen = 100;

        // Test 1
        String[] arr1 = { "d", "zddsaaz", "ds", "ddsaa",
                "dds", "dds" };
        substringSort(arr1, arr1.length, maxLen);

        // Test 2
        String[] arr2 = { "for", "rof" };
        substringSort(arr2, arr2.length, maxLen);
    }
}
