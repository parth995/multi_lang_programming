for n in range(10,100):
    s=str(n)
    a,b = int(s[0]),int(s[1])
    if n==((a+b)+(a*b)):
        print(n)
