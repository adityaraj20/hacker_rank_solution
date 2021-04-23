#include <bits/stdc++.h>

using namespace std;
int main()
  
   {
    long long V[7], s = 0;
    for(int i = 1; i <= 5; ++i) {
        cin >> V[i];
        s += V[i];
    }   
    sort(V + 1, V + 6);
    cout << s - V[5] << " " << s - V[1] << endl;
    return 0;
}
