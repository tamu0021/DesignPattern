#pragma once
#include <iostream>

using namespace std;

class SubSystem1 {
public:
	string Operation1();
	string Operation2();
};

class SubSystem2 {
public:
	string Operation1();
	string Operation2();
};

class Facade {
public:
	Facade(SubSystem1* subSystem1 = nullptr, SubSystem2* subSystem2 = nullptr) {
		if (!subSystem1) {
			this->thisSubSystem1 = new SubSystem1;
		}
		if (!subSystem2) {
			this->thisSubSystem2 = new SubSystem2;
		}
	}
	~Facade() {
		delete thisSubSystem1;
		delete thisSubSystem2;
	}

	string Operation();

protected:
	SubSystem1* thisSubSystem1;
	SubSystem2* thisSubSystem2;
};

void ClientCode(Facade*);