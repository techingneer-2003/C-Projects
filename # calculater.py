# calculater.py

x = input("Enter your operater (+,-,x,/): ")

num_1 = float(input("Enter your first number: "))

num_2 = float(input("Enter your second number: "))

if x == "+":
    y = float(round(num_1 + num_2,2))
    print(y)
    
elif x == "-":
    y = float(round(num_1 - num_2,2))
    print(y)
    
elif x == "x":
    y = float(round(num_1 * num_2,2))
    print(y)
    
elif x  == "/":
    y = float(round(num_1 / num_2,2))
    print(y)
    
else:
    print("Invaild operator")  

