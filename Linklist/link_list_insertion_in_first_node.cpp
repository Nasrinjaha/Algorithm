#include<bits/stdc++.h>
using namespace std;
int data[15],link[15];
int strt,avail;
void init(){
    for(int i=0;i<10;i++){
        cin >> data[i] >> link[i];
    }
    cin >>strt >> avail;
}
int main()
{
    init();
    int ptr=strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
    int node,value;
    cin  >> value;
    int temp=link[avail];
    link[avail]=strt;
    data[avail] = value;
    strt = avail;
    avail = temp;
    ptr=strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
}
