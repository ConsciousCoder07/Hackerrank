#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height[26];
    char a[10];

    for(int i=0; i<26; i++)
        scanf("%d",&height[i]);
    
    scanf("%s",a);

    int length = strlen(a);

    int temp,h,max_height=0, index;
    for(int j=0; j<length; j++){

        //ASCII value of the letter
        int temp = a[j];
        //Get the index by subtracting the 97 as small letters (97-122)
        index = temp - 97;
        h = height[index];
        if(h>=max_height)
        max_height=h;
    }

    printf("%d",length*max_height);

}
