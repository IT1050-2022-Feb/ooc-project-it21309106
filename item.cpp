#include<iostream>
#include<cstring>
#include "item.h"
using namespace std;

Item :: Item()
{
  itemID=0;
  strcpy(IName,"");
  strcpy(IBrand,"");
  Price=0;
}

Item :: Item(int iID, char iName[], char iBrand[], double price)
{
  itemID=iID;
  strcpy(IName,iName);
  strcpy(IBrand,iBrand);
  Price=price;
}

void Item :: setItemDetails(int ID, char Name[], char Brand[], double Iprice)
{
  itemID=ID;
  strcpy(IName,Name);
  strcpy(IBrand,Brand);
  Price=Iprice;
}

double Item :: getPrice()
{
  return Price;
}

void Item:: displayItemDetails()
{
  cout << endl;
  cout << "Item ID = " << itemID << endl;
  cout << "Item Name = " << IName << endl;
  cout << "Item Brand = "<< IBrand << endl;
  cout << "Item price = " << Price << endl;
 
}

Item :: ~Item()
{
  cout << endl;
  cout << "Deleted" << endl;
}