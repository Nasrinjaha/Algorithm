#include<bits/stdc++.h>
using namespace std;
int flink[10],blink[10],data[10];
int fstrt,bstrt,favail,bavail;
void init(){
    for(int i=0;i<10;i++){
        cin >> flink[i] >> data[i] >>  blink[i];
    }
    cin >> fstrt >> bstrt;
    cin >> favail >> bavail;

}
int main(){
    init();
    int value;
    cin >> value;
    int cf=0,cb=0;
    int ptr=fstrt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=flink[ptr];
    }
    cout << endl;
    ptr=bstrt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=blink[ptr];
    }
     cout << endl;
    ptr=fstrt;
    while(ptr!=-1){
        cf++;
        if(data[ptr]==value){
            break;
        }
        ptr=flink[ptr];
    }
    ptr=bstrt;
    while(ptr!=-1){
        cb++;
        if(data[ptr]==value){
            break;
        }
        ptr=blink[ptr];
    }
    cout << cf << " " << cb;
}
/*
7 0 3
8 10 4
9 80 6
0 0 -1
1 20 -1
-1 0 7
2 70 8
5 0 0
6 90 1
-1 60 2
*/
//f 4 3
//b 9 5
