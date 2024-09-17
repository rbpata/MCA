for i in range(0,6):
    for j in range(0,6):
        print("*",end="")
    print()
    
    
for i in range(0,6):
    for j in range(0,i):
        print("*",end="")
    print()
    
print("")

for i in range(5,0,-1):
    for j in range(i,0,-1):
        print("*",end="")
    print()
    
print();
n=6
for i in range(0,n):
    for j in range(0,n):
        if i==0 or i==n-1 or j==0 or j==n-1:
            print("*",end="")
        else:
            print(" ",end="")
    print()
    
print()

for i in range(n):
    for j in range(i):
        print(" ",end="")
    for j in range(n,i,-1):
        print("*",end="")
    print()
    
print();

    
for i in range(1,n+1):
    for j in range(i):
        if j==0 or j==i-1:
            print("*",end="")
        else:
            if i!=n:
                print(" ",end="")
            else:
                print("*",end="");
    print()
    
print()

for i in range(0,6):
    for j in range(5,5-i,-1):
        print(j,end="")
    print();

print();

for i in range(0,6):
    for j in range(i):
        print(i,end="")
    print();

print();

for i in range(0,6):
    for j in range(i):
        print(j+1,end="")
    print();

print();

total_rows = 9  
for i in range(1, total_rows + 1):
    print(" " * (total_rows - i), end="")
        
    for j in range(i, i * 2):
        print(j % 10, end="")
        
    for j in range(i * 2 - 2, i - 1, -1):
        print(j % 10, end="")
        
    print() 
    
print()

for i in range(6,0,-1):
    for j in range(1,i,1):
        print(j,end="")
    print();

print();