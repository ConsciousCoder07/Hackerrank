// https://www.hackerrank.com/challenges/arrays-ds/problem

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> a) {
    for(int i=a.size()-1; i>=0; i--)
        cout << a[i] << " ";
}

int main()4
{
    int n, temp; 
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    reverseArray(a);
    return 0;
}
