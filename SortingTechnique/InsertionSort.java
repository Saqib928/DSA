package SortingTechnique;

public class InsertionSort {

  public static void isort(int num[]) {
    for (int i = 1; i < num.length; i++) {
      int curr = num[i];
      int prev = i-1;
      while (prev >= 0 && num[prev] > curr) {
        num[prev+1] = num[prev];
        prev--;
      }
      num[prev + 1] = curr;
    }
  }

  public static void print(int arr[]) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static void main(String[] args) {
    int num[] = { 4, 5, 3, 2, 6, 1 };
    isort(num);
    print(num);
  }
}
