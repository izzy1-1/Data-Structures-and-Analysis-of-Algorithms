def linearSearch(array, size, target):
    index = int(-1)
    for i in range(size):
        if array[i] == target:
            index = i
            break
    if index != -1:
        print(f"Element matches in index: {index}")
    else:
        print(f"Not found the element {target} in the array")

def main():
    size = int(input("Enter the size of the array: "))
    print(f"Enter {size} elements in an array")
    arr =[]
    for _ in range(size):
        arr.append(int(input()))
    element = int(input("Enter the element you want to search in the array: "))
    linearSearch(arr, size, element)

if __name__ == "__main__":
    main()
