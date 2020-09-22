A = set(input().split())
n = int(input())
status = True
for i in range(n):
    s = set(input().split())
    current = A.issuperset(s)
    status = current and status
print(status)
    
