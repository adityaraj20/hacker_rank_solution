#include <bits/stdc++.h>

using namespace std;

int main(){
        int actd , actm ,acty ,expd , expm ,expy, fine =0;
        cin >>actd >> actm >> acty >> expd >> expm >> expy;
        if(acty>expy) fine = 10000;
        else if(acty==expy && actm>expm) fine = 500 * (actm-expm);
        else if(acty==expy && actm==expm && actd>expd) fine = 15 *(actd-expd);
        cout << fine << endl;
        return 0;
}
