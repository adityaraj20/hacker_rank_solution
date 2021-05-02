#include <bits/stdc++.h>

using namespace std;

int main(){
     int t , a ,b ;
     cin >> t;
     while(t--){
        long count = 0;
        cin >> a >> b;
        int i=sqrt(a);
        if(pow(i,2)<a) i++;
        for( ; pow(i,2)<=b ; i++) count++;
        cout << count << endl;     
     }   
     return 0;
}
