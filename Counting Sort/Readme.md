# **Counting Sort Algorithm**
Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.

## **Algorithm Working**
1. Find out the maximum element (let it be max) from the given array. 

![Algorithm Working Image](CountingSort-Images/Example(1).png)

2. Initialize an array of length max+1 with all elements 0. This array is used for storing the count of the elements in the array. 

![Algorithm Working Image](CountingSort-Images/Example(2).png)

3. Store the count of each element at their respective index in count array
For example: if the count of element 3 is 2 then, 2 is stored in the 3rd position of count array. If element "5" is not present in the array, then 0 is stored in 5th position. 

![Algorithm Working Image](CountingSort-Images/Example(3).png)

4. Store cumulative sum of the elements of the count array. It helps in placing the elements into the correct index of the sorted array. 

![Algorithm Working Image](CountingSort-Images/Example(4).png)

5. Find the index of each element of the original array in the count array. This gives the cumulative count. Place the element at the index calculated as shown in figure below. 

![Algorithm Working Image](CountingSort-Images/Example(5).png)

6. After placing each element at its correct position, decrease its count by one.

## Counting Sort Algorithm

1. **Initialize:**
   1. Find the maximum value in the array (`max`).
   2. Create a `countArr` of size `(max + 1)` and initialize all elements to 0.
   3. Create an `outputArr` of the same size as the input array.

2. **Count Occurrences:**
   1. Set `i` to 0.
   2. Repeat until `i` is less than the size of the input array:
      1. Increment `countArr[inputArr[i]]` by 1.
      2. Increment `i` by 1.

3. **Calculate Cumulative Counts:**
   1. Set `i` to 1.
   2. Repeat while `i` is less than or equal to `max`:
      1. Update `countArr[i]` to be the sum of `countArr[i]` and `countArr[i - 1]`.
      2. Increment `i` by 1.

4. **Build Output Array:**
   1. Set `i` to the size of the input array - 1.
   2. Repeat while `i` is greater than or equal to 0:
      1. Place `inputArr[i]` at the position `countArr[inputArr[i]] - 1` in `outputArr`.
      2. Decrement `countArr[inputArr[i]]` by 1.
      3. Decrement `i` by 1.

5. **Copy Output Array to Input Array:**
   1. Set `i` to 0.
   2. Repeat until `i` is less than the size of the input array:
      1. Copy `outputArr[i]` to `inputArr[i]`.
      2. Increment `i` by 1.

6. **Stop.**

## Time and Space Complexity

- **Time Complexity**:
  - **Best Case**: O(n + k) - This occurs when the elements are uniformly distributed. Counting Sort requires linear time to count occurrences and compute cumulative counts, where `n` is the number of elements and `k` is the range of the input values.
  - **Average Case**: O(n + k) - This is the time complexity for average cases, as Counting Sort always requires time proportional to both the number of elements and the range of the input values.
  - **Worst Case**: O(n + k) - The worst-case time complexity is also linear with respect to both the number of elements and the range of the values.

- **Space Complexity**: O(k) - Counting Sort requires additional space for the `countArr` and `outputArr`. The space complexity depends on the range of the input values (`k`), which dictates the size of `countArr`.

#### Characteristics

- **Stability**: Counting Sort is a stable sorting algorithm. It maintains the relative order of equal elements in the sorted output, which is useful for sorting records with multiple fields.
  
- **In-Place**: Counting Sort is not an in-place algorithm. It requires additional space for the `countArr` and `outputArr`, making its space complexity O(k), where `k` is the range of the input values.

#### Use Cases

- **When Range is Small**: Ideal for scenarios where the range of input values (`k`) is not significantly larger than the number of elements (`n`).
- **Integer or Categorical Data**: Useful for sorting integers or categorical data where values are within a limited range.
- **Stability Needed**: Suitable when maintaining the relative order of equal elements is important, such as in multi-field sorting or radix-based sorting approaches.

```Counting Sort is often used in scenarios where other sorting algorithms would be inefficient due to the nature of the data or the range of values.```
