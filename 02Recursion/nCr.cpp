#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    return fact(n-1)*n;
};

int NCR(int n,int r){
    int num ,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
};

int nCr(int n,int r){
    if(n==r || r==0)
    return 1;
    return nCr(n-1,r-1)+nCr(n-1,r);
};

int main(){
    cout<<"nCr is = "<<nCr(5,2)<<endl;
    // cout<<"NCR is = "<<NCR(5,2)<<endl;
    // cout<<"factorial is = "<<fact(5)<<endl;

 return(0);
}