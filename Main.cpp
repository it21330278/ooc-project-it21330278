//it21330278
#include <iostream>
#include "Book.h"
#include "Clerk.h"
#include "Feedback.h"
#include "GuestUser.h"
#include "Librarian.h"
#include "Member.h"
#include "Order.h"
#include "Payment.h"
#include "Reports.h"

using namespace std;
int main ()
{
  guestUser * GU = new guestUser();
  Member * Mem = new Member(); 
  librarian * Li = new librarian(); 
  Books * book = new Books();
  Clerk * clerk = new Clerk();
  Feedback * FB = new Feedback();
  Order * order = new Order();
  Payment * Pay = new Payment();
  Reports * reports = new Reports();


  GU-> SearchBook ();
	GU-> RegisterUser ();
  GU-> displayDetails();

  Mem -> PlaceOder ();
  Mem -> SelectPay_method();
  Mem -> DoPayment ();
  Mem -> Logout ();

  Li -> login();
	Li -> addBook();
	Li -> removeBook();
	Li -> restockBook();
	Li -> analysesOrder_id();
	Li -> assignClerk();
	Li -> logout();

  book -> addbooks();
  book -> removebooks();
  book -> restock();

  clerk -> notify();

  FB -> displayFeedback();

	order -> confirm();

  Pay -> checkPayment();
  Pay -> confirmPayment();
  Pay -> loadPaymentinfo();

  reports -> genarateFinancialReport();
  reports -> displayFinancialReport();
}



