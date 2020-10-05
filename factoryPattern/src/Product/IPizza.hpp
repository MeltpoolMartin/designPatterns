#ifndef I_PIZZA_HPP
#define I_PIZZA_HPP
#include <iostream>
#include <string>
#include <vector>

class IPizza {
 protected:
  std::string m_name;
  std::string m_dough;
  std::string m_sauce;
  std::vector<std::string> m_toppings;

 public:
  virtual ~IPizza(){};
  virtual void prepare() = 0;
  void bake() { std::cout << "Bake for 25 min at 350" << std::endl; };
  void cut() { std::cout << "Cut pizza in diagonal slices" << std::endl; };
  void box() {
    std::cout << "Place pizza in an official PizzaStore box" << std::endl;
  };
  std::string getName() const { return m_name; }
};

#endif