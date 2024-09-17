per=int(input("\nEnter Percentage to check the class :-   "))

if(per <=100 and per >=80):
    print("\nDISTICTION !!")
elif per <=79 and per>=60:
    print("\nFirst Class !!")
elif per <=59 and per>=40:
    print("\nSecond Class !!")
else:
    print("FAIL !!")