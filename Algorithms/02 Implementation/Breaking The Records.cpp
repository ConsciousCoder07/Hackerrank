#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int score[1000];
    long int highscore_broke=0, lowscore_broke=0,n;
    int max, min;

    //to input number of games played
    scanf("%ld",&n);

    //to get scores
    for(int i=0; i<n; i++)
        scanf("%lld",&score[i]);
    

    max = min = score[0]; //initial value

    for(int i=1; i<n; i++){

        if(score[i]>max){

            max=score[i];
            highscore_broke++;
        }
        if(score[i]<min){

            min=score[i];
            lowscore_broke++;
        }
    }

    printf("%ld %ld",highscore_broke,lowscore_broke);

    return 0;
}
