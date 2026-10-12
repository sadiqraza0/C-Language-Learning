#include<stdio.h>
#include<math.h>
void numberSquare(int n);
int main() {
    int n;
    printf("enter n :");
    scanf("%d", &n);
    numberSquare(n);


return 0;
}

void numberSquare(int n){
    int y;
y=pow(n,2);
printf("%d", y);
}


    