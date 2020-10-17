import math
AB, BC = int(input()), int(input())
AC = math.hypot(AB, BC)
ans = round(math.degrees((math.acos(BC/AC))))
print(ans, chr(176), sep="") #chr(n) : returns character of the entered unicode