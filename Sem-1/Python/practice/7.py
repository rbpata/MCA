def customise(s):
    if len(s) % 2 == 0:
        if s[-1] == '.':
            s = s[:-1]
        else:
            s += "."
    return s

def substr(s):
    mid = len(s) // 2
    return s[mid-1:mid+2]

# Accept input from the user
input_string = input("Enter a String: ")

# Make the string of odd length if necessary
word = customise(input_string)

# Print the modified string
print("Modified string:", word)

# Print the middle substring of three characters
print("Middle substring:", substr(word))
