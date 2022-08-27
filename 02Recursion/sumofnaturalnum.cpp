#include<iostream>
using namespace std;

int fun(int x){
    if(x==0){
        return 0;
    }
    else{
        return fun(x-1)+x;
    }
}

int main(){
    int n;
    n=fun(5);
    cout<<n;
}