def sumofprimedigits(x):
    s=0
    for i in str(x):
        if i in('2','3','5','7'):
            s = s + int(i)
    return s

print(sumofprimedigits(int(input())))