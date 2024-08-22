def karatsuba(x, y):
    # Base case for recursion: if x or y is small enough, use standard multiplication
    if x < 10 or y < 10:
        return x * y
    
    # Calculate the size of the numbers
    n = max(len(str(x)), len(str(y)))
    half_n = n // 2
    
    # Split x and y
    a = x // 10**half_n
    b = x % 10**half_n
    c = y // 10**half_n
    d = y % 10**half_n
    
    # Recursive calls
    ac = karatsuba(a, c)
    bd = karatsuba(b, d)
    ad_plus_bc = karatsuba(a + b, c + d) - ac - bd
    
    # Combine the results
    return (ac * 10**(2 * half_n)) + (ad_plus_bc * 10**half_n) + bd
def main():
    # Get input from the user
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))
        
        # Calculate the product using Karatsuba algorithm
        result = karatsuba(x, y)
        
        # Print the result
        print(f"The product of {x} and {y} using Karatsuba algorithm is: {result}")
    except ValueError:
        print("Invalid input. Please enter valid integers.")

if __name__ == "__main__":
    main()