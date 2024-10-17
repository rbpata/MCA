numbers = input("Enter five single-digit numbers separated by commas: ")
    # Split the input string by commas and convert each element to an integer
num_list = [int(num) for num in numbers.split(',')]
product = 1
for num in num_list:
    product *= num
print("Product of the numbers:", product)

numlist = [int(num) for num in numbers.split(",") ]