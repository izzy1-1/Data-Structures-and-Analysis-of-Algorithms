# **Linear Search**
Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.
## **How Linear Search Works?**
The following steps are followed to search for an element `k = 1` in the list below.
   
![Array to be searched for](LinearSearch-Images/Example(1).webp)
   
1. Start from the first element, compare `k` with each element `x`. 
   
![Compare with each element](LinearSearch-Images/Example(2).webp)

2. If `x == k`, return the index. 
   
![Element Found](LinearSearch-Images/Example(3).webp)
   
3. Else, return `not found`.


## Linear Search Algorithm
1. Start
2. Initialize `index` to -1
3. Loop through each element of the array from `i = 0` to `i < size`
   - If `array[i]` equals the `target`
     - Set `index` to `i`
     - Break the loop
4. If `index` is not -1
   - Print "Element found at index: `index`"
5. Else
   - Print "Element not found in the array"
6. End

## Time and Space Complexity

| Complexity      | Best Case | Average Case | Worst Case |
|-----------------|-----------|--------------|------------|
| **Time**        | O(1)      | O(n)         | O(n)       |
| **Description** | This occurs when the target element is the first element in the array. Only one comparison is needed. | This occurs for an average input. The target element may be anywhere in the array, so it requires comparisons with approximately half of the elements. | This occurs when the target element is the last element in the array or is not present at all, requiring comparisons with all elements. |
| **Space**       | O(1)      | O(1)         | O(1)       |

Linear search only uses a constant amount of additional space, regardless of the size of the input array.

  -  **Concept:** When we say the space complexity is ***O(1)***, we are referring to the additional memory that the algorithm needs to execute, aside from the memory used by the input itself.

