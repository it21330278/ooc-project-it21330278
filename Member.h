//it21330278
#include "GuestUser.h"
#include <iostream>
#include <cstring>


class Member : public guestUser{
private:
	int MemID ;
	char MemPassword [50] ;
	
public :
  Member();
	void RegisterUser(int MembID,char MembName[]);
	void Login(int MembID,char MembPassword[] );
  void PlaceOder ();
  void SelectPay_method();
  void DoPayment ();
  void Logout ();
	~Member();	
};
void Member::RegisterUser(int MembID,char MembName[])
{
  MemID = MembID;
  strcpy(UserName,MembName);
}
void Member::Login(int MembID,char MembPassword[] )
{
  MemID = MembID ;
  strcpy(MemPassword,MembPassword);
}
void Member::PlaceOder(){}
void Member::SelectPay_method(){}
void Member::DoPayment(){}
void Member::Logout(){}
Member::~Member(){}




