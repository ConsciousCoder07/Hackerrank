t = int(input())
A = set(input().split())
for _ in range(int(input())):
    operation, length = input().split()
    B = set(input().split())
    if(operation == 'intersection_update'):
        A.intersection_update(B)
    elif(operation == 'difference_update'):
        A.difference_update(B)
    elif(operation == 'symmetric_difference_update'):
        A.symmetric_difference_update(B)
    elif(operation == 'update'):
        A.update(B)
print(sum(map(int, A)))
