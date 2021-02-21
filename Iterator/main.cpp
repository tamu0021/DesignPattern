/* ヘッダ */
#include "Iterator.hpp"

/* メイン関数 */
int main(int argc, const char * argv[]) {

    //Menuオブジェクトを生成
    Menu menu1("Omurice");
    Menu menu2("CurryRice");
    Menu menu3("BlackRice");
    Menu menu4("WhiteRIce");

    //生成したMenuをMenuBookにメニューを追加
    MenuBook menubook;
    menubook.appendBook(menu1);
    menubook.appendBook(menu2);
    menubook.appendBook(menu3);
    menubook.appendBook(menu4);

    //MenuBookのiteratorを生成
    //Iertatorはmenubook自身を受け取る
    Iterator* it = menubook.myIterator();

    while(it->hasNext()){
       //it->next()はmenubookの登録されたmenuを指す。
        cout << it->next().getName() <<endl;//イテレータが指すメニューの名前を表示
    }

    delete(it);

    return 0;
}

