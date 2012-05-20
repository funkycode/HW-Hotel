#include "room.h"

#define FLOORS 9
#define ROOMS 12  //this one per floor

typedef struct 
{
	Room room[FLOORS][ROOMS];
} Hotel;

void InitializeHotel();
void PrintStatus();
void LoadData();


