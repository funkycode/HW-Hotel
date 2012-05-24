#include "reservation.h"



typedef struct 
{
	room rooms[FLOORS][ROOMS];
} Hotel;

void InitializeHotel();
void PrintStatus();
Hotel LoadData();
Hotel CreateHotel();
Hotel LoadHotelFromDisk();


