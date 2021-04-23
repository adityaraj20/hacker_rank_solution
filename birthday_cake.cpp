#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,temp=0,count=0,i;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    temp=a[n-1];
   for(i=0;i<=n;i++)
   {
       if(temp==a[i])
       count++;
   }
    cout<<count;
    return 0;
}
