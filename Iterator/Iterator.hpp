#ifndef ITERATOR_CPP
#define ITERATOR_CPP

/* ヘッダ */
#include <string>
#include <iostream>
#include <iterator>
#include <vector>

/* 名前空間 */
using namespace std;

/* クラス */
class Menu
{
private:
    /* メニューの名前 */
    string name = "";

public:
    /* コンストラクタ */
    Menu(){}
    explicit Menu(const string& newName)
    {
        /* ここで明示的なコンストラクタを作る */
        this->name = newName;
    }
    /* デストラクタ */
    ~Menu()
    {
        /* cout << "Finish Menu" << endl; */
    }
    void setName(const string& newName);
    string getName(void);
};

class Iterator
{
public:
    /* hasNextやnextはイテレータが持つ実際の機能を実装する。 */
    virtual bool hasNext() = 0;
    virtual Menu next() = 0;
};

class Aggregate
{
public:
    virtual Iterator* myIterator(void) = 0;
};

class MenuBook:public Aggregate
{
private:
    /* Menuを管理する。vectorによって配列にして管理。 */
    vector<Menu> book;
    /* メニューの総数 */
    /* 負は使わないのでunsigned */
    unsigned int numOfMenu = 0;
public:
    /* 指定のメニュー取得 */
    Menu getBookAt(int index);
    /* メニュー表に追加 */
    void appendBook(const Menu& newMenu);
    /* メニュー数を取得する */
    size_t getLength(void);
    /* MenuBookのイテレータとしてMenuBookIteratorを生成して返す */
    Iterator *myIterator(void);
    /* デストラクタ */
    ~MenuBook()
    {
        /* cout << "Finish MenuBook" << endl; */
    }
};

class MenuBookIterator:public Iterator
{
private:
    MenuBook menubook;
    unsigned int index;
public:
    MenuBookIterator(MenuBook newMenuBook)
    {
        /* コンストラクタ */
        this->menubook = newMenuBook;
        this->index = 0;
    }
    explicit MenuBookIterator(MenuBook *newMenuBook)
    {
        /* ポインタを受け取った時のコンストラクタ */
        this->menubook = *newMenuBook;
        this->index = 0;
    }
    ~MenuBookIterator()
    {
        /* cout << "Finish MenuBookIterator" << endl; */
    }

    bool hasNext(void);
    Menu next(void);
};

#endif /* ITERATOR_CPP */