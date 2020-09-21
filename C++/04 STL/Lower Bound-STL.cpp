#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{

    int n, temp, queries; 
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> queries;

    while(queries--)
    {
        cin >> temp;
        auto lower = lower_bound(v.begin(), v.end(), temp);

        if(*lower == temp)
            cout << "Yes " << lower-v.begin()+1 << endl;
        else
            cout << "No " << lower-v.begin()+1 << endl;
    }
    return 0;
}
