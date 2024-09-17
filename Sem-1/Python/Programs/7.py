maths=int(input("Enter Maths Marks : "));
physics=int(input("Enter Physics Marks : "));
chemistry=int(input("Enter Chemistry Marks : "));

total=maths+physics+chemistry;
math_pysics=maths+physics;

if maths >= 60 and physics >= 50 and chemistry >= 40:
    if total>=200 or math_pysics>=150:
        print("The candidate is eligible for admission.");
    else:
        print("The candidate is not eligible for admission.");
else:
    print("The candidate is not eligible for admission.");