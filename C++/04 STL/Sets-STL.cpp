#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{

    int t, query, value;
    cin >> t;
    set<int> s;
    
    while(t--)
    {
        cin >> query >> value;

        if(query==1)
            s.insert(value);
        else if(query==2)
            s.erase(value);
        else 
            cout << (s.find(value) != s.end() ? "Yes" : "No") << endl;
    }
    return 0;
}



