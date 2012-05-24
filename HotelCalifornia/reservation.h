#include "room.h"
#include "customer.h"
typedef struct 
{
	int  Checkin, Checkout; 
	room RoomData;
	Customer CustomerData;
	//Using CheckIn and Checkout as date (DDMMYY) to compare to current date
	bool Jacuzzi, BabyBed, ExtraFood;
} Reservation;


void LoadReservation(int Checkin, int Checkout, room RoomData, Customer CustomerData, bool Jacuzzi, bool BabyBed, bool ExtraFood);
void SaveReservation(const Reservation r);
