#pragma once
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include <windows.h>
#include "Movie.h"
#include "menu.h"

using namespace std;

class Room
{
private:
    int roomNumber;
    int movieAsign;
    int rowCount; 
    int columnCount; 
    float ticketPrice;  
    char** seatMatrix; 



public:

    Room();
    Room(int pRoomNumber, int pRowCount, int pColumnCount, float pTicketPrice);
    ~Room();

    void setRoomNumber(int pRoomNumber);
    void setRowCount(int pRowCount);
    void setColumnCount(int pColumnCount);
    void setTicketPrice(float pTicketPrice);
    void setmovieAsing(int pmovieAsing);
  
    int getRoomNumber();
    int getRowCount();
    int getColumnCount();
    float getTicketPrice();
    int getmovieAsing();


    void showSeatMatrix();
    void setSeatState(int row, int column, char state);
    void loadRoomInfo();
    void loadRooms(Room* rooms, int numberOfRooms);
    void showRooms(Room* rooms, int numberOfRooms);
    void menuRooms();
    void showSpecificRooms(int roomNumber);
    void reserveSeat(Room* rooms, int numberOfRooms);  // Método para reservar un asiento
    void sellTicket(Room* rooms, int numberOfRooms);   // Método para vender un asiento
    void reserve();
    void sell();
    int generateConsecutive();  // Método para generar números consecutivos de tiquetes
    Room* findRoom(Room* rooms, int numberOfRooms, int roomNumber);

};