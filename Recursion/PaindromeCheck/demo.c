#include<stdio.h>

int s=0;
void show(int n){
    if(n<=0)return;
    s=s*10+n%10;
    show(n/10);
}
void isPalindrome(int n){
    s=0;
    show(n);
    if(s==n){
        printf("No. is palindrome");
    }else{
        printf("No. is not palindrome");
    }
}
void main(){
    isPalindrome(122);

}