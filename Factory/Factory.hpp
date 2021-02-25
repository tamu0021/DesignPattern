/* ヘッダ */
#include <iostream>
#include <string>

/* 名前空間 */
using namespace std;

/**
 *  @brief Productの抽象クラス
 */
class Product{
public:
    /* 再定義しなければ使えない状態にする */
    virtual void Use(void) = 0;
};

/**
 * @brief IDCardを表すクラス
 */
class IDCard: public Product{
public:
    /**
     *  @brief コンストラクタで使用者を登録する。
     */
    IDCard(string name){
        ownerName_=name;
    }

    /**
     *  @brief IDCardを使用する関数
     */
    void Use(void);

private:
    string ownerName_;//使用者の名前
};

/**
 * @brief BusinessCardを表すクラス
 */
class BusinessCard: public Product{
public:
    /**
     *  @brief コンストラクタで使用者を登録する。
     */
    BusinessCard(string name){
      ownerName_=name;
    }

    /**
     *  @brief BusinessCardを使用する関数
     */
    void Use(void);

private:
    string ownerName_;//使用者の名前
};

/**
 *  @brief 抽象Factoryクラス
 */
class Factory{
public:
    /**
     *  @brief Productを生成し、そのインスタンスを返す関数
    */
    Product* Create(string type,string name);

private:
    /**
     *  @brief Productを作成する純粋仮想関数
     *  @param type Productの種類
     *  @param name Productの所有者の名前
     */
    /* 再定義しなければ使えない状態にする */
    virtual Product* CreateProduct(string type, string name) = 0;
};

/**
 *  @brief 文房具を作るFactoryクラス
 */
class StationeryFactory: public Factory{
public:
    /**
     * @brief Productを作成する関数
     */
    Product* CreateProduct(string type,string name);
};