#ifndef SINGLETON_CPP
#define SINGLETON_CPP

using namespace std;

class Singleton {
private:
    Singleton();
public:
    static Singleton* getInstance();
};


#endif /* SINGLETON_CPP */