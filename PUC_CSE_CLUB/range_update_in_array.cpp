#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n+5];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int t;
    cin >> t;
    int temp[n+5]={0};
    while(t--){
        int x,y,value;
        cin >> x >> y >> value;
        temp[x]=value;
        temp[y+1]=value*(-1);
    }
    for(int i=1;i<n;i++){
        temp[i]=temp[i-1]+temp[i];
    }
    for(int i=0;i<n;i++){
        arr[i]+=temp[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
