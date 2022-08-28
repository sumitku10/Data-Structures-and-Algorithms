#include<iostream>
using namespace std;
int main(){
    int a[5]={2,3,4,5,6};
    int *p;
    int i;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=8;
    for(i=0;i<5;i++){
        cout<<a[i];
    }
    cout<<endl;

   for(i=0;i<5;i++){
       cout<<p[i];
   }
 return(0);
}