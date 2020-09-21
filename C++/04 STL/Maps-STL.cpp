#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {

    int queries, type, marks;
    string name;
    map<string, int> m;
    cin >> queries;

    while(queries--)
    {
        cin >> type >> name;
        auto itr = m.find(name);

        if(type==1)
        {
            cin >> marks;
            //if not present make
            if(itr==m.end())
                m.insert(make_pair(name, marks));
            else
                itr->second += marks;
        }
        else if(type==2){
            m.erase(name);
        }
        else{
            cout << m[name] << endl;
        }

    }
    return 0;
}



