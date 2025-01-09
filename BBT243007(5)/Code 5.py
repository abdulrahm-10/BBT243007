a=int(input("Enter value of month"))
if a>=1 and a<=3:
    print("Summer")
elif a>=4 and a<=6:
    print("Winter")
elif a>=7 and a<=9:
    print("Spring")
elif a>=10 and a<=12:
    print("Autumn")
else:
    print("Invalid")