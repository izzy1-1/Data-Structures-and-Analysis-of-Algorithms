# Bubble Sort Algorithm

## Flowchart
![Flowchart](Flowchart.png)

## Algorithm Working
![Algorithm Working Image](Image.png)

## Pseudo Code

1. Start
2. Set i to 0
3. Iterate while i < size - 1
    1. Set j to 0
    2. Iterate while j < size - i - 1
        1. If array[j] > array[j + 1], then
            1. Swap array[j] and array[j + 1]
        2. Increment j by 1
    3. Increment i by 1
4. Stop

## Explanation

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Time and Space Complexity

- Time Complexity: O(n^2) - Bubble sort has quadratic time complexity in average and worst cases, as it involves nested loops where each pass through the array requires comparing each pair of adjacent elements.
- Space Complexity: O(1) - Bubble sort is an in-place sorting algorithm, meaning it doesn't require extra space apart from the original array.

### Example

Consider the array `arr = [5, 1, 4, 2, 8]`. Here's how Bubble Sort sorts this array:

1. **Initial Array**: `[5, 1, 4, 2, 8]`
   
2. **First Pass**:
   - Compare `5` and `1`, swap because `5 > 1`: `[1, 5, 4, 2, 8]`
   - Compare `5` and `4`, swap because `5 > 4`: `[1, 4, 5, 2, 8]`
   - Compare `5` and `2`, swap because `5 > 2`: `[1, 4, 2, 5, 8]`
   - Compare `5` and `8`, no swap: `[1, 4, 2, 5, 8]`

3. **Second Pass**:
   - Compare `1` and `4`, no swap: `[1, 4, 2, 5, 8]`
   - Compare `4` and `2`, swap because `4 > 2`: `[1, 2, 4, 5, 8]`
   - Compare `4` and `5`, no swap: `[1, 2, 4, 5, 8]`
   - Compare `5` and `8`, no swap: `[1, 2, 4, 5, 8]`

4. **Third Pass**:
   - Compare `1` and `2`, no swap: `[1, 2, 4, 5, 8]`
   - Compare `2` and `4`, no swap: `[1, 2, 4, 5, 8]`
   - Compare `4` and `5`, no swap: `[1, 2, 4, 5, 8]`
   - Compare `5` and `8`, no swap: `[1, 2, 4, 5, 8]`

5. **Sorted Array**: `[1, 2, 4, 5, 8]`
