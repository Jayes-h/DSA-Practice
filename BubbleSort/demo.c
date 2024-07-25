#include<stdio.h>
int a;
int k=3;
void show(int a[],int n){
    int t;
    if(n>k)return;
    t=a[n];
    a[n] = a[n+1];
    a[n+1]= t;
    show(a,n+1);
}
void show2(int a[], int n){
    if(n>3)return;
    show(a,0);
    k--;
    show2(a,n+1);
}
void main(){
    int x[]= {5,4,3,2,1};
    show2(x,0);
    for(int i=0;i<5;i++){
    printf("%d ",x[i]);
    }
}