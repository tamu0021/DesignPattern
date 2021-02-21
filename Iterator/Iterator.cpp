/* ヘッダ */
#include "Iterator.hpp"

/* 関数 */
void Menu::setName(const string& newName)
{
    this->name = newName;
}

string Menu::getName(void)
{
    return this->name;
}

Menu MenuBook::getBookAt(int index)
{
    /* 指定のメニュー取得 */
    return book[index];
}

void MenuBook::appendBook(const Menu& newMenu)
{
    /* メニュー表に追加 */
    book.push_back(newMenu);
    numOfMenu++;
}

size_t MenuBook::getLength(void)
{
    /* メニュー数を取得する */
    return book.size();
}

Iterator* MenuBook::myIterator()
{
    /* MenuBookのイテレータとしてMenuBookIteratorを生成して返す */
    Iterator *p = new MenuBookIterator(this);
    return p;
}

bool MenuBookIterator::hasNext(void)
{
    /* 次の要素が存在するかを示している。 */
    if (index < menubook.getLength()){
        return true;
    }
    else {
        return false;
    }
}

Menu MenuBookIterator::next(void)
{
    /* 要素数を1進める */
    Menu menu = menubook.getBookAt(index);
    index++;
    return menu;
}

