#include<stdio.h>
int s=0;
void show(int i,int n){
    if(i>n/2)return;
    if(!(n%i))
    s=s+i;
    show(i+1,n);
}
void isPerfect(int n){
    s=0;
    show(1,n);
    if(s==n){
        printf("No. is perfect");
    }else{
        printf("No. is not perfect");
    }
}
void main(){
    isPerfect(3);
}