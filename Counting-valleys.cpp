#include <bits/stdc++.h>

using namespace std;
int main()
{
int n;
char c;
long count  =0, numberofvalleys=0;
cin >> n;

while (n--)
{
    cin >> c;
    long help = count;
    if(c=='U')count++;
    else if(c=='D') count--;
     if(help < 0 && count == 0) numberofvalleys++;
}
cout << numberofvalleys << endl;
return 0;
}

