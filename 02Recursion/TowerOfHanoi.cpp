#include<iostream>
using namespace std;
void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b);
        cout<<" move \n "<<a<<c;
        toh(n-1,b,a,c);
    }
};
int main(){
    int x;
    cout<<"Enter number for move : ";
    cin>>x;
    toh(x ,1,2,3);

 return(0);
}