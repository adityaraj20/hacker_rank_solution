#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,k , ci ,maxi=0;
    cin >> n >> k;
    while(n--){
        cin >> ci;
        maxi = max(maxi , ci);
        
    }
    (maxi < k) ? cout << 0 <<endl : cout << maxi-k << endl;
    return 0;
}
