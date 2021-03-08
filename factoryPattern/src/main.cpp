#include "ChicagoPizzaStore.hpp"
#include "NYPizzaStore.hpp"

int main() {
  NYPizzaStore nYPizzaStore;
  ChicagoPizzaStore chicagoPizzaStore;
  auto pizza1 = nYPizzaStore.orderPizza();
  auto pizza2 = chicagoPizzaStore.orderPizza();
  std::cout << "Ordered pizza: " << pizza1->getName() << std::endl;
  std::cout << "Ordered pizza: " << pizza2->getName() << std::endl;

  delete pizza1;
  delete pizza2;
  return 0;
}