#include<stdio.h>
void sum(int a[], int b[], int x[], int m1, int m2);
void show(int x[], int n){
    if(n<2) return;
    int i;
    int m1=n/2;
    int m2=n-m1;
    int a[m1];
    int b[m2];

    for(i=0;i<m1;i++){
        a[i] = x[i];
    }
    for(i=0;i<m2;i++){
        b[i] = x[i+m1];
    }
    show(a,m1);
    show(b,m2);
    sum(a,b,x,m1,m2);
}
    
void sum(int a[], int b[], int x[], int m1, int m2){
    int i,j,k;
    for(i=0, j=0, k=0; k<m1+m2;){
        if(i==m1)
        x[k++] = b[j++];
        else if(j==m2)
        x[k++] = a[i++];
        else if(a[i] < b[j])
        x[k++] = a[i++];
        else
        x[k++] = b[j++];
    }
}
void main(){
    int i;
    int x[]={56,29,35,42,15,41,75,21};
    show(x,8);
    for(i=0;i<8;i++){
        printf("%d\n",x[i]);
    }
}