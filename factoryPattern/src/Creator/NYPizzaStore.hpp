#ifndef NY_PIZZA_STORE
#define NY_PIZZA_STORE

#include "IPizzaStore.hpp"
#include "NYStylePizza.hpp"

class NYPizzaStore : public IPizzaStore {
 public:
  IPizza* createPizza() override { return new NYStylePizza; };
};

#endif