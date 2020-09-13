#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, m, n, a, b, temp, appleCount=0, orangeCount=0;
    vector<int> apples;
    vector<int> oranges;
    
    //input
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        cin >> temp;
        apples.push_back(temp+a);
    }
    for(int i=0; i<n; i++){
        cin >> temp;
        oranges.push_back(temp+b);
    }

    //logic
    for(int i=0; i<m; i++){
        if(apples[i]>=s && apples[i]<=t)
            appleCount++;
    }
    for(int i=0; i<n; i++){
        if(oranges[i]>=s && oranges[i]<=t)
            orangeCount++;
    }

    //output
    cout << appleCount << endl << orangeCount;
    return 0;
}
