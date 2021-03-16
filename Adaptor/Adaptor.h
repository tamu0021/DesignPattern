#pragma once
#include <iostream>

using namespace std;

/* 既存提供物(仮) */
class Hello {
public:
	explicit Hello(const string& newStr):str(newStr){}
	~Hello(){}
	void HelloStr(void);
private:
	string str;
};

/* インターフェース */
class Greet {
public:
	virtual void GreetStr(void) = 0;
	virtual ~Greet(){}
};

class Adaptor : public Greet {
public:
	explicit Adaptor(const string& newStr):str(newStr){}
	void GreetStr(void);
private:
	string str;
};