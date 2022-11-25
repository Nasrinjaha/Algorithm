#include<bits/stdc++.h>
using namespace std;
int data[10],flink[10],blink[10];
int fstrt,bstrt;
int favail,bavail;
void init(){
    for(int i=0;i<10;i++){
        cin >> flink[i] >> data[i] >> blink[i];
    }
    cin >> fstrt >> bstrt ;
    cin >> favail >> bavail;
}
int main(){
    init();
    int ptr=fstrt;

    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr = flink[ptr];
    }

    cout << endl;
    ptr=bstrt;
    while(ptr!=-1){
        cout << data[ptr] << " ";
        ptr=blink[ptr];
    }
     ptr=fstrt;
    int value;
    int fc=0;
    cin >> value;
    while(ptr!=-1){
        fc++;
        if(data[ptr]==value){
            break;
        }
        ptr=flink[ptr];
    }
    cout << fc << endl;
    ptr=bstrt;
    int bc=0;
     while(ptr!=-1){
        bc++;
        if(data[ptr]==value){
            break;
        }
        ptr=blink[ptr];
    }
    cout << bc << endl;

}
/*
8 50 4
7 0 3
6 10 -1
1 0 -1
0 40 9
-1 0 7
9 20 2
5 0 1
-1 60 0
4 30 6
*/
//f 2 3
// b 8 6
