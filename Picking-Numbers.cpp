#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n , ci ,maxi =0;
    vector<int> vec(100);
    cin >> n;
    while(n--)
    {
        cin >> ci;
        vec[ci]++;
    }
    for(int i =1; i<100; i++){
        maxi = max (maxi,vec[i]+vec[i-1]);
    }
    cout << maxi << endl;
    return 0;
    
}
