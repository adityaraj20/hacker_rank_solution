#include <bits/stdc++.h>

using namespace std;
int main()
{
    
int i , j ,k ;
long count = 0;
cin >> i >> j >> k;
for (int index = i; index<=j ; index++){
    string s1 = to_string(index);
    string s2 = s1 ; reverse(s2.begin(), s2.end());
    if(abs(atoi(s1.c_str())-atoi(s2.c_str()))%k==0) count++;
}  
 cout << count << endl;
 return 0;
}
