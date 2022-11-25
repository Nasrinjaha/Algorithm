#include<bits/stdc++.h>
using namespace std;

int arr[26];
int main(){
    string s;
    cin >> s;
    int sz = s.size();
    for(int i=0;i<sz;i++){
        arr[s[i]-'a']++;
    }
   /* for(int i=0;i<sz;i++){
        cout << arr[i];
    }*/

   for(int i=0;i<26;i++){
        if(arr[i]>0){
            for(int j=0;j<arr[i];j++){
                cout << (char) (i+'a');
            }
        }
    }
    return 0;
}
