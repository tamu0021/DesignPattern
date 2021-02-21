#include "Singleton.hpp"
#include <iostream>

Singleton* Singleton::getInstance() 
{
  static Singleton singleton;
  return &singleton;
}

Singleton::Singleton()
{
  cout << "Instance is created" << endl;
}

