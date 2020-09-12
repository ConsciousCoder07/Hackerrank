#include <bits/stdc++.h>
using namespace std;

int main()
{ 
     int t, i, j;
     int n,k,a[1000];

     scanf("%d",&t);

     for(i=0; i<t; i++){

         scanf("%d %d",&n, &k);

         int count=0; //count starts from 0 for each case
         for(j=0; j<n; j++){

            scanf("%d",&a[j]);

              if(a[j]<=0)
                count++;
         }

        if(count<k) //students less than threshold are present on time then CANCELLED!
        printf("YES\n");
        else 
        printf("NO\n");
     }
     return 0;
}
