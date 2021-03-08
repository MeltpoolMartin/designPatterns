#ifndef CHICAGO_PIZZA_STORE
#define CHICAGO_PIZZA_STORE

#include "ChicagoStylePizza.hpp"
#include "IPizzaStore.hpp"

class ChicagoPizzaStore : public IPizzaStore {
 public:
  IPizza* createPizza() override { return new ChicagoStylePizza; };
};

#endif