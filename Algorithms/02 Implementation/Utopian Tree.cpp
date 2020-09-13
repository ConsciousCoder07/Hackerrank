#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){

        int n, height=2; 
        cin >> n;
        if (n==0) cout << 1 << endl;
        if (n==1) cout << 2 << endl;
        for(int i=2; i<=n; i++){

           if(i%2==0)
                height++;
            else
                height*=2;
        }
        
        if(n!=0 && n!=1)
            cout << height << endl;
    }
    return 0;
}