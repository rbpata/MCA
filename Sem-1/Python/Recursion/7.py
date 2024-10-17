def sumSeries(n):
    if n <=0:
        return 0
    else:
        return (n + sumSeries(n-2))
    
print(sumSeries(10));
