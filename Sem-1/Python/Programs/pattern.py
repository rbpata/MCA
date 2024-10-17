rows = 9
for i in range(1,rows+1):
    print(" " * (rows - i), end="")
    
    for j in range(i,rows *2):
        print(j%10,end=""); 
    for j in range(rows * 2-2,i-1,-1):
        print(j%10,end="");
    print()


total_rows = 9  
for i in range(1, total_rows + 1):
    print(" " * (total_rows - i), end="")
        
    for j in range(i, i * 2):
        print(j % 10, end="")
        
    for j in range(i * 2 - 2, i - 1, -1):
        print(j % 10, end="")
        
    print() 