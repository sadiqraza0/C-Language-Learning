#include<stdio.h>
int main() {
    int age;
    printf("enter age :");
    scanf("%d", &age);

    if(age >= 18) {
        printf("they can drive.\n");
    }
    else {
        printf("they cannot drive.\n" );
    }
    return 0;
}