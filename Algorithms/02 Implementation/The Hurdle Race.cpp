#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,height[100],max_height=0,potion;
    scanf("%d %d",&n,&k);

    for(int i=0; i<n; i++){
        scanf("%d",&height[i]);
        if(height[i]>max_height)
        max_height=height[i];
    }

    //requires potion only if natural height is less than max_height
    if(k<max_height)
        potion = max_height-k;
    else 
        potion=0;
    
    printf("%d",potion);
  
    return 0;
}

