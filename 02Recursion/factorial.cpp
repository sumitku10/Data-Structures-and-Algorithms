#include<iostream>
using namespace std;

int fact(int m ,int n){
    // int fact(int m ,int n){
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
    
    // return fact(m,n-1)*m;
};
int main()
{
    int a;
    a=fact(6,2);
    cout<<a;

return(0);
}