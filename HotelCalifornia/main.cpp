#include "hotel.h"
#include "extras.h"
#define SEPARATOR 30
/*
We do need here the 2 as for menu iem and "Enter" key
TODO: To find work around as if more than 1 char is entered it will overflow the size
*/
#define MENU_ITEM_LENGTH 2



void SeparetorLine();
int MenuSelection();
void MenuAction(int MenuItem);
void NewCustomer();
void CheckinCustomer(Customer customer);
int main (){

int MenuItem = -1;

Hotel h = LoadData();

while (MenuItem != 9)
{
MenuItem = MenuSelection();
MenuAction(MenuItem);
}
}




int MenuSelection(){

	int SelectionItem = -1;
    char item[MENU_ITEM_LENGTH];
	printf("\n\n");
	SeparetorLine();
	printf("*****HOTEL CALIFORNIA*****\n");
	SeparetorLine();
	printf("Menu:\n");
	printf(" 1. Add New Customer\n");
	printf(" 2. Print The Status\n");
	printf(" 3. Checkin\n");
	printf(" 4. Checkout\n");
	printf(" 9. Quit\n\n");

    scanf ("%d",&SelectionItem);
    

	return SelectionItem;
}

void SeparetorLine(){
	short i;
	for(i = 0; i<SEPARATOR ;i++)
		printf("-");
	printf("\n");
}


void MenuAction(int MenuItem){
	int customerid=0;
	Customer customer;
    switch(MenuItem)
	{
	case 1: 
		NewCustomer();
		break;

	case 2: 
    	PrintStatus();
		break;

	case 3: 
	     printf("Enter CustomerID\n");
		 scanf("%d",customerid);
		 customer = GetCustomer(customerid);
	     CheckinCustomer(customer);
		 break;

	case 4: 
   //      printf("Enter CustomerID\n");
		 //scanf("%d",customerid);
	  //    CheckOut();
		break;
	case 9: 
		return;
    
	default:
		printf("Bad guess, %d is not in the Menu, try again :)\n",MenuItem);
		break;
	}

}

void NewCustomer(){


Customer customer = AddCustomer();

//Getting info about new customer


//adding data to the room and checking him in the room
if(BoolQuestion("Do you want to checkin?"))
 CheckinCustomer(customer);


}

void CheckinCustomer (Customer customer){
room NewRoom = AddRoom(customer.ID);
int Checkin, Checkout;
bool Jacuzzi,  BabyBed,  ExtraFood;


printf("Please enter Checkin date:\n");
scanf("%d", &Checkin);
printf("Please enter Checkout date:\n");
scanf("%d", &Checkout);

Jacuzzi = BoolQuestion("Do you want Jacuzzi?");
BabyBed =  BoolQuestion("Do you need a bed for a baby?");
if (NewRoom.breakfast) // We want to ask about extra food only when they ordered breakfast
   ExtraFood =  BoolQuestion("Do you want any extra food?");


//Making Reservation
LoadReservation(Checkin, Checkout, NewRoom, customer, Jacuzzi, BabyBed, ExtraFood);
}
