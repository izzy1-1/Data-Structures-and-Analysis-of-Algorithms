def bucket_sort_float(input_arr):
    size = len(input_arr)
    # Create empty buckets
    buckets = [[] for _ in range(size)]

    # Put array elements in different buckets
    for i in range(size):
        bucket_index = int(size * input_arr[i])
        buckets[bucket_index].append(input_arr[i])

    # Sort individual buckets
    for i in range(size):
        buckets[i].sort()

    # Concatenate all buckets into the input array
    index = 0
    for i in range(size):
        for j in range(len(buckets[i])):
            input_arr[index] = buckets[i][j]
            index += 1

def bucket_sort_int(input_arr):
    size = len(input_arr)
    max_value = max(input_arr)
    
    # Create the buckets
    bucket_count = max_value // size + 1
    buckets = [[] for _ in range(bucket_count)]

    # Put array elements in different buckets
    for i in range(size):
        bucket_index = input_arr[i] // size
        buckets[bucket_index].append(input_arr[i])

    # Sort individual buckets
    for i in range(bucket_count):
        buckets[i].sort()

    # Concatenate all buckets into the input array
    index = 0
    for i in range(bucket_count):
        for j in range(len(buckets[i])):
            input_arr[index] = buckets[i][j]
            index += 1

def main():
    choice = input("Do you want to sort integers or floating-point numbers? (i/f): ")

    if choice == 'i':
        size = int(input("Enter size of the array: "))
        arr = [int(input(f"Enter element {i + 1}: ")) for i in range(size)]

        print("Elements before Bucket Sort:")
        print(" ".join(map(str, arr)))

        bucket_sort_int(arr)

        print("Elements after Bucket Sort:")
        print(" ".join(map(str, arr)))

    elif choice == 'f':
        size = int(input("Enter size of the array: "))
        arr = [float(input(f"Enter element {i + 1}: ")) for i in range(size)]

        print("Elements before Bucket Sort:")
        print(" ".join(map(str, arr)))

        bucket_sort_float(arr)

        print("Elements after Bucket Sort:")
        print(" ".join(map(str, arr)))

    else:
        print("Invalid choice.")

if __name__ == "__main__":
    main()
