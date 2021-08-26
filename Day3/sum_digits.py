# version 1
n = int(input())
s = 0
while n!=0:
    d = n%10
    #print(d, end=' ')
    s = s+d
    n=n//10
print(s)



# version 2
n = input()
for i in n:
    s = s+i
print(s)