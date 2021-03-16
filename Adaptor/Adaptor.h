#pragma once
#include <iostream>

using namespace std;

/* �����񋟕�(��) */
class Hello {
public:
	explicit Hello(const string& newStr):str(newStr){}
	~Hello(){}
	void HelloStr(void);
private:
	string str;
};

/* �C���^�[�t�F�[�X */
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