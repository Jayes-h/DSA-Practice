 #include<stdio.h>

 void show(int n){
    if(n==11)return; 
    show(n+1);
    printf("%d\n",n);
 }
int main(){
    show(1);
}