#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define SEPARATOR 30
/*
We do need here the 2 as for menu iem and "Enter" key
TODO: To find work around as if more than 1 char is entered it will overflow the size
*/
#define MENU_ITEM_LENGTH 2



void SeparetorLine();
int MenuSelection();
void MenuAction(short MenuItem);

int main (){

short MenuItem = -1;
//LoadHotel();
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
    _flushall();
	gets(item);
    SelectionItem = atoi(item);


	return SelectionItem;
}

void SeparetorLine(){
	short i;
	for(i = 0; i<SEPARATOR ;i++)
		printf("-");
	printf("\n");
}


void MenuAction(short MenuItem){
switch(MenuItem)
	{
	case 1: 
//		AddCustomer();
		break;

	case 2: 
//		GetStatus();
		break;

	case 3: 
//		CheckIn();

	case 4: 
//		CheckOut();

	case 9: 
		return;
    
	case 0:
		printf("If you didn't enter %d, than probably you used character insted integer, try again\n", MenuItem);
	default:
		printf("Bad guess, %d is not in the Menu, try again :)\n",MenuItem);
	}

}


