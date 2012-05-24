#include "extras.h"

#define FLOORS 9
#define ROOMS 12  //this one per floor

typedef struct 
{
	int floor, number, customer, souls, breakfast;
}room;

room LoadRoom(int floor, int number, int customer, int souls, int breakfast);  
room AddRoom(int customerID);



