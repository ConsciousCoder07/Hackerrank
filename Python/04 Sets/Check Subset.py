for i in range(int(input())):
    _, a, _, b = int(input()), set(input().split()), int(input()), set(input().split())
    print(a.issubset(b))



# for _ in range(int(input())):
#     a,b = [set(input().split()) for _ in range(4)][1::2]
#     print(a.issubset(b))

