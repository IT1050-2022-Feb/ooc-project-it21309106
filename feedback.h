#include "customer.h"
class Feedback
{
  private:
    int feedbackID;
    char email[20];
    char msg[50];
    Customer *cus;

  public:
    Feedback();
    Feedback(int feedID, char feedEmail[], char feedMsg[] Customer *pcus);
    void setFeedbackDetails(int FID, char FEmail[], char Fmsg[]);
    void displayFeedbackDetail();
~Feedback();
};