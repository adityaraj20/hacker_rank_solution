#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n , ai;
        cin >> n;
        vector<int> v(1001);
        for( int i=0 ; i<n ; i++){
                cin >> ai;
                v[ai]++;
                
        }
        for(int i=1; i<1001 ; i++){
                if(v[i]>0){
                        cout << n << endl;
                        n-=v[i];
                }
        }
        return 0;
}
