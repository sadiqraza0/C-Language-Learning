#include<stdio.h>
int power(int n,int a) {
    static int i=1;
    int s=a;
    if(a==0)
    return 1;
    if(i==s)
    return n;
    i++;
    n=n*power(n,a);

}
int main() {
    int n,a;
    scanf("%d%d",&n,&a);
   n= power(n,a);
   printf("%d",n);
}