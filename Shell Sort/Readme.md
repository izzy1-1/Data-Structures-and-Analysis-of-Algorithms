# **Shell Sort Algorithm**
Shell sort is a generalized version of the insertion sort algorithm. It first sorts elements that are far apart from each other and successively reduces the interval between the elements to be sorted.

The interval between the elements is reduced based on the sequence used. Some of the optimal sequences that can be used in the shell sort algorithm are:

* ` Shell's original sequence: N/2 , N/4 , …, 1`
* ` Knuth's increments: 1, 4, 13, …, (3k – 1) / 2`
* ` Sedgewick's increments: 1, 8, 23, 77, 281, 1073, 4193, 16577...4j+1+ 3·2j+ 1`
* `Hibbard's increments: 1, 3, 7, 15, 31, 63, 127, 255, 511…`
* `Papernov & Stasevich increment: 1, 3, 5, 9, 17, 33, 65,...`
* `Pratt: 1, 2, 3, 4, 6, 9, 8, 12, 18, 27, 16, 24, 36, 54, 81....`

```
Note: The performance of the shell sort depends on the type of sequence used for a given input array.
```

## **Working of Shell Sort**
1. Suppose, we need to sort the following array. 

![Initial array](ShellSort-Images/Example(1).png)

2. We are using the shell's original sequence `(N/2, N/4, ...1)` as intervals in our algorithm.
In the first loop, if the array size is `N = 8` then, the elements lying at the interval of `N/2 = 4` are compared and swapped if they are not in order. 

    a. The 0th element is compared with the `4th` element.
    
    b. If the 0th element is greater than the `4th` one then, the `4th` element is first stored in `temp` variable and the `0th` element (ie. greater element) is stored in the `4th` position and the element stored in `temp` is stored in the `0th` position. 

![Rearrange the elements at n/2 interval](ShellSort-Images/Example(2).png)

    This process goes on for all the remaining elements. 

![Rearrange all the elements at n/2 interval](ShellSort-Images/Example(3).png)

3. In the second loop, an interval of `N/4 = 8/4 = 2` is taken and again the elements lying at these intervals are sorted. 

![Rearrange the elements at n/4 interval](ShellSort-Images/Example(4).png)

    You might get confused at this point. 

![All the elements in the array lying at the current interval are compared.](ShellSort-Images/Example(5).png)


    The elements at `4th` and `2nd` position are compared. The elements at `2nd` and `0th` position are also compared. All the elements in the array lying at the current interval are compared.

4. The same process goes on for remaining elements. 

![Rearrange all the elements at n/4 interval](ShellSort-Images/Example(6).png)

5. Finally, when the interval is `N/8 = 8/8 =1` then the array elements lying at the interval of 1 are sorted. The array is now completely sorted. 

![Rearrange the elements at n/8 interval](ShellSort-Images/Example(7).png)

## **Shell Sort Algorithm**
```
shellSort(array, size)
  for interval i <- size/2n down to 1
    for each interval "i" in array
        sort all the elements at interval "i"
end shellSort
```

## **Time and Space Complexity**

| Complexity      | Best Case    | Average Case   | Worst Case   |
|-----------------|--------------|----------------|--------------|
| **Time**        | \( O(n \log n) \) | \( O(n \log n) \) | \( O(n^2) \) |
| **Description** | This occurs when the array is almost sorted, and the gaps reduce quickly, making the sorting process efficient. | For an average input, Shell Sort performs better than simple quadratic sorts due to reduced comparisons with decreasing intervals. | This occurs when the gaps fail to properly reduce disorder in the array, causing the worst behavior similar to Selection Sort. |
| **Space**       | \( O(1) \)   | \( O(1) \)     | \( O(1) \)   |

Shell sort is an unstable sorting algorithm because this algorithm does not examine the elements lying in between the intervals.

### **Shell Sort Applications**
Shell sort is used when:

* calling a stack is overhead. `uClibc` library uses this sort.
* recursion exceeds a limit. `bzip2` compressor uses it.
* Insertion sort does not perform well when the close elements are far apart. Shell sort helps in reducing the distance between the close elements. Thus, there will be less number of swappings to be performed.


