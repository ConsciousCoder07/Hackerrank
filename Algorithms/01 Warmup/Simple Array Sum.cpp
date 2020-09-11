#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int n, sum=0, temp;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> temp;
        a.push_back(temp);
    }
       
    for(int i=0; i<n; i++)
        sum += a[i];

    cout << sum;

    return 0;
}