#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,alice=0,bob=0,num;
    int a[3],b[3];

    for(i=0;i<3;i++)
     cin>>a[i];

    for(i=0;i<3;i++)
     cin>>b[i];

    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        alice=alice+1;
        else if(a[i]<b[i])
        bob=bob+1;
        else
        {
            alice=alice+0;
            bob=bob+0;
        }
    }
    cout<<alice<<" "<<bob;
    
    return 0;
}
