n=int(input("How Many NUmbers :- "));
sum=0
for i in range(1,n+1):
    number=float(input(f"ENter value index number {i} :- "))
    sum+=number

avg=sum/n

print(f"\nAverage of Given NUmbers is :- {avg}");