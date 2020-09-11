#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {
    int r, c;
    for(r=1;r<=n;r++){
        //print spaces
        for(c=1;c<=n-r;c++)
            printf(" ");
        //print hashtags
        for(c=1;c<=r;c++)
            printf("#");

        printf("\n");
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}


