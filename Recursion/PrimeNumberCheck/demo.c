#include<stdio.h>
int c=0, i=2;
int s;
void show(int n){
    if(i==5)return;
    if(n%i==0){
        c=1;
        i++;
        show(n);
    }
}
void isPrime(int n){
    show(n);
    if(c==0){
        printf("No. is prime");
    }else{
        printf("No. is not prime");
    }
}
void main(){
    isPrime(5);
}