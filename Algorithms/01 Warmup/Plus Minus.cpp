#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100];
    float pcount=0,ncount=0,zcount=0;
    float pf,nf,zf;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0) pcount++;
        else if(a[i]<0) ncount++;
        else zcount++;
    }
    printf("%f\n%f\n%f\n",pcount/n,ncount/n,zcount/n);
    return 0;
}
