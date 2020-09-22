# n = int(input())
# a = set()
# for i in range(n):
#     a.add(input())
# print(len(a))

print(len(set(input() for i in range(int(input())))))
