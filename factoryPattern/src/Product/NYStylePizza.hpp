#ifndef NY_STYLE_PIZZA_HPP
#define NY_STYLE_PIZZA_HPP

#include "IPizza.hpp"

class NYStylePizza : public IPizza {
 public:
  NYStylePizza() {
    m_name = "NY Style Sauce and Cheese Pizza";
    m_dough = "Thin Crust Dough";
    m_sauce = "Marinara Sauce";
    m_toppings.push_back("Grated Reggiano Cheese");
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