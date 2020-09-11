#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,max = 0,count = 0;
    
    scanf("%i\n",&n);
    int candles[n];
    for (int i = 0;i < n;i++) {
        scanf("%i",&candles[i]);
        if (candles[i] > max){
            max = candles[i];
        }
    }
    for (int i = 0;i < n;i++) {
        
        if (candles[i] == max){
            count += 1;
        }
    }
    printf("%i",count);
    return 0;
}
