#include "customer.h"
#include "extras.h"

bool CreditCheck( int ExpireDate ){
	if(ExpireDate > 122020 || ExpireDate < 12012){
		printf("Date is wrong, try again\n");
		return false;
	}

	return true;
}

void CreditToArray(int number,int creditarray[CREDIT_LENGTH] ) {
    int i;
	for (i=CREDIT_LENGTH;i>0;i--){
	creditarray[i] = number % 10;
	number = number / 10;
    
	}

} 

void DateParse(int date, int datearray[EXP_LENGTH]) {
	datearray[0] = date / 10000;
	datearray[1] = date - (datearray[0]*10000);
	}


Customer AddCustomer(){
	Customer customer;
    bool validate = false;
	int credit , expdate;
	CreditCard card;
	char* name;
	int ID;
	printf("Enter Credit Card Number (12 numbers): \n");
	scanf ("%d",&credit);
	CreditToArray(credit, card.CreditNumber);
	
	while (validate == false){
	printf("Enter Expire Date [MMYYYY]\n");
	scanf ("%d",&expdate);
    
	validate = CreditCheck(expdate);
	}
	
	DateParse(expdate, card.ExpDate);
	customer.card = card;
	printf("Please enter the name:\n");
    scanf ("%s",&name);
    printf("Please enter the ID:\n");
    scanf ("%d",&ID);
	SaveCustomer(customer);
   	return customer;
    
}

void SaveCustomer(const Customer customer){
	FILE *f = fopen("customer.dat", "ab");
	if(f == NULL)
		return;
	fwrite(&customer, sizeof(Customer), 1, f);
	fclose(f);

}

Customer GetCustomer(int customerid){
	Customer customer = {0};
    FILE* f = fopen("customer.dat", "rb+");
	
	if(f == NULL)
	{
		return customer;
	}
	fseek(f, (customerid)*sizeof(Customer), SEEK_SET);

	fread(&customer, sizeof(Customer), 1, f);
	fclose(f);
	return customer;
}