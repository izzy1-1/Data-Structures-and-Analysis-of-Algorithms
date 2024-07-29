# **Binary Search**
Binary Search is a searching algorithm for finding an element's position in a sorted array.
In this approach, the element is always searched in the middle of a portion of an array.
Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.

## **Binary Search Working**
Binary Search Algorithm can be implemented in two ways which are discussed below.
  1. Iterative Method
  2.  Recursive Method

The recursive method follows the divide and conquer approach.

The general steps for both methods are discussed below.

  1. The array in which searching is to be performed is: 
  
  ![Initial array](BinarySearch-Images/Example(1).webp)
   
  Let `x = 4` be the element to be searched.
  
  2. Set two pointers low and high at the lowest and the highest positions respectively. 
  
  ![Setting pointers](BinarySearch-Images/Example(2).webp)
  
  3. Find the middle element `mid` of the array ie. `arr[(low + high)/2] = 6`. 

  ![Mid element](BinarySearch-Images/Example(3).webp)
  
  4. `If x == mid`, then return mid.Else, compare the element to be searched with m.
  5. If `x > mid`, compare `x` with the middle element of the elements on the right side of `mid`. This is done by setting `low` to `low = mid + 1`.
  6. Else, compare `x` with the middle element of the elements on the left side of `mid`. This is done by setting `high` to `high = mid - 1`. 

  ![Finding mid element](BinarySearch-Images/Example(4).webp)
  
  7. Repeat steps 3 to 6 until low meets high. 
  
  ![Mid element](BinarySearch-Images/Example(5).webp)
  
  8. `x = 4` is found.
  
  ![Found](BinarySearch-Images/Example(6).webp)

## Binary Search Algorithm

1. Initialize variables `start`, `end`, and `index`:
   - `start` = 0
   - `end` = length of array - 1
   - `index` = -1

2. While `start` is less than or equal to `end`:
   - Calculate `mid` = (start + end) / 2

   - If the middle element `array[mid]` is equal to `target`:
     - Set `index` to `mid`
     - Break the loop

   - Else if `array[mid]` is less than `target`:
     - Set `start` to `mid + 1`

   - Else:
     - Set `end` to `mid - 1`

3. If `index` is not -1:
   - Print the target and its index

4. Else:
   - Print that the target is not found

## Time and Space Complexity

| Complexity      | Best Case | Average Case | Worst Case |
|-----------------|-----------|--------------|------------|
| **Time**        | \( O(1) \) | \( O(\log n) \) | \( O(\log n) \) |
| **Description** | This occurs when the target element is the middle element of the array, requiring only one comparison. | This occurs because, on average, the algorithm halves the search space with each iteration until the target is found or the search space is exhausted. | This occurs when the target element is not in the array, or it is at the very beginning or end of the array, requiring the maximum number of comparisons. |
| **Space**       | \( O(1) \) | \( O(1) \)      | \( O(1) \)      |

Binary search uses a constant amount of additional space, regardless of the size of the input array. This includes a few variables to store the low, high, and mid indices used during the search process.


The algorithm efficiently narrows down the search space, leading to a fast and effective search process.
