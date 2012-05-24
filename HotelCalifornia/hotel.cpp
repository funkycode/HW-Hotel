#include "hotel.h"

void InitializeHotel(){
//create empty hotel


}

Hotel LoadData(){
// Load files
    
    FILE* f = fopen("HotelCalifornia.dat","rb");
	Hotel h = {0};
	if(f == NULL)
	{
		h = CreateHotel();
		return h;
	}
	else
	{
		fread(&h, sizeof(Hotel), 1, f);
		fclose(f);
	}
	return h;


}


Hotel CreateHotel()
{
	FILE* f = fopen("HotelCalifornia.dat","wb");
	Hotel h = {0};
	fwrite(&h, sizeof(Hotel), 1, f);
	fclose(f);

	return h;
}

void PrintStatus()
{
	Hotel h = LoadHotelFromDisk();
	Customer c;
	unsigned short s;
	int floor, room;
	for(floor = 0;floor < FLOORS; floor++)
	{
		printf("Floor %d : \n", floor + 1);
		for(room = 0;room < ROOMS; room++)
		{
			if(h.rooms[floor][room].customer == 0)
			{
				printf(" %d-free", room + 1);
			}
			else
			{
				printf(" %d-%d,%d", room + 1, h.rooms[floor][room].souls, h.rooms[floor][room].customer);
			}
		}
		printf("\n");
	}
}
Hotel LoadHotelFromDisk()
{
	Hotel h = {0};
	FILE* f = fopen("HotelCalifornia.dat","rb");
	fread(&h, sizeof(Hotel), 1, f);

	return h;
}