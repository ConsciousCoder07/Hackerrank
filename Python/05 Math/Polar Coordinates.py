import cmath
print(*cmath.polar(complex(input())), sep="\n")

#polar method converts the complex coordinates into polar coordinates, here we unpack the returned tuple (r, phi) and print them on separate lines
