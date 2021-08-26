# version 1 

# n = int(input())
# while n!=0:
#     d = n%10
#     print(d, end=' ')
#     n=n//10

# version 2

n = input()
for i in n[::-1]:
    print(i, end = ' ')