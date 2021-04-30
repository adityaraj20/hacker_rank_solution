#include <bits/stdc++.h>

using namespace std;
int main(){
    int t, n ,k , arrival;
    cin >> t;
    while(t--){
        int count = 0;
        cin >> n >>k;
        while(n--){
            cin >> arrival;
            if(arrival<=0) count++;
        }
        if(count<k) cout << "YES" << endl;
         else cout << "NO" << endl;
    }
    return 0;
    
}

