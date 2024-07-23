#include<stdio.h>
int a;
void show(int n){
    if(n==0)return;
    a=a+n;  
    show(n-1); 
}
void main(){
    show(10);
    printf("%d ",a);
}
