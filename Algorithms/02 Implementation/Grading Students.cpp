#include <bits/stdc++.h>
using namespace std;
void solution() {
     int n, x;
     cin>>n;
     for(int i=0; i<n; i++){
        cin>>x;
        if(x>=38 and x%5>=3){
            while(x%5!=0){
               x++;
            }
        }
        cout<<x<<endl;
     }
}

int main () {
    solution();
    return 0;
}


/* Explanation: 

5-1=4 and 5%1=1
5-2=3 and 5%2=2
5-3=2 and 5%3=3
5-4=1 and 5%4=4
5-5-0 and 5%5=0
We want diff between number and next multiple of 5 to be < 3
which is inversely proportional to modulus
so modulus must be >= 3

*/

