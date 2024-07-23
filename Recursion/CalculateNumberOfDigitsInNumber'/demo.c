#include<stdio.h>
int a=0;
void show(int n){
    if(n<=0)return;
    a++;
    show(n/10);
}
void main(){
    show(234);
    printf("%d ",a);
}