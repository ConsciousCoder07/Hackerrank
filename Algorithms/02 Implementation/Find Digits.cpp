#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){

        int n;
        scanf("%d",&n);
        int copy,count=0,d;
        copy=n;
        while(copy!=0){

            d=copy%10;
            if(d!=0 && n%d==0)
            count++;
            copy=copy/10;
        }
        printf("%d\n",count);
    }
    return 0;
}

