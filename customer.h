#include "order.h"
#include "feedback.h"
#include "bill.h"
class Customer
{
  private:
    int cust_ID;
    char name[20];
    char address[50];
    char email[30];
    char contactNo[10];
    Feedback *feed[size];
    Bill *bill[size];
    Order *order;

  public:
    Customer();
    Customer(int Cid, char cName[], char cAddress[], char cEmail[], char cContactNo[], Feedback *feedback, Bill *pbill, Order *porder);
    void setCusDetails(int id, char Name[], char Address[],char Email[], char ContactNo[]);
    void updateCusDetails();
    void diaplayCusDetails();
    ~Customer();
};