#include <bits/stdc++.h>

using namespace std;
vector<int> socks(101);
int main()
{
    int n, sock , count= 0;
    cin >> n;
    while (n--)
    {
        cin >> sock;
        socks[sock]++;
    }
    for( int i= 0;i < 101;i++)count += socks[i]/2;
    cout << count << endl;
    return 0;
    
}
