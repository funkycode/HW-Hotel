#include "reservation.h"


void LoadReservation(int Checkin, int Checkout, room RoomData,
							Customer CustomerData, bool Jacuzzi, bool BabyBed, bool ExtraFood){
                                
								Reservation NewReservation;
								NewReservation.Checkin = Checkin;
								NewReservation.Checkout = Checkout;
								NewReservation.RoomData = RoomData;
								NewReservation.CustomerData = CustomerData;
								NewReservation.Jacuzzi = Jacuzzi;
								NewReservation.BabyBed = BabyBed;
								NewReservation.ExtraFood = ExtraFood;
								SaveReservation(NewReservation);
								
}
void SaveReservation(const Reservation r)
{
	FILE *f = fopen("reservations.dat", "ab");
	if(f == NULL)
		return;
	fwrite(&r, sizeof(Reservation), 1, f);
	fclose(f);
}