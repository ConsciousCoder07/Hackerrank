k = int(input())
arr = list(map(int, input().split()))
Set = set(arr)
a = sum(arr)
b = sum(Set)*k
print((b-a)//(k-1))

# print(((sum(Set)*k)-(sum(arr)))//(k-1))
