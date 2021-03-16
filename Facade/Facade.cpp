#include "Facade.h"

string SubSystem1::Operation1() {
	return "SubSystem1: Ready!\n";
}
string SubSystem1::Operation2() {
	return "SubSystem1: Go!\n";
}
string SubSystem2::Operation1() {
	return "SubSystem2: Get Ready!\n";
}
string SubSystem2::Operation2() {
	return "SubSystem2: Fire!\n";
}

string Facade::Operation() {
	string result = "Facade initializes subSystems:\n";
	result += this->thisSubSystem1->Operation1();
	result += this->thisSubSystem2->Operation1();
	result += "Facade orders subSystems to perform the action:\n";
	result += this->thisSubSystem1->Operation2();
	result += this->thisSubSystem2->Operation2();
	return result;
}

void ClientCode(Facade* facade) {
	cout << facade->Operation() << endl;
}