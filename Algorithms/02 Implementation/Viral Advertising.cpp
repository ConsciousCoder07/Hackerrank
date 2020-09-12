#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,n1,people_liked;
    int total=0;
    scanf("%d",&n);
    for(int i=1,people_received=5; i<=n; i++){

        //initial adv was sent to 5 people and then it changes to people_received next day
        n1 = people_received;
        //people liked the advertisement
        people_liked = n1/2;
        //number of people whom adv. was sent the next day
        people_received = people_liked*3;
        //total no. of people who liked the adv.
        total += people_liked;

    }
    printf("%d",total);
    return 0;
}
