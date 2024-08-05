# **Bucket Sort Algorithm**
Bucket Sort is a sorting algorithm that divides the unsorted array elements into several groups called buckets. Each bucket is then sorted by using any of the suitable sorting algorithms or recursively applying the same bucket algorithm.

Finally, the sorted buckets are combined to form a final sorted array.

**Scatter Gather Approach**
The process of bucket sort can be understood as a scatter-gather approach. Here, elements are first scattered into buckets then the elements in each bucket are sorted. 

Finally, the elements are gathered in order.

![Working of Bucket Sort](BucketSort-Images/Example(1).png)

## **Working of Bucket Sort**

1. Suppose, the input array is: <br>![Input array](BucketSort-Images/Example(2).png)<br>Create an array of size 10. Each slot of this array is used as a bucket for storing elements<br>![Array in which each position is a bucket](BucketSort-Images/Example(3).png)

2. Insert elements into the buckets from the array. The elements are inserted according to the range of the bucket.<br>In our example code, we have buckets each of ranges from 0 to 1, 1 to 2, 2 to 3,...... (n-1) to n.<br>Suppose, an input element is `.23` is taken. It is multiplied by `size = 10` (ie. `.23*10=2.3`). Then, it is converted into an integer (ie. `2.3≈2`). Finally, .23 is inserted into **bucket-2**. <br>![Insert elements into the buckets from the array](BucketSort-Images/Example(4).png)<br>Similarly, .25 is also inserted into the same bucket. Everytime, the floor value of the floating point number is taken.<br> **If we take integer numbers as input, we have to divide it by the interval (10 here) to get the floor value.** <br>Similarly, other elements are inserted into their respective buckets.![Insert all the elements into the buckets from the array](BucketSort-Images/Example(5).png)

3. The elements of each bucket are sorted using any of the stable sorting algorithms. Here, we have used quicksort (inbuilt function). <br> ![Sort the elements in each bucket](BucketSort-Images/Example(6).png)

4. The elements from each bucket are gathered.<br><br>It is done by iterating through the bucket and inserting an individual element into the original array in each cycle. The element from the bucket is erased once it is copied into the original array. ![Gather elements from each bucket](BucketSort-Images/Example(7).png)

### Bucket Sort Complexity

**Time Complexity:**

- **Best Case:** \(O(n + k)\)
- **Average Case:** \(O(n)\)
- **Worst Case:** \(O(n^2)\)

**Space Complexity:** \(O(n + k)\)

**Stability:** Yes

#### Detailed Analysis:

- **Worst Case Complexity: \(O(n^2)\)**
  - This occurs when the elements have a close range, leading to an uneven distribution where some buckets contain significantly more elements than others.
  - The sorting algorithm used within each bucket influences the overall complexity. For example, if insertion sort is used and the elements are in reverse order, the time complexity can degrade to \(O(n^2)\).

- **Best Case Complexity: \(O(n + k)\)**
  - This is achieved when elements are uniformly distributed across the buckets, with an approximately equal number of elements in each.
  - If the elements within the buckets are already sorted, the complexity improves. Using insertion sort in this scenario results in a linear time complexity of \(O(n + k)\), where \(O(n)\) accounts for bucket creation and \(O(k)\) accounts for sorting.

- **Average Case Complexity: \(O(n)\)**
  - This typically occurs when elements are randomly distributed. Even if the distribution is not perfectly uniform, bucket sort maintains linear time complexity as long as the sum of the squares of the bucket sizes remains linear relative to the total number of elements.

### Bucket Sort Applications

Bucket sort is particularly useful when:
- The input is uniformly distributed over a range.
- There are floating-point values to be sorted.
