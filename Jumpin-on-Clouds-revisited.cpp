#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , k , ei , e=100;
    cin >> n >> k;
    for( int i=0 ; i<n; i++){
        cin >> ei;
        if(i%k == 0){
            e = e -1 - ei*2;
        }
    }
    cout << e << endl;
    return 0;
}
