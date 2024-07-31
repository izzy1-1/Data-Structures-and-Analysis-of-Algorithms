# **Radix Sort Algorithm**
Radix sort is a sorting algorithm that sorts the elements by first grouping the individual digits of the same **place value**. Then, sort the elements according to their increasing/decreasing order.

Suppose, we have an array of 8 elements. First, we will sort elements based on the value of the unit place. Then, we will sort elements based on the value of the tenth place. This process goes on until the last significant place.

Let the initial array be `[121, 432, 564, 23, 1, 45, 788]`. It is sorted according to radix sort as shown in the figure below.

![Working of Radix Sort](RadixSort-Images/Example(1).webp)

Please go through the counting sort before reading this algorithm because counting sort is used as an intermediate sort in radix sort.

## **Working of Radix Sort**
1. Find the largest element in the array, i.e. `max`. Let `X` be the number of digits in `max`. `X` is calculated because we have to go through all the significant places of all elements.
  
   In this array `[121, 432, 564, 23, 1, 45, 788]`, we have the largest number 788. It has 3 digits. Therefore, the loop should go up to hundreds place (3 times).

2. Now, go through each significant place one by one.
   
   Use any stable sorting technique to sort the digits at each significant place. We have used counting sort for this.

   Sort the elements based on the unit place digits `(X=0)`. 

![Using counting sort to sort elements based on unit place](RadixSort-Images/Example(2).webp)

3. Now, sort the elements based on digits at tens place. 

![Sort elements based on tens place](RadixSort-Images/Example(3).webp)

4. Finally, sort the elements based on the digits at hundreds place. 

![Sort elements based on hundreds place](RadixSort-Images/Example(4).webp)

## **Radix Sort Algorithm**
```
radixSort(array)
  d <- maximum number of digits in the largest element
  create d buckets of size 0-9
  for i <- 0 to d
    sort the elements according to ith place digits using countingSort

countingSort(array, d)
  max <- find largest element among dth place elements
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique digit in dth place of elements and
    store the count at jth index in count array
  for i <- 1 to max
    find the cumulative sum and store it in count array itself
  for j <- size down to 1
    restore the elements to array
    decrease count of each element restored by 1
```

### Radix Sort Complexity

**Time Complexity:**

- **Best:** O(n + k)
- **Worst:** O(n + k)
- **Average:** O(n + k)

**Space Complexity:** O(n + k)

**Stability:** Yes

Since radix sort is a non-comparative algorithm, it has advantages over comparative sorting algorithms.

For the radix sort that uses counting sort as an intermediate stable sort, the time complexity is `O(d(n+k))`.

Here, `d` is the number cycle and `O(n+k)` is the time complexity of counting sort.

Thus, radix sort has linear time complexity which is better than `O(nlog n)` of comparative sorting algorithms.

If we take very large digit numbers or the number of other bases like 32-bit and 64-bit numbers then it can perform in linear time however the intermediate sort takes large space.

This makes radix sort `space` inefficient. This is the reason why this sort is not used in software libraries.

## **Radix Sort Applications**

Radix sort is implemented in

* DC3 algorithm (Kärkkäinen-Sanders-Burkhardt) while making a suffix array.
* places where there are numbers in large ranges.
