# **Quicksort Algorithm**
Quicksort is a sorting algorithm based on the **divide and conquer approach** where

1. An array is divided into subarrays by selecting a **pivot element** (element selected from the array).

2. While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.

3. At this point, elements are already sorted. Finally, elements are combined to form a sorted array.

## **Working of Quicksort Algorithm**

### 1. Select the Pivot Element
There are different variations of quicksort where the pivot element is selected from different positions. Here, we will be selecting the rightmost element of the array as the pivot element.

![Select a pivot element](QuickSort-Images/Example(1).png)

### 2. Rearrange the Array

Now the elements of the array are rearranged so that elements that are smaller than the pivot are put on the left and the elements greater than the pivot are put on the right.

![Put all the smaller elements on the left and greater on the right of pivot element](QuickSort-Images/Example(2).png)

Here's how we rearrange the array:

1. A pointer is fixed at the pivot element. The pivot element is compared with the elements beginning from the first index. 

![Comparison of pivot element with element beginning from the first index](QuickSort-Images/Example(3).png)

2. If the element is greater than the pivot element, a second pointer is set for that element. 

![If the element is greater than the pivot element, a second pointer is set for that element.](QuickSort-Images/Example(4).png)

3. Now, pivot is compared with other elements. If an element smaller than the pivot element is reached, the smaller element is swapped with the greater element found earlier. 

![Pivot is compared with other elements.](QuickSort-Images/Example(5).png)

4. Again, the process is repeated to set the next greater element as the second pointer. And, swap it with another smaller element. 

![The process is repeated to set the next greater element as the second pointer.](QuickSort-Images/Example(6).png)

5. The process goes on until the second last element is reached. 

![The process goes on until the second last element is reached.](QuickSort-Images/Example(7).png)

6. Finally, the pivot element is swapped with the second pointer. 
![Finally, the pivot element is swapped with the second pointer.](QuickSort-Images/Example(8).png)

### 3. Divide Subarrays

Pivot elements are again chosen for the left and the right sub-parts separately. And, **step 2** is repeated.

![Select pivot element of in each half and put at correct place using recursion](QuickSort-Images/Example(9).png)

The subarrays are divided until each subarray is formed of a single element. At this point, the array is already sorted.

## **Quick Sort Algorithm**
```
quickSort(array, leftmostIndex, rightmostIndex)
  if (leftmostIndex < rightmostIndex)
    pivotIndex <- partition(array,leftmostIndex, rightmostIndex)
    quickSort(array, leftmostIndex, pivotIndex - 1)
    quickSort(array, pivotIndex, rightmostIndex)

partition(array, leftmostIndex, rightmostIndex)
  set rightmostIndex as pivotIndex
  storeIndex <- leftmostIndex - 1
  for i <- leftmostIndex + 1 to rightmostIndex
  if element[i] < pivotElement
    swap element[i] and element[storeIndex]
    storeIndex++
  swap pivotElement and element[storeIndex+1]
return storeIndex + 1
```

## **Visual Illustration of Quicksort Algorithm**

You can understand the working of quicksort algorithm with the help of the illustrations below.

![Sorting the elements on the left of pivot using recursion](QuickSort-Images/Example(10).png)

![Sorting the elements on the right of pivot using recursion](QuickSort-Images/Example(11).png)

## Time and Space Complexity

| Complexity      | Best Case            | Average Case         | Worst Case         |
|-----------------|----------------------|----------------------|--------------------|
| **Time**        | \( O(nlog n) \) | \( O(nlog n) \) | \( O(n^2) \)         |
| **Description** | This occurs when the pivot is the middle or near the middle element, ensuring balanced partitioning. | This occurs for a typical input where partitions are reasonably balanced. | This occurs when the pivot is either the smallest or largest element, leading to highly unbalanced partitions. |
| **Space**       | \( O(log n) \)      | \( O(log n) \)      | \( O(log n) \)    |

Quicksort is an in-place sorting algorithm, requiring \( O(log n) \) space for the recursion stack. It is not a stable sort, meaning equal elements may not preserve their relative order.

## Quicksort Applications

Quicksort is particularly useful in scenarios where:

- **Recursion is well-supported:** The programming language or environment handles recursive calls efficiently.
- **Time complexity is crucial:** Quicksort offers optimal average-case performance of \( O(n \cdot \log n) \), making it suitable for large datasets.
- **Space complexity is a concern:** Quicksort requires only \( O(\log n) \) additional space, making it space-efficient compared to other sorting algorithms.
