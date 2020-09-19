#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   
    int a;
    long b;
    char c;
    float f;
    double d;
    cin >> a >> b >> c >> f >> d;
    printf("%d\n%ld\n%c\n%.5f\n%.9lf", a, b, c, f, d);
    return 0; 
}
