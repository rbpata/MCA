def recursive_list_sum(data_list):
    total = 0
    for element in data_list:
        if isinstance(element, list):
            total += recursive_list_sum(element)
        else:
            total += element
    return total

# Test Data
test_data = [1, 2, [3, 4], [5, 6]]
print("The sum of the nested list is:", recursive_list_sum(test_data))
