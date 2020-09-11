#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long temp, sum=0;
    vector<long long> v;

    for(int i=0; i<5; i++){
        cin >> temp;
        v.push_back(temp);
        sum+=temp;
    }
    
    sort(v.begin(), v.end());

    cout<<sum-v[4]<<" "<<sum-v[0];

    return 0;
}

