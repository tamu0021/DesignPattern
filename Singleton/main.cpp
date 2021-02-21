#include "Singleton.hpp"
#include <iostream>

int main(){
  cout << "Start." << endl;
  Singleton *obj1 = Singleton::getInstance();
  Singleton *obj2 = Singleton::getInstance();

  if (obj1 == obj2){
    /* インスタンスが一度しか生成されないため */
    /* obj1とobj2のインスタンスが同一となり、 */
    /* こっちに行くはず */
    cout << "obj1 == obj2" << endl;
  }
  else {
    cout << "obj1 != obj2" << endl;
  }
  
  cout << "End." << endl;
  return 0;
}