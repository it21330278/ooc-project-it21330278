//it21330278
#include "Librarian.h"
#include <iostream>

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
#include <cstring>

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