#include <cstring>
#include <iostream>
#include "Book.h"
#include "Clerk.h"
#include "Payment.h"
#include "Member.h"

using namespace std;

class Order 
{
	private:
		int order_id;
		int quantity;
		Books *boks[10];
		Clerk *clek[10];
		Member *Mem;
		Payment *payments[10];
	public:
		Order();
		Order(int porder_id, int pquantity);
		void addBooks(Books *boks1);
		void addClerk(Clerk *clek1);
		void confirm();
};
Order::Order(int porder_id, int pquantity)
{
	order_id = porder_id;
	quantity = pquantity;
}
void Order:: addBooks(Books *boks1){}
void Order:: addClerk(Clerk *clek1){}
void Order:: confirm(){}
