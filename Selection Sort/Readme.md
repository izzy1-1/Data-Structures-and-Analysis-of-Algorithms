# **Selection Sort Algorithm**
Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.

## **Working of Selection Sort**
1. Set the first element as `minimum`.

![Select first element as minimum](SelectionSort-Images/Example(1).png) 

2. Compare `minimum` with the second element. If the second element is smaller than `minimum`, assign the second element as `minimum`.

   Compare `minimum` with the third element. Again, if the third element is smaller, then assign `minimum` to the third element otherwise do nothing. The process goes on until the last element. 

![Compare minimum with the remaining elements](SelectionSort-Images/Example(2).png)

3. After each iteration, `minimum` is placed in the front of the unsorted list. 

![Swap the first with minimum](SelectionSort-Images/Example(3).png)

4. For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions. 

![The first iteration](SelectionSort-Images/Example(4).png)

![The second iteration](SelectionSort-Images/Example(5).png)

![The third iteration](SelectionSort-Images/Example(6).png)

![The fourth iteration](SelectionSort-Images/Example(7).png)

## Selection Sort Algorithm
1. Start with the first element of the array as the minimum (minIndex).
2. Set i to 0.
3. Repeat until i is less than the size of the array minus 1:
   1. Set minIndex to i.
   2. Initialize j to i + 1.
   3. While j is less than the size of the array:
      1. If the element at j is less than the element at minIndex, then:
         1. Update minIndex to j.
      2. Increment j by 1.
   4. If minIndex is not equal to i, then:
      1. Swap the elements at i and minIndex.
   5. Increment i by 1.
4. Repeat steps 2-5 until the entire array is sorted.
5. Stop.

## Time and Space Complexity

| Complexity      | Best Case | Average Case | Worst Case |
|-----------------|-----------|--------------|------------|
| **Time**        | \( O(n^2) \) | \( O(n^2) \) | \( O(n^2) \) |
| **Description** | This occurs when the array is already sorted. Each element must still be compared with every other element. | This occurs for an average input. Each element may require comparisons with almost all other elements. | This occurs when the array is sorted in reverse order, requiring the maximum number of comparisons. |
| **Space**       | \( O(1) \) | \( O(1) \)   | \( O(1) \)  |

Selection Sort is an in-place sorting algorithm, meaning it requires a constant amount of additional space regardless of the input size.

### Characteristics
- **Stability**: Selection Sort is not a stable sort; equal elements may not retain their original order Where as **Bubble and insertion sort is stable sort algorithms**.
- **In-Place**: It requires only a constant amount of additional space, making it an in-place sorting algorithm.

### Use Cases
Selection Sort is not the most efficient algorithm for large datasets but can be useful for small arrays or as part of more complex algorithms.