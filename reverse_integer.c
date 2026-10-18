#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

int reverse(int x){
long long rem,n=x;
long long rev=0;
bool neg=false;
if (n<0){
    n=n*-1;
    neg=true;

}
while(n>0){
    rem=n%10;

    rev=rev*10+rem;
    n=n/10;
}
if(neg){
    rev=rev*-1;
}
if (rev > INT_MAX || rev < INT_MIN) {
        return 0;
    }
return rev;

}
int main(){
    int num;
    printf("enter integer=");
    scanf("%d",&num);
    printf("reversed integer=%d",reverse(num));
}