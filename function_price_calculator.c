#include<stdio.h>

void priceCalculator(float value);
int main() {
  float  value = 100.0;
    priceCalculator(value);



    return 0;
}
void priceCalculator(float value) {
    value=value + 0.18* value;
    printf("%f", value);
}

