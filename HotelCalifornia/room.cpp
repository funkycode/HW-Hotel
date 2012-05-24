#include "room.h"


room LoadRoom(int floor, int  number, int customer, int souls, int breakfast){
	room NewRoom;
	NewRoom.floor = floor;
	NewRoom.number = number;
	NewRoom.customer = customer;
	NewRoom.souls = souls;
	NewRoom.breakfast = breakfast;
	return NewRoom;
}

room AddRoom(int customerID){
   room NewRoom;
   int floor, number, souls, breakfast;

   printf("What floor do you want?\n");
   scanf("%d", &floor);
   //check if there are free rooms on that floor
   
   //Get array of free rooms for this floor and print options

   printf("What Number do you want?\n");
   scanf("%d", &number);
   printf("How many people?\n");
   scanf("%d", &souls);

   breakfast = BoolQuestion("Do you want Breakfast?");

   NewRoom = LoadRoom(floor, number, customerID, souls, breakfast);
   return NewRoom;



}