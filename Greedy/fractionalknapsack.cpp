#include<bits/stdc++.h>
#define ll long long
#define pdi pair<double,int>
using namespace std;
int main(){
  int n,w,a;
  cout << "enter max capacity : ";
  cin >> w;
  cout << "enter total number of item : ";
  cin >> n;
  pdi arr[n];
  for(int i=0;i<n;i++){
    cout << "enter weight and profit for item : " << i+1 << endl;
    cin>>arr[i].second >> a;
    arr[i].first = (double)a/arr[i].second;
  }
  sort(arr,arr+n);
  int tw = 0;
  double tb = 0.0;
  for(int i=n-1;i>=0;i--){
    if(tw+arr[i].second<=w){
        tw+=arr[i].second;
        tb+=arr[i].first*arr[i].second;
    }
    else{
        int remain = w-tw;
        tb+=(double)remain*arr[i].first;
        break;
    }
  }
  cout << "maximum benefit " << tb << endl;
  return 0;



}
/*
10 4
5 10
4 40
6 30
3 50
105
enter max capacity : 50
enter total number of item : 3
enter weight and profit for item : 1
10 60
enter weight and profit for item : 2
20 100
enter weight and profit for item : 3
30 120
maximum benefit 240
50
3
10 60
20 100
30 120

enter max capacity : 60
enter total number of item : 4
enter weight and profit for item : 1
10 100
enter weight and profit for item : 2
40 480
enter weight and profit for item : 3
30 360
enter weight and profit for item : 4
20 220
720
*/

