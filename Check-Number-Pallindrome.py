x=int(input("Enter a number:"))
x=str(x)
if(x==x[::-1]):
    print("Palindrome")
else:
    print("Not a Palindrone")