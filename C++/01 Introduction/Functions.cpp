#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){

    int max1 = max(a, b);
    int max2 = max(c, d);
    int maximum = max(max1, max2);
    return maximum;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
