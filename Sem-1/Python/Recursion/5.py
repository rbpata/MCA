def power(a, b):
    # Base case: if b is 0, return 1 (any number raised to the power of 0 is 1)
    if b == 0:
        return 1
    # Recursive case: return a multiplied by the result of power(a, b-1)
    else:
        return a * power(a, b - 1)

# Example usage
base = 2
exponent = 5
print(f"The value of {base}^{exponent} is {power(base, exponent)}")
