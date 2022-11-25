#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main()
{
    int p;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        arr[p]++;
    }

    for(int i=1;i<=1000000;i++)
    {
        if(arr[i]>0)
        {
            for(int j=0;j<arr[i];j++)
            {
                cout << i<< " ";
            }
        }
    }


}
