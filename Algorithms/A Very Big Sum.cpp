#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    long long int sum=0, temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        sum += temp;
    }
    printf("%lld",sum);
    return 0;
}