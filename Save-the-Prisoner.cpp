#include <bits/stdc++.h>

using namespace std;

int main(){
    int t , n , m ,s;
    cin >> t;
    while(t--){
        cin >> n >> m >> s;
        if((m+s-1)<=n) cout << m+s-1 << endl;
        else{
            m = m - (n - s + 1);
            if(m%n== 0) cout << n << endl;
            else cout << m%n << endl;
            
        }
        
    }
    return 0;
}
