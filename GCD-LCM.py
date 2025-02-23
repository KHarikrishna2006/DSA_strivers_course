import math
a=int(input())
b=int(input())
gcd=math.gcd(a,b)
lcm=(a*b)/gcd
l=[]
l.append(int(lcm))
l.append(int(gcd))
print(l)