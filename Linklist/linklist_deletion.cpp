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
    cout << endl;
    ptr=avail;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
    int value;
    bool fg = false;
    cin >> value;
    ptr=strt;
    int prev_node=-1;
    int n=0;
    while(ptr!=-1){
        n++;
        if(data[ptr]==value){
            fg=true;
            break;
        }
        prev_node=ptr;
        ptr=link[ptr];

    }
    if(fg){
        //cout << "prev node "  << f << " index and node " << n ;
        int  node = link[prev_node];
        link[prev_node] = link[node];
        link[node]=avail;
        avail = node;

    }
    else{
        cout << "value not found" << endl;
    }
    ptr =strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr =link[ptr];
    }

}
/*20 3
  0  8
  50 7
  30 6
  0 1
  10 0
  40 2
  60 9
  0 -1
  70 -1*/
//5 4


