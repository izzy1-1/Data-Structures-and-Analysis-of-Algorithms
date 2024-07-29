# **Insertion Sort Algorithm**
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

A similar approach is used by insertion sort.

## **Working of Insertion Sort**
Suppose we need to sort the following array.

![Initial array](InsertionSort-Images/Example(1).png)

1. The first element in the array is assumed to be sorted. Take the second element and store it separately in `key`.
    
    Compare `key` with the first element. If the first element is greater than `key`, then `key` is placed in front of the first element. 

![If the first element is greater than key, then key is placed in front of the first element.](InsertionSort-Images/Example(2).png)

2. Now, the first two elements are sorted.

    Take the third element and compare it with the elements on the left of it. Placed it just behind the element smaller than it. If there is no element smaller than it, then place it at the beginning of the array. 

![Place 1 at the beginning](InsertionSort-Images/Example(3).png)

3. Similarly, place every unsorted element at its correct position. 

![Place 4 behind 1](InsertionSort-Images/Example(4).png)

![Place 3 behind 1 and the array is sorted](InsertionSort-Images/Example(5).png)


## Insertion Sort Algorithm

1. Start from the first element (index 0) of the array.
2. Set the current element as `currentValue`.
3. Initialize a variable `j` to the index of the previous element (i.e., `j = i - 1`).
4. While `j` is greater than or equal to 0 and the element at `j` is greater than `currentValue`:
   - Move the element at `j` one position to the right (i.e., `array[j + 1] = array[j]`).
   - Decrement `j` by 1.
5. Place the `currentValue` in its correct position (i.e., `array[j + 1] = currentValue`).
6. Repeat steps 2-5 for all elements in the array until the entire array is sorted.

## Time and Space Complexity

| Complexity      | Best Case | Average Case | Worst Case |
|-----------------|-----------|--------------|------------|
| **Time**        | \( O(n) \) | \( O(n^2) \) | \( O(n^2) \) |
| **Description** | This occurs when the array is already sorted. The inner loop only runs once for each element. | This occurs for an average input. Each element may have to be compared with about half of the already sorted elements. | This occurs when the array is sorted in reverse order, requiring the maximum number of comparisons and shifts. |
| **Space**       | \( O(1) \) | \( O(1) \)   | \( O(1) \)  |

Insertion Sort is an in-place sorting algorithm, which means it requires a constant amount of additional space regardless of the input size. 
