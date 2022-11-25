#include<bits/stdc++.h>
using namespace std;
int data[10],link[10];
int start,avail;
void init(){
    for(int i=0;i<7;i++){
        cin >> data[i] >> link[i];
    }
    cout << "Starting Node: ";
    cin >> start;
    cout << "Available Node: ";
    cin >> avail;

}
int main()
{
    init();
    int ptr;
    ptr=start;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
    int node;
    int value;
    cout << "\nEnter the node: ";
    cin >> node;
    cout << "Enter the value: ";
    cin >> value;
    int temp = link[node];
    link[node] = avail;
    node = link[node];
    avail = link[avail];
    link[node] = temp;
    data[node] = value;
    ptr=start;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
    return 0;
}
/*
0 6
30 4
10 5
0 0
40 -1
20 1
0 -1

*/
// 2 3
