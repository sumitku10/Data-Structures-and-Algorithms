// Assending and Dessending order print //

#include<iostream>
using namespace std;


void fun1(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);
    }
}


void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout<<n<<endl;
    }
}

int main(){
    int a=3;
    cout<<"Dessending order "<<endl;
    fun1(a);
    cout<<"Assending order "<<endl;
    fun2(a);
    return 0;
}