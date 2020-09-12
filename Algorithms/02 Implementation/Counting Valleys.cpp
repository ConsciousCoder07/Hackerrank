#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    int altitude=0,valley=0;
    char string[1000000];
    scanf("%ld",&n);
    scanf("%s",string);
    for(int i=0; i<n; i++){
        
        if(string[i]=='D'){ 
            if(altitude==0){ // First downstep into the valley
                valley++;
            }
             altitude--;
        }    
        else 
            altitude++;  
    }

    printf("%d",valley);
    return 0;
}

