#include "extras.h"


#define NAME_LENGTH 20
#define CREDIT_LENGTH 12
#define EXP_LENGTH 2


typedef struct
{
	int CreditNumber[CREDIT_LENGTH], ExpDate[EXP_LENGTH];

}CreditCard;

typedef struct 
{
	int ID;
	char* CustomerName[NAME_LENGTH];
	CreditCard card;
    
} Customer;



bool CreditCheck(int CardNumber, int ExpireDate);
Customer AddCustomer();
void DateParse(int date, int datearray[EXP_LENGTH]);
void CreditToArray(int number,int creditarray[CREDIT_LENGTH] );
void SaveCustomer(const Customer customer);

Customer GetCustomer(int customerid);



