#include<iostream>
using namespace std;



int main(){
    int *p,*q;
    int i;

    p=(int*)malloc(5*sizeof(int));
    p[0]=3; p[1]=5; p[2]=7; p[3]=9; p[4]=11;

// increase size of array
    q=(int*)malloc(10*sizeof(int));
     for(i=0;i<5;i++){
        q[i]=p[i]; 
    }
    free(p);
    p=q;
    q=NULL;
// print the array //
    for(i=0;i<5;i++)
        cout<<q[i]<<endl; 
    

 return(0);
}