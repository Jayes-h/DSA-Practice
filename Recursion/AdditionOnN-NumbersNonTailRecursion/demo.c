#include<stdio.h>

int a;
void show(int n){
if(n==0)return;
show(n-1);
a=n+a;
}
void main(){
show(10);
printf("%d ",a);
}