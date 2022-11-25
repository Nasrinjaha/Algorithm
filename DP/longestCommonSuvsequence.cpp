#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int m ,n;
int c[50][50];
int b[50][50];
void print(int i,int j){
     if(i==-1 || j==-1){
        return;
     }
     if(b[i][j]==1){
        print(i-1,j-1);
        printf("%c",s1[i]);
     }
     else if(b[i][j]==2){
        print(i-1,j);
     }
     else{
        print(i,j-1);
     }
}
void lcs(){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                c[i][j]=c[i-1][j-1]+1;
                b[i-1][j-1]=1;

            }
            else if(c[i-1][j]>c[i][j-1]){
                  c[i][j]=c[i-1][j];
                  b[i-1][j-1]=2;

            }
            else{
                c[i][j]=c[i][j-1];
            }
        }
    }
    cout << c[m][n] << endl;

}
int main(){
    cin >> s1 >> s2;
    m=s1.size(),n=s2.size();
    if(m<n){
        s1.swap(s2);
        swap(m,n);
    }
    lcs();
    print(m-1,n-1);
    cout << "\nlcsgrid : " << endl;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nBT : " << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
