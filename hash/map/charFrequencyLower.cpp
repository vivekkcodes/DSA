#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "enter string: ";
    cin >> s;

    int hash[26] ={0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "enter how many to check: ";
    cin >> q;

    while(q--){
        char c;
        cin >> c;
        cout << hash[c -'a'] << endl;
    }

    return 0;
}