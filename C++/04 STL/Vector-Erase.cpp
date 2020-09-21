#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a, low, high, temp;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> a >> low >> high;
    v.erase(v.begin()+a-1);
    v.erase(v.begin()+low-1, v.begin()+high-1);

    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
