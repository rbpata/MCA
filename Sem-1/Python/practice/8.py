def fairCheck(n,a,b,c):
    if a > 0 and b> 0 and c > 0:
        if a != b and b!=c and c!=a:
            if a+b+c == n:
                return 'FAIR'
    return 'NOT FAIR'

n = int(input("Enter the total number of coins: "))
a = int(input("Enter the share for friend 1: "))
b = int(input("Enter the share for friend 2: "))
c = int(input("Enter the share for friend 3: "))

print(fairCheck(n,a,b,c));