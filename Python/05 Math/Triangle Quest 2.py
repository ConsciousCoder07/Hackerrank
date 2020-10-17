# The output basically needs demlo numbers: 
# 1 ^ 2 = 1
# 11 ^ 2 = 121
# 111 ^ 2 = 12321
# To generate the sequence 1, 11, 111,.....
# code : (10^i)-1/9 

for i in range(1,int(input())+1):
     print((10**i//9)**2)

# Another way to generate without involving the math logic
for i in range(1,int(input())+1): #More than 2 lines will result in 0 score. Do not leave a blank line also
    for j in range(1, i+1):
        print(j, end="")
    for t in range(j-1):
        j -= 1
        print(j, end="")
    print()


