#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1000];
void insertion_sort(int l, int r)
  {

    for(int i=l+1;i<r+1;i++)
    {
      int val = arr[i] ;
      int j = i ;
    while (j>l && arr[j-1]>val)
      {
        arr[j]= arr[j-1] ;
         j-= 1;
       }
    arr[j]= val ;
    }

  }
int find_pivot(int l,int r){
    srand(time(NULL));
    int m = l+rand()% (r-l);
    //int m = (l+r)/2;
    int pivot = arr[m];
    //swap(arr[l],arr[m]);
    int low = l+1;
    int high = r;
    while(low<=high){
        while(arr[low]<pivot){
            low++;
        }
        while(arr[high]>pivot){
            high--;
        }
        if(low<high){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }
    swap(arr[l],arr[high]);
    return high;
 }
void quick_sort(int l,int r){

    if(l<r){
        if(r-l+1>10){
             int pivot = find_pivot(l,r);
              quick_sort(l,pivot);
              quick_sort(pivot+1,r);
        }
        else{
            insertion_sort(l,r);
           // cout << "ripa ";
        }

    }
}
int main(){
     scanf("%d",&n);;
     for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
     }
    quick_sort(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
