#ifndef CHICAGO_STYLE_PIZZA_HPP
#define CHICAGO_STYLE_PIZZA_HPP

#include "IPizza.hpp"

class ChicagoStylePizza : public IPizza {
 public:
  ChicagoStylePizza() {
    m_name = "Chicago Style Deep Dish Cheese Pizza";
    m_dough = "Extra Thick Crust Dough";
    m_sauce = "lum Tomato Sauce";
    m_toppings.push_back("Shredded Mozzarella Cheese");
  };
  void prepare() override {
    std::cout << "Preparing " << m_name << std::endl;
    std::cout << "Tossing " << m_dough << std::endl;
    std::cout << "Adding " << m_sauce << std::endl;
    std::cout << "Adding toppings " << std::endl;
    for (auto& topping : m_toppings) {
      std::cout << topping << std::endl;
    }
  };
};

#endif