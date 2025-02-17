// Implementation of selection sort.
// Selection sort is an in-place comparison sorting algorithm.
// It has an O(n^{2}) time complexity which makes it inefficient on large lists,
// and generally performs worse than the similar insertion sort.
// Selection sort is noted for its simplicity and has performance advantages
// over more complicated algorithms in certain situations,
// particularly where auxiliary memory is limited. (Source wiki) https://en.wikipedia.org/wiki/Selection_sort

// Sample Input : [2, 1, 9, 3, 5, 4, 0]
// Output : [0 1 2 3 4 5 9]

import java.util.Arrays;

class SelectionSort {
  void selectionSort(int array[])
   {
    int size = array.length;

    for (int step = 0; step < size - 1; step++)
     {
      int min_idx = step;

      for (int i = step + 1; i < size; i++) 
      {
        // To sort in descending order, change > to < in this line.
        // Select the minimum element in each loop.

        if (array[i] < array[min_idx])
        {
          min_idx = i;
        }
      }

      // put min at the correct position
      
      int temp = array[step];
      array[step] = array[min_idx];
      array[min_idx] = temp;
    }
  }

  // driver code
  public static void main(String args[]) 
  {
    int[] data = { 20, 12, 10, 15, 2 };
    SelectionSort ss = new SelectionSort();
    ss.selectionSort(data);
    System.out.println("Sorted Array in Ascending Order: ");
    System.out.println(Arrays.toString(data));
  }
}