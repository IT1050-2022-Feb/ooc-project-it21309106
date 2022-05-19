#include "feedback.h"
#include<iostream>
#include<cstring>
using namespace std;

Feedback::Feedback()
{
  int feedbackID=0;
  strcpy(email,"");
  strcpy(msg,"");
}
Feedback::Feedback(int feedID, char feedEmail[], char feedMsg[],Customer *pcus)
{
  int feedbackID=feedID;
  strcpy(email,feedEmail);
  strcpy(msg,feedMsg);
  cus =pcus;
}
void Feedback:: setFeedbackDetails(int FID, char FEmail[], char Fmsg[])
{
  int feedbackID=FID;
  strcpy(email,FEmail);
  strcpy(msg,Fmsg);
}
void Feedback:: displayFeedbackDetail()
{
  cout << "Feedback Id = " << feedbackID << endl;
  cout << "Email address = " << email << endl;
  cout << "Feedback  = " << msg << endl;
}
Feedback::~Feedback()
{
  cout<< "Deleted"<< endl;
}