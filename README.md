<a href="https://flutter.dev/">
  <h1 align="center">
    <picture>
      <source media="(prefers-color-scheme: dark)" srcset="https://raw.githubusercontent.com/akgmage/go-web/master/templates/assets/DSA.png">
      <img alt="Data Structures & Algorithms" src="https://raw.githubusercontent.com/akgmage/go-web/master/templates/assets/DSA.png">
    </picture>
  </h1>
</a>

# Implementation of well known Data Structures and Algorithms

🌈 Everyone is welcome!
You can join the fun by following our [contributing](https://github.com/akgmage/data-structures-and-algorithms/blob/main/CONTRIBUTING.md) guide.

# Sorting

Sorting a list of items into ascending or descending order can help either a human or a computer find items on that list quickly, perhaps using an algorithm like binary search. Most Programming languages have built-in sorting methods. It works on arrays of numbers, or even on arrays of strings:

```
heights = [6, 5, 4, 5, 2, 3];
heights.sort();
Output : [2, 3, 4, 5, 5, 6]
```

Even though languages have built-in sorting method, sorting is a great example of how there may be many ways to think about the same problem, some perhaps better than others. Understanding sorting is a traditional first step towards mastery of algorithms and computer science.

### Well known sorting algorithms

- Bubble Sort [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/bubble_sort.go) [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/bubble_sort.cpp) [Java](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/bubble_sort.java) [Javascript](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/bubble_sort.js) [Python](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/bubble_sort.py)
- Insertion Sort [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/insertion_sort.go) [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/insertion_sort.cpp) [Java](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/insertion_sort.java) [Javascript](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/insertion_sort.js) [Python](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/insertion_sort.py)
- Selection Sort [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/selection_sort.go) [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/selection_sort.cpp) [Java](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/selection_sort.java) [Javascript](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/selection_sort.js) [Python](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/selection_sort.py)
- Merge Sort [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/merge_sort.go) [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/merge_sort.cpp) [Java](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/merge_sort.java) [Javascript](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/merge_sort.js) [Python](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/merge_sort.py)
- Quick Sort [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/quick_sort.cpp) [Java](https://github.com/akgmage/data-structures-and-algorithms/blob/main/sorting/quick_sort.java)

# Pattern 1: Two Pointers

As the name suggests, the two pointers pattern uses two pointers to iterate over an array or list until the conditions of the problem are satisfied. This is useful because it allows us to keep track of the values of two different indexes in a single iteration. Whenever there’s a requirement to find two data elements in an array that satisfy a certain condition, the two pointers pattern should be the first strategy to come to mind.

The pointers can be used to iterate the data structure in one or both directions, depending on the problem statement. For example, to identify whether a string is a palindrome, we can use one pointer to iterate the string from the beginning and the other to iterate it from the end. At each step, we can compare the values of the two pointers and see if they meet the palindrome properties.

## Practice problems for two pointers

- Two sum [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Hash%20Table/two_sum.go) [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Hash%20Table/two_sum.cpp) [Java](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Hash%20Table/two_sum.java) [Python](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Hash%20Table/two_sum.py)

- Three Number Sum [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Arrays/triplet_sum.go) [Java](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Arrays/triplet_sum.java) [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Arrays/triplet_sum.cpp) [Python](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Arrays/triplet_sum.py) [Javascript](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Arrays/triplet_sum.js)

- Valid Pallindrome [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Strings/is_pallindrome.go) [Javascript](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Strings/is_%20palindrome.js)

- Reverse Word in a String [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Strings/reverse_word_in_a_string.go) [Javascript](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Strings/reverse_word_in_a_string.js)

- Valid Pallindrome II [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Strings/valid_pallindrome2.go) [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Strings/valid_pallindrome2.cpp)

# Pattern 2: Fast and Slow Pointers

The fast and slow pointer technique (also known as the tortoise and hare algorithm) uses two pointers to determine traits about directional data structures. This can be an array, singly-linked list, or a graph.

Similar to the two pointers pattern, the fast and slow pointers pattern uses two pointers to traverse an iterable data structure at different speeds. It’s usually used to identify distinguishable features of directional data structures, such as a linked list or an array.

The pointers can be used to traverse the array or list in either direction, however, one moves faster than the other. Generally, the slow pointer moves forward by a factor of one, and the fast pointer moves by a factor of two in each step. However, the speed can be adjusted according to the problem statement.

Unlike the two pointers approach, which is concerned with data values, the fast and slow pointers approach is used to determine data structure traits using indices in arrays or node pointers in linked lists. The approach is commonly used to detect cycles in the given data structure, so it’s also known as Floyd’s cycle detection algorithm.

The key idea is that the pointers start at the same location, but they move forward at different speeds. If there is a cycle, the two are bound to meet at some point in the traversal. To understand the concept, think of two runners on a track. While they start from the same point, they have different running speeds. If the race track is a circle, the faster runner will overtake the slower one after completing a lap. On the other hand, if the track is straight, the faster runner will end the race before the slower one, hence never meeting on the track again. The fast and slow pointers pattern uses the same intuition.

## Practice problems for fast and slow pointers

- Linked List cycle detection [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Fast%20and%20Slow%20Pointers/linked_floyds_cycle_detection.cpp)
- Find middle of Linked List [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Fast%20and%20Slow%20Pointers/linked_list_compute_midpoint.cpp) [Python](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Fast%20and%20Slow%20Pointers/linked_list_find_middle.py)
- Happy Number [Go](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Fast%20and%20Slow%20Pointers/happy_number.go)
- Pallindrome Linked List
- Remove Kth node from end [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Linked%20List/linked_list_remove_nth_node_from_end.cpp)
- Linked List Sort List [C++](https://github.com/akgmage/data-structures-and-algorithms/blob/main/Linked%20List/liniked_list_sort_list.cpp)

# Pattern 3: Sliding Window

The Sliding window is a problem-solving technique of data structure and algorithm for problems that apply arrays or lists. These problems are painless to solve using a brute force approach in O(n²) or O(n³). However, the Sliding window technique can reduce the time complexity to O(n).

The sliding window pattern is a computational method aimed at reducing the use of nested loops in an algorithm. It’s a variation of the two pointers pattern, where the pointers can be used to set window bounds.

A window is a sublist formed over a part of an iterable data structure. It can be used to slide over the data in chunks corresponding to the window size. The sliding window pattern allows us to process the data in segments instead of the entire list. The segment or window size can be set according to the problem’s requirements. For example, if we have to find three consecutive integers with the largest sum in an array, we can set the window size to 3. This will allow us to process the data three elements at a time.

Why is this method more efficient? It isn’t if, for each window, we iterate over all the elements of the window because that gives us the same O(kn) time complexity.

Instead, what if we focused on the element entering the window and the one leaving it? For example, after calculating the sum of the first three elements, we move the window one step forward, subtract the element that is no longer in the window from the sum, and add the new element that has entered it. Next we check if the new sum is greater than the first. If it is, we update the max sum found so far. Now, each time we move the window forward, we perform at most four operations, reducing the time complexity to O(4n), that is, O(n).

## Practice problems for sliding window

- Find Maximum in Sliding Window
- Minimum Window Subsequence
- Repeated DNA Sequences
- Minimum Window Substring
- Longest Substring without Repeating Characters

# Pattern 4: Merge Interval

The merge intervals pattern deals with problems involving overlapping intervals. Each interval is represented by a start and an end time. For example, an interval of [10,20] seconds means that the interval starts at 10 seconds and ends at 20seconds, such that both 10 and time 20 are included in the interval.

The most common problems solved using this pattern are scheduling problems.

The key to understanding this pattern and exploiting its power lies in understanding how any two intervals may overlap.

Many problems in the real world use the merge intervals pattern. Let’s look at some examples.

- Display busy schedule: Display the busy hours of a user to other users without revealing the individual meeting slots in a calendar.

- Schedule a new meeting: Add a new meeting to the tentative meeting schedule of a user in such a way that no two meetings overlap each other.

- Task scheduling in operating systems (OS): Schedule tasks for the OS based on task priority and the free slots in the machine’s processing schedule.

## Practice problems for merge intervals

- Merge Intervals
- Insert Interval
- Interval List Intersections
- Employee Free Time
- Meeting Rooms

# Pattern 5: In-place Reversal of a Linked List

The in-place reversal of a linked list pattern allows us to reverse a linked list without any additional memory, using only the given nodes.

Many problems require a reversal of a set of nodes in a linked list without using additional memory. In such cases, using the in-place reversal pattern is the simplest solution. Instead of making a new linked list with reversed links, we can do it in place, without using additional memory.

How can we achieve an in-place reversal of nodes? We iterate in a linked list and keep track of the current node, the next node, and the previous node simultaneously. Keeping track of the nodes allows us to easily change the links between them and make them point to a different node than before.

When solving such problems, the naive approach of iterating the linked list using nested loops takes O(n²) time. However, using the in-place reversal pattern, the time complexity is O(n)
time, since we use a single loop to iterate the linked list.

Similarly, for space complexity: the naive approach requires the use of additional memory—if a linked list contains thousands of nodes, we’d need to allocate a lot of additional memory resources to solve the problem. However, the in-place reversal of a linked pattern will use only O(1) space.

## Practice problems for in-place reversal of a linked list

- Reverse Linked List
- Reverse Nodes in k-group
- Reorder List
- Swapping Nodes in a Linked List
- Swapping Nodes in Ppairs
