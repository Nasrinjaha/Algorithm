#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<int>st;
    int len = s.size();
    cout << len << endl;
    bool fg=true;
    for(int i=0;i<len;i++){
        if(s[i]=='('){
            st.push('(');
        }
        else{
            if(st.size()){
               st.pop();
            }
            else{
               fg=false;
               break;
            }


        }
    }
    if(fg){
        if(st.size()){
           cout << "Invalid\n";
        }
        else{
            cout << "Valid\n";
        }
    }
    else{
       cout << "Invalid\n";
    }
    return 0;
}

