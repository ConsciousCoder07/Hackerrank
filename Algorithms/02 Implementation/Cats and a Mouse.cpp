#include <bits/stdc++.h>
using namespace std;

void decide(int x, int y, int z){

    int a = abs(x-z);
    int b = abs(y-z);    
    
    if(a<b) printf("Cat A\n");
    else if(a>b) printf("Cat B\n");
    else printf("Mouse C\n");
}

int main()
{
    int q,x,y,z;
    cin >> q;

    for(int i=1; i<=q; i++){
       cin >> x >> y >> z;
       decide(x,y,z);
    }
    return 0;
}

