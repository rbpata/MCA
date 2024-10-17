def sumSeries(n):
    if n <= 0:
        return 0
    return (n+ sumSeries(n-2));