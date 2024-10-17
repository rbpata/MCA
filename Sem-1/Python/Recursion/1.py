def sumOfList(l):
    if not l:
        return 0
    else:
        return l[0] + sumOfList(l[1:])
l=[1,2,3,4,5]
print(sumOfList(l))