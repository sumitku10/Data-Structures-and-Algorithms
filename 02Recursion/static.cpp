#include<iostream>
using namespace std;

void funb (int x);


void funa(int x){
    if(x>0){
        cout<<x<<endl;
        funb(x-1);
    } 
};
void funb(int x){
    if(x>1){
        cout<<x<<endl;
        funa(x/2);
    }
};


int main(){
   int a=20;
    funa(a);
    return 0;
};