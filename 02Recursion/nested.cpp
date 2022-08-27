#include<iostream>
using namespace std;

int fun(int x){
if(x>100)
    return x-10;  
    return fun(fun(x+11));
};
int main(){
    int a;
    a=fun(95);
    cout<<a;
    return 0;
}