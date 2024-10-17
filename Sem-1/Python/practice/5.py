def processNum(m,n):
    if m < n:
        return m
    else:
        while m>=n:
            m-=n
        return m
print(processNum(51,5))