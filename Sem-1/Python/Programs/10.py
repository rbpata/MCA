import math

def calculate_area():
    print("Choose the shape to calculate area:")
    print("C - Circle")
    print("R - Rectangle")
    print("T - Triangle")
    
    choice = input("Enter C for Circle, R for Rectangle, T for Triangle: ").upper()

    if choice == 'C':
        radius = float(input("Enter the radius of the circle: "))
        area = math.pi * radius * radius
        print(f"The area of the circle is: {area:.2f}")

    elif choice == 'R':
        length = float(input("Enter the length of the rectangle: "))
        width = float(input("Enter the width of the rectangle: "))
        area = length * width
        print(f"The area of the rectangle is: {area:.2f}")

    elif choice == 'T':
        base = float(input("Enter the base of the triangle: "))
        height = float(input("Enter the height of the triangle: "))
        area = 0.5 * base * height
        print(f"The area of the triangle is: {area:.2f}")

    else:
        print("Invalid choice! Please choose either C, R, or T.")

calculate_area()
