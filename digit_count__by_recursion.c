#include<stdio.h>
int count(int,int);
int main() {

    int n,c=0;
    
    scanf("%d", &n);
   c= count(n,c);
    printf("%d", c);

}
int count(int n,int c) {
    
    if(n==0)
    return c;
    n=n/10;
    c=c+1;
    count(n,c+1);

}