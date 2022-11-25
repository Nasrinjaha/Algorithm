#include<bits/stdc++.h>
using namespace std;
int data[10],link[10];
int strt,avail;
void init(){
    for(int i=0;i<10;i++){
        cin >> data[i] >> link[i];
    }
    cin >> strt >> avail;
 }
int main(){
    init();
    int ptr=strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
    int index;
    cin >> index;
    ptr=strt;
    int prev_node=0;
    while(ptr!=-1){
            if(ptr==index){
                break;
            }
        prev_node=ptr;
        ptr=link[ptr];
    }
    int node=link[prev_node];
    link[prev_node] = link[node];
    link[node]=avail;
    avail = node;
    ptr =strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr =link[ptr];
    }


}
/*
80 -1
50 7
0 8
20 9
0 -1
70 3
30 0
10 5
0 4
40 6
*/
//1 2



