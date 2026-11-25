#include<stdio.h>
int fibo(int);
int main() {
    int n,i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){


    fibo(i);

    }
    


    
}
int fibo(int i) {

    int f;
    if(i==1)
    return 1;
    else if(i==2)
    return 1;
    else{
    f=fibo(i-1)+fibo(i-2);
    
    }
    return f;

}
