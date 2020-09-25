#ifndef I_SUBJECT_HPP
#define I_SUBJECT_HPP

#include <memory>

#include "IObserver.hpp"

class ISubject {
 public:
  virtual ~ISubject(){};
  virtual void registerObserver(const std::shared_ptr<IObserver>& observer) = 0;
  virtual void removeObserver(const std::shared_ptr<IObserver>& observer) = 0;
  virtual void notifyObservers() = 0;
};

#endif