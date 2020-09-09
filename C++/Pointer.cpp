//  https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <bits/stdc++.h>

void update(int *a,int *b) {
    // Complete this function  
    int add = *a+*b;  
    int sub = abs(*a-*b);
    *a = add;
    *b = sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
