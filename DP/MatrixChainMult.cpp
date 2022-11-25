#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m[100][100];
int s[100][100];
int p[100];
void MCM(int n){
    int i,j;
    for( i=n;i>=1;i--){
        for( j=i+1;j<=n;j++){
            m[i][j] = LLONG_MAX;
            for(int k=i;k<j;k++){
               ll x = m[i][k]+m[k+1][j]+p[i-1]*p[j]*p[k];
               if(x<m[i][j]){
                 m[i][j] = x;
                 s[i][j] = k;
               }
            }
        }

    }
}
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<=n;i++){
    scanf("%d",&p[i]);
   }
   MCM(n);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d ",m[i][j]);
    }
    cout << endl;
   }
   cout << "-----------------\n";
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d ",s[i][j]);
    }
    cout << endl;
   }
    return 0;
}
/*
4
5 4 6 2 7
*/
