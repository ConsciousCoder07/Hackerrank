#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,sum=0,bill[100000];
    int k;
    int b,b_half,b_actual;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        scanf("%ld",&bill[i]);
        sum+=bill[i];
    }

    //bill charged by Brian to Anna
    scanf("%d",&b);
    //Half amount of bill 
    b_half=sum/2;
    //amount to be paid actually by Anna
    b_actual=(sum-bill[k])/2;

    if(b_half==b)
    //Brian didn't exluded the dish Anna is alergic to
    printf("%d",b_half-b_actual);
    else 
    //Brian considered exclusion 
    printf("Bon Appetit");
    
    return 0;
}
