#include <stdio.h>

int main() {
  float subtotal;
  float tax = 0.09;
  printf("How much are your groceries?" );
  scanf("%f", &subtotal);
  printf("idk man type your tax rate");
  scanf("%f", &tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
