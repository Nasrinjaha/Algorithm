#include<bits/stdc++.h>
using namespace std;
int data[10],link[10];
int strt,avail;
void init(){
    for(int i=0;i<10;i++){
        cin >> data[i] >> link[i];
    }
    cin >>strt >> avail;
}


int main(){
    init();
    int ptr=strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
    int value;
    cin >> value;
    int prev_node;
    ptr =strt;
    while(ptr!=-1){
        if(data[ptr]>=value){
            break;
        }
        prev_node=ptr;
        ptr=link[ptr];
    }
    int node;
    node=link[prev_node];
    link[prev_node]=avail;
    data[avail]=value;
    link[avail]=node;
    avail=link[avail];
    ptr=strt;
     while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
}
/*
0 8
40 5
20 1
0 0
10 2
70 9
0 -1
90 -1
0 6
80 7
*/
// 4 3
