#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int tab[10]={};
        long count =0;
        string str;
        cin >> str;
        for(int i=0 ; i<str.size() ;i++) tab[str[i]-'0']++;
        for(int i=1 ; i<10 ; i++){
            if(atoi(str.c_str())%i == 0) count += tab[i];
        }
        cout << count << endl;
    }
    return 0;
}
