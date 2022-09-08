// dynamic 


#include<iostream>
using namespace std;

void funb (int x);

void funb(int x){
    if(x>1){
        cout<<x<<endl;
        funa(x/2);
    }
};


int main(){
   int a=20;
    funb(a);
    return 0;
};