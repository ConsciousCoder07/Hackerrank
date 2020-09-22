n, m = input().split()
arr = list(map(int, input().split()))
a, b = set(map(int, input().split())), set(map(int, input().split()))
h = 0
for i in arr:
    if(i in a):
        h += 1
    elif(i in b):
        h -= 1
print(h)
