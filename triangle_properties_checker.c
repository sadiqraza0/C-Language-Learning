#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter sides :");
    scanf("%d%d%d", &a,&b,&c);
    if(a==b) {
        if(a==c)
        printf("equilateral");
        else
        printf("isosceles");

    }
    else {
        if(b==c)
        printf("isosceles");
        else {
            if(a==c)
            printf("isosceles");
            else
            printf("scalene");
        }
        
    }
    
}