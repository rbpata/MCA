year=int(input("Enter Year to Check Whether it is a leap year or not :- "));

if(year%400==0 or (year%100==0 and year%100!=0)):
    print("Entered Year is a leap year..");
else:
    print("Entered Year is not a leap year");