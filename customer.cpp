#include<iostream>
#include<cstring>
#include "customer.h"
#include "feedback.h"
#include "bill.h"
using namespace std;

Customer::Customer()
{
  cust_ID=0;
  strcpy(name,"");
  strcpy(address,"");
  strcpy(email,"");
  strcpy(contactNo,"");
}

Customer::Customer(int Cid, char cName[], char cAddress[], char cEmail[], char cContactNo[], Feedback *feedback, Bill *pbill, Order *porder)
{
  cust_ID=Cid;
  strcpy(name,cName);
  strcpy(address,cAddress);
  strcpy(email,cEmail);
  strcpy(contactNo,cContactNo);
  feed=feedback;
  bill=pbill;
  order=porder;
}

void Customer:: setCusDetails(int id, char Name[], char Address[],char Email[], char ContactNo[])
{
  cust_ID=id;
  strcpy(name,Name);
  strcpy(address,Address);
  strcpy(email,Email);
  strcpy(contactNo,ContactNo);
}

void Customer:: updateCusDetails()
{
  cout << "Input customer ID: ";
  cin >>cust_ID;
  cout << "Input customer name: ";
  cin >> name;
  cout << "Input customer address: ";
  cin >> address;
  cout << "Input E-mail address: ";
  cin >> email;
  cout << "Input customer contact number: ";
  cin >> contactNo;
 
}

void Customer:: diaplayCusDetails()
{
  cout << "Customer ID = "<< cust_ID << endl;
  cout << "Customer name = "<< name << endl;
  cout << "Customer address = "<< address << endl;
  cout << "Customer e-mail = "<< email << endl;
  cout << "Customer contact number = "<< contactNo << endl;
}

Customer::~Customer()
  {
    cout << "Deleted" << endl;
  }
