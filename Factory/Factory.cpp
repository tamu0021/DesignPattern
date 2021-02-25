#include "Factory.hpp"

void IDCard::Use(void)
{
    cout<<"This is "<<ownerName_<<"'s IDCard."<<endl;
}

void BusinessCard::Use(void)
{
    cout<<"This is "<<ownerName_<<"'s BusinessCard."<<endl;
}

Product* Factory::Create(string type,string name)
{
    Product* p=CreateProduct(type,name); 
    return p;
}

Product* StationeryFactory::CreateProduct(string type,string name)
{
    if(type=="BusinessCard"){
        return new BusinessCard(name);
    }
    else if(type=="IDCard"){
        return new IDCard(name);
    }
    else{
        cout<<"Unknown Stationery:"<<type<<endl;
        return 0;
    }
}