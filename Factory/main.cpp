#include "Factory.hpp"

int main(void){
  cout<<"Factory Method Pattern Sample Start!!"<<endl;

  //Factoryの作成
  Factory *factory=new StationeryFactory(); 

  //Factoryから文房具を生成する
  Product *item1  = factory->Create("BusinessCard","TOM");
  Product *item2  = factory->Create("BusinessCard","SAM");
  Product *item3  = factory->Create("IDCard","RAI");
  Product *item4  = factory->Create("IDCard","TED");

  //それぞれの文房具を使用する
  item1->Use();
  item2->Use();
  item3->Use();
  item4->Use();

  return 0;
}