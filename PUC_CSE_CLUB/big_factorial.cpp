#include<bits/stdc++.h>
int arr[1000];
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
     arr[0] = 1;
    int sz = 1,carry = 0;
    vector<long long>v;
    for(int i=2;i<=n;i++){
        int cary = 0;
        int j;
        for(j=0;j<sz;j++){
           int x = arr[j]*i;
           x = x+carry;
           arr[j] = x%10;
           carry = x/10;
        }
        sz = j;
        cout << sz << endl;
        while(carry){
            arr[sz] = carry%10;
            carry = carry/10;
            sz++;
        }
    }
    for(int i=sz-1;i>=0;i--){
        cout << arr[i] ;
    }
    return 0;
}
