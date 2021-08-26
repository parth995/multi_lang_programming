n = int(input())
sum=0
while(n!=0):
    d = n%10
    if d in (2,3,5,7):
        sum = sum + d
    n = n//10

print(sum)