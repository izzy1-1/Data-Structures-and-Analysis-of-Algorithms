# Insertion Sort Algorithm

## Flowchart
![Flowchart](Insertion-Sort--Flowchart.png)

## Algorithm Working
![Algorithm Working Image](Example.png)

## Insertion Sort Algorithm

1. Start from the second element (index 1) of the array.
2. Set the current element as `key`.
3. Initialize a variable `j` to the index of the previous element (i.e., `j = i - 1`).
4. While `j` is greater than or equal to 0 and the element at `j` is greater than `key`:
   - Move the element at `j` one position to the right (i.e., `array[j + 1] = array[j]`).
   - Decrement `j` by 1.
5. Place the `key` in its correct position (i.e., `array[j + 1] = key`).
6. Repeat steps 2-5 for all elements in the array until the entire array is sorted.

## Time and Space Complexity

- **Time Complexity**:
  - **Best Case**: O(n) - This occurs when the array is already sorted. The inner loop only runs once for each element.
  - **Average Case**: O(n²) - This occurs for an average input. Each element may have to be compared with about half of the already sorted elements.
  - **Worst Case**: O(n²) - This occurs when the array is sorted in reverse order, requiring the maximum number of comparisons and shifts.

- **Space Complexity**: O(1) - Insertion Sort is an in-place sorting algorithm, which means it requires a constant amount of additional space regardless of the input size.

## Explanation of Insertion Sort

Insertion Sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much like sorting playing cards in your hands, where you gradually build up the sorted portion of the cards.

### How Insertion Sort Works:

1. **Initialization**: Start with the second element (index 1) of the array. Assume this element to be the start of the sorted portion.

2. **Insertion Process**:
   - Compare the current element (`key`) with the elements before it in the sorted portion.
   - Move elements greater than the `key` one position to the right.
   - Insert the `key` into its correct position in the sorted portion.

3. **Repeat**: Continue this process for all elements in the array, expanding the sorted portion with each iteration.

### Example:

Consider an array `[5, 2, 4, 6, 1, 3]`. Here's how Insertion Sort would work step-by-step:

- Start with `[5]` (first element is considered sorted).
- Insert `2` into `[5]`, resulting in `[2, 5]`.
- Insert `4` into `[2, 5]`, resulting in `[2, 4, 5]`.
- Insert `6` into `[2, 4, 5]`, resulting in `[2, 4, 5, 6]`.
- Insert `1` into `[2, 4, 5, 6]`, resulting in `[1, 2, 4, 5, 6]`.
- Insert `3` into `[1, 2, 4, 5, 6]`, resulting in `[1, 2, 3, 4, 5, 6]`.