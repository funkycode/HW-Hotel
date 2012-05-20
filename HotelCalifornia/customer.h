#include <stdio.h>
#include <stdlib.h>

#define NAME_LENGTH 20

typedef struct 
{
	int ID, CreditCard, ValidationNumber;
	char* CustomerName[NAME_LENGTH];
    
} Customer;

bool CreditCheck(int CardNumber, int ExpireDate);

