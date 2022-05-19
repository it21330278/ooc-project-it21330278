#include <iostream>
#include <cstring>

class Clerk 
{
  private:
    int clerk_id;
    char clerk_name[20];
	public:
    Clerk();
    Clerk(int pclerk_id, char pclerk_name[]);
    void notify();
    ~Clerk();
};

#include <cstring>

Clerk::Clerk(int pclerk_id, char pclerk_name[])
{
	clerk_id = pclerk_id;
	strcpy(clerk_name, pclerk_name);
}
void Clerk :: notify(){}
Clerk :: ~Clerk(){}
