#include<stdio.h>
void show(int x[], int n){
    int a[10] = {0};
    int i;
    int y[n];

    for(i=0; i<n; i++){
    a[x[i]]++;
    }
    for(i=1; i<10; i++){
    a[i] = a[i] + a[i-1];
    }
    for(i=0; i<n; i++){
    y[a[x[i]] - 1] = x[i];
    }
    for(i=0; i<n; i++){
    printf("%d\n ",y[i]);
    }
}
void main(){
    int x[] = {2,7,8,1,3,6,5,9};
    show(x,8);
}