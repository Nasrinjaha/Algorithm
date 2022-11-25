#include<bits/stdc++.h>
using namespace std;
vector<int>v(1000);
void insertion_sort(int l, int r)
  {

    for(int i=l+1;i<r+1;i++){
        int val = v[i] ;
        int j = i ;
        while (j>l && v[j-1]>val){
            v[j]= v[j-1] ;
            j-= 1;
        }
        v[j]= val ;
    }

}
void Merge(int l, int m, int h){
    //cout << l << " " << h << endl;
    int x = h-l+1;
    int tmp[x+3];
    int i=l, j=m+1, k=0;

    while(i<=m && j<=h){
        if(v[i]<=v[j]){
            tmp[k++] = v[i++];
        }
        else {
            tmp[k++] = v[j++];
        }
    }
    while(i<=m){
        tmp[k++] = v[i++];
    }
    while(j<=h){
        tmp[k++] = v[j++];
    }
    i=0;
    while(i<k){
        v[l++] = tmp[i++];
    }


}

void divide(int l, int h){
    if(l<h){
        if(h-l+1>10){
            int m = (l+h)*0.5;
            cout << l << " " << m << " " << h << endl;
            divide(l,m);
            divide(m+1,h);
            Merge(l,m,h);
        }
        else{
              insertion_sort(l,h);
             //cout << "ripa ";
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    divide(0,n-1);
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
