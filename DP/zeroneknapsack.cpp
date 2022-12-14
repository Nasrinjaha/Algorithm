#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pb push_back
#define all(a) a.begin(),a.end()
#define mem(x,y) memset(x,sizeof(x),y);
#define i64 long long int
const double pi = acos(-1.0);
const int maxn = (i64)2e5+5;

int w[100],b[100],c[105][105],tw;
void knapsack(int n)
{
    int i,j;
    for(i = 1 ; i<=n ; i++)
    {
        for(j = 1 ; j<= tw ; j++)
        {
            if(w[i]<=j)
            {
                if(c[i-1][j-w[i]] + b[i] > c[i-1][j])
                {
                    c[i][j] = c[i-1][j-w[i]] + b[i];
                    //cout<<c[i][j-w[i]]<<" "<<b[i]<<"\n";
                }
                else c[i][j] = c[i-1][j];
            }
            else c[i][j] = c[i-1][j];
        }
    }
}

void print(int n)
{
    int i = n;
    int j = tw;

    while(i > 0 && j > 0)
    {
        if(c[i][j] == c[i-1][j]) i--;
        else
        {
            printf("%d ",w[i]);
            i--;
            j = j - w[i];
        }
    }

}

int main()
{
    int n,i;
    cin>>n;
    for(i = 1 ; i<=n ; i++)
    {
        cin>>w[i]>>b[i];
    }
    cin>>tw;
    knapsack(n);
    cout<<c[n][tw]<<"\n";
    /*for(i = 1 ; i<=n ; i++)
    {
        for(int j = 1 ; j <= tw ; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    print(n);
return 0;
}

