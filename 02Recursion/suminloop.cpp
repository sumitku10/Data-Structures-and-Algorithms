#include<iostream>
using namespace std;


int sum(int x ){
  // int i,s=0;
  // for(i=0;i<=x;i++)
  //   s=s+i;
  //   return s;

  //this another method of calculate the sum//
  return (x*(x+1)/2);
};
int main(){

  int a;
  a=sum(5);
  cout<<a;

  return(0);
}