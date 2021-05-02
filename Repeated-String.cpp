#include <bits/stdc++.h>

using namespace std;
int main(){
string s;
long n , count = 0;
cin >> s >> n;
for(long i=0 ; i<s.size() ; i++) if(s[i]=='a') count++;
count = count*(n/s.size());
for(long i=0; i<n%s.size() ; i++) if(s[i]=='a')count++;
cout << count << endl;
return 0;
}
