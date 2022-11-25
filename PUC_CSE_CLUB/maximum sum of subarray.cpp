//maximum sum of subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int max_so_far = 0 ,current_max = 0;
   /* for(int i=0;i<n;i++){
        current_max = 0;
        for(int j=i;j<n;j++){
            current_max+=v[j];
            max_so_far = max(max_so_far,current_max);
            cout << max_so_far << endl;
        }
    }*/
    for(int i=0;i<n;i++){
        current_max = max(v[i],current_max+v[i]);
        max_so_far = max(max_so_far,current_max);
    }

    cout << max_so_far << endl;
    return 0;
}
