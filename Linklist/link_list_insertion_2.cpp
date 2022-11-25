#include<bits/stdc++.h>
using namespace std;
int data[15],link[15];
int strt,avail;
void init(){
    for(int i=0;i<10;i++)
    {
        cin >> data[i] >> link[i];
    }
    cin >> strt;
    cin >> avail;

}
int main()
{
    init();
    int ptr;
    ptr=strt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=link[ptr];
    }
    int node,value;
    cin >> node >> value;
    int temp=link[node];
    link[node]=avail;
    node=link[node];
    avail=link[avail];
    data[node]=value;
    link[node]=temp;
    ptr=strt;
    while(ptr!=-1){
        cout <<data[ptr] << " ";
        ptr=link[ptr];
    }


}
/*
70 -1
0 9
10 4
0 1
20 8
40 7
0 -1
60 0
30 5
0 6
*/
//2 3
