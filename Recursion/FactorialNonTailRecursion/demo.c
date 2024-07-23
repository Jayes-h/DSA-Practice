#include<stdio.h>

int a=1;
void show(int n){
    if(n==0)return;
    show(n-1);
     a=a*n;
}
void main(){
    show(10);
    printf("%d ",a);
}