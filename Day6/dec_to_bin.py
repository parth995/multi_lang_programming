### version 1
#n = int(input())
#print(bin(n)[2:]) # print from second index to end


### version 2
print(bin(int(input())).replace("0b",""))