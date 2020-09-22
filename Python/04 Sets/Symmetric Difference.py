m, set_a = int(input()), set(input().split())
n, set_b = int(input()), set(input().split())
print('\n'.join(sorted(set_a^set_b, key=int)))
# a^b = a.symmetric_difference(b)


