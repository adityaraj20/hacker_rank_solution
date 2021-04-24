#include <bits/stdc++.h>

using namespace std;
int main()
{
    int s,t;
    cin >> s >> t;
    int a,b;
    cin >> a >>b;
    int m,n;
    cin >> m >> n;
    vector<int> app(m);
    size_t resultA =0;
    for (int app_i = 0;app_i < m;app_i++)
    {
        cin >> app[app_i];
        if (a+app[app_i] >= s && a+app[app_i] <= t)
        {
            resultA++;
        }
    }
    vector<int> org(n);
    size_t resultB=0;
    for ( int org_i=0; org_i < n;org_i++){
        cin>>org[org_i];
         if (b+org[org_i] >= s && b+org[org_i] <= t){
             resultB++;
             
         }
    }
    cout<< resultA<< endl;
    cout << resultB << endl;
    return 0;
    
    
    
}

