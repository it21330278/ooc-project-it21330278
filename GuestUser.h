#include <iostream>
#include <cstring>

class guestUser{
protected:
	int UserID ;
	char UserName [50] ;
	int USERContact_No ;
	
public :
	guestUser();
	guestUser(int pUserID,char pUserName[],int pUSERContact_No);
	void SearchBook ();
	void RegisterUser ();
  virtual void displayDetails();
	~guestUser();	
};


guestUser::guestUser(){}
guestUser::guestUser(int pUserID,char pUserName[],int pUSERContact_No)
{
	UserID = pUserID;
  strcpy(UserName,pUserName);
  USERContact_No = pUSERContact_No;
}
void guestUser::SearchBook(){}
void guestUser::RegisterUser(){}
void guestUser::displayDetails(){}
guestUser     :: ~guestUser(){}