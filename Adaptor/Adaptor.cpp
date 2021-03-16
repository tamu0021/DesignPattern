#include "Adaptor.h"

void Hello::HelloStr(void) {
	cout << "Hello" << str << endl;
}

void Adaptor::GreetStr(void) {
	Hello hello(str);
	hello.HelloStr();
}