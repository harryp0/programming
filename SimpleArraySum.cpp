#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,sum=0,n;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {

       cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   cout<<sum;
   return 0;
}
