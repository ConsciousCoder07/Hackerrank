#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n, r, c, d, d1=0, d2=0, diff;
    //number of rows and columns
    scanf("%d",&n);
    
    for(int r=0; r<n; r++)
        for(c=0; c<n; c++)
            {
                //input the matrix element
                scanf("%d",&d);
                //condition for left diagonal/principal diagonal
                if(r==c)
                d1 += d;
                //condition for right/secondary diagonal
                if(r+c==n-1)
                d2 += d;
            }

    diff = abs(d1-d2);
    printf("%d",diff);
    return 0;

}
