#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cout << "Enter the Text: ";
    cin >> s;
    cout << "Enter the pattern: ";
    cin >> p;
    int slen = s.size();
    int plen = p.size();
    if(plen>slen){
        cout << "Doesn't match";
        return 0;
    }
    int index=-1;
    for(int i=0;i<=slen-plen;i++){
        bool fg=true;
        for(int j=0;j<plen;j++){
            if(p[j]!=s[i+j]){
                fg=false;
                break;
            }
        }
        if(fg==true){
            index=i;
            break;
        }

    }
    if(index>-1){
        cout << "Pattern found at " << index << " position";
    }
    else{
        cout << "Doesn't match";
    }
    return 0;
}
