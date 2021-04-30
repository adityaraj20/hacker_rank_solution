#include <bits/stdc++.h>

using namespace std;

int main(){
    long n , result = 2, tmp =2;
    cin >> n;
    for(int i=2 ;i<=n ;i++){
        tmp = (tmp*3)/2;
        result += tmp;
    }
    cout << result << endl;
    return 0;
}
