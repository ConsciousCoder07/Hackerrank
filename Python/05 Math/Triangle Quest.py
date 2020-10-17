# The output basically needs : 
# 1 ^ 1 = 1
# 11 ^ 2 = 22
# 111 ^ 3 = 333
# To generate the sequence 1, 11, 111,.....
# code : (10^i)-1/9
for i in range(1,int(input())):
    print(((10**i-1)//9)*i)