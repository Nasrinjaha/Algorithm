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
    int value;
    cin >> value;
    int t;
    ptr=strt;
    int temp;
    int prev_node;
    int node;
    while(ptr!=-1){
        if(data[ptr]==value){
            t= ptr;
            break;
        }
        prev_node=ptr;
        ptr=link[ptr];

    }
    if(t==strt){
        //cout << "Found";
        temp=link[strt];
        link[strt] = avail;
        avail=strt;
        strt=temp;
    }
    else{
        int node=link[prev_node];
        link[prev_node]=link[node];
        link[node]=avail;
        avail=node;
    }
    ptr=strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }

}

