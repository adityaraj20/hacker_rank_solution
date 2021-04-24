#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int a= 0;a < n;a++)
    {
        int grade;
        cin >> grade;
        if(grade >= 38 && grade % 5 >= 3)
        grade += 5 - grade % 5;
        cout<< grade <<endl;
    }
    return 0;
}
