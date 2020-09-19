#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<vector<int>> a;
    int n, q, k, value, i, j;

    cin >> n >> q;
    while(n--)
    {
        cin >> k;
        vector<int> subarray;
        while(k--)
        {
            cin >> value;
            subarray.push_back(value);
        }
        a.push_back(subarray);
    }

    while(q--)
    {
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}
