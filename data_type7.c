#include <stdio.h>

int main() {
  
  int items = 50;
  float item_price = 9.99;
  float total_cost = items * item_price;
  char currency = '$';

  
  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", item_price, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}
