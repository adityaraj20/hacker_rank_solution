#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> heights(26);
    string s;
    for(int i=0; i<26 ; i++) cin >> heights[i];
    cin >> s;
    int maxheight = 0;
    for(int i =0; i<s.size() ; i++) maxheight=max(maxheight,heights[s[i]-'a']);
    cout << s.size() * maxheight << endl;
    return 0;
}
