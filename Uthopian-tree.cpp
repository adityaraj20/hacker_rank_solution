#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> t;
    while(t--){
        cin >>n;
        int height = 1;
        for(int i=0 ; i<n;i++){
            if(i%2==1)height++;
            else height *= 2;
        }
        cout << height << endl;
    }
    return 0;
    
}
