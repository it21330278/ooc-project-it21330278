#include <cstring>
#include <iostream>

class Feedback
{
private:
  int feedbackNo;
  char email;
  char feedbackmsg;
public:
  Feedback();
  Feedback(int fbNo, char mail, char fb);
  void displayFeedback();
  ~Feedback();
};

Feedback::Feedback(int fedNo, char mail, char fed)
{
feedbackNo = fedNo;
email = mail;
feedbackmsg = fed;}
void Feedback::displayFeedback()
{
}
Feedback::~Feedback()
{
}
