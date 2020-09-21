#ifndef I_SUBJECT_HPP
#define I_SUBJECT_HPP

#include "IObserver.hpp"

class ISubject {
 public:
  virtual ~ISubject(){};
  virtual void registerObserver(IObserver*) = 0;
  virtual void removeObserver(IObserver*) = 0;
  virtual void notifyObservers() = 0;
};

#endif