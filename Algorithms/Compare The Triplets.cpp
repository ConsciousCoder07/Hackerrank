#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],alice=0,bob=0,i;
    
    for(i=0; i<3; i++)
        scanf("%d",&a[i]);
    
    for(i=0; i<3; i++)
        scanf("%d",&b[i]);

    for(i=0; i<3; i++){
        
        if(a[i]>b[i]) alice++;
        else if(a[i]<b[i]) bob++;
    }

    printf("%d %d",alice, bob);
    return 0;
}