#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "IPizza.hpp"

class IPizzaStore {
 public:
  virtual ~IPizzaStore(){};
  virtual IPizza* createPizza() = 0;
  IPizza* orderPizza() {
    m_pPizza = createPizza();
    m_pPizza->prepare();
    m_pPizza->bake();
    m_pPizza->cut();
    m_pPizza->box();

    return m_pPizza;
  };

 private:
  IPizza* m_pPizza;
};

#endif