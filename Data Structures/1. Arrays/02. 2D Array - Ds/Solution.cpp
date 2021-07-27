// https://www.hackerrank.com/challenges/2d-array/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6], maxSum=INT_MIN, sum=0;

    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            cin >> a[i][j];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){

            sum = a[i][j] + a[i][j+1] + a[i][j+2] +
                            a[i+1][j+1] +
                  a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];

            maxSum = max(maxSum, sum); 
        }
    }
    cout << maxSum;
    return 0;
}
