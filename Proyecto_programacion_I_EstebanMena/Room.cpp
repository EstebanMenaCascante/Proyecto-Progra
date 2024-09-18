#include "Room.h"


Room::Room()
{
	roomNumber = 0;
	rowCount = 0;
	columnCount = 0; 
	ticketPrice = 0;
	seatMatrix = nullptr;
}

Room::Room(int pRoomNumber, int pRowCount, int pColumnCount, float pTicketPrice)
{
    roomNumber = pRoomNumber;
    rowCount = pRowCount;
    columnCount = pColumnCount;
    ticketPrice = pTicketPrice;

   
    seatMatrix = new char* [rowCount];
    for (int i = 0; i < rowCount; ++i) {
        seatMatrix[i] = new char[columnCount];
        for (int j = 0; j < columnCount; ++j) {
            seatMatrix[i][j] = 'O';
        }
    }
}

Room::~Room()
{
    
}

void Room::setRoomNumber(int pRoomNumber)
{
    roomNumber = pRoomNumber;
}

void Room::setRowCount(int pRowCount)
{
    rowCount = pRowCount;
}

void Room::setColumnCount(int pColumnCount)
{
    columnCount = pColumnCount;
}

void Room::setTicketPrice(float pTicketPrice)
{
    ticketPrice = pTicketPrice;
}

void Room::setmovieAsing(int pmovieAsing)
{
    movieAsign = pmovieAsing;
}

void Room::setday(string pday)
{
    day = pday;
}

void Room::setstartHour(string pstarHour)
{
    startHour = pstarHour;
}

void Room::setfinishHour(string pfinisHour)
{
    finishHour = pfinisHour;
}

int Room::getRoomNumber()
{
    return roomNumber;
}

int Room::getRowCount()
{
    return rowCount;
}

int Room::getColumnCount()
{
    return columnCount;
}

float Room::getTicketPrice()
{
    return ticketPrice;
}

int Room::getmovieAsing()
{
    return movieAsign;
}

string Room::getday()
{
    return day;
}

string Room::getstartHour()
{
    return startHour;
}

string Room::getfinishHour()
{
    return finishHour;
}



Room* rooms;



void Room::showSeatMatrix()
{
    cout << "Sala numero: " << roomNumber << endl;
    cout << "Disposicion de las butacas: \n" << endl;

    // Imprimir los números de columna
    cout << "  ";
    for (int j = 0; j < columnCount; ++j) {
        if (j < 9) // Si el número de columna es menor de 10, imprimir un solo espacio
            cout << " " << j + 1 << " ";
        else // Si el número de columna es mayor o igual a 10, imprimir dos espacios
            cout << j + 1 << " ";
    }
    cout << endl;

    // Imprimir las filas y el contenido de los asientos
    for (int i = 0; i < rowCount; ++i) {
        // Imprimir el número de fila
        if (i < 9)
            cout << i + 1 << " "; // Una fila de una sola cifra
        else
            cout << i + 1 << " "; // Una fila de dos cifras

        // Imprimir el contenido de los asientos
        for (int j = 0; j < columnCount; ++j) {
            char seat = seatMatrix[i][j];
            if (seat == 'O') cout << "[ ]"; // Disponible
            else if (seat == 'R') cout << "[R]"; // Reservado
            else if (seat == 'X') cout << "[X]"; // Vendido
        }
        cout << endl;
    }
}

//estado de una butaca (disponible, reservado, vendido)
void Room::setSeatState(int row, int column, char state) {
    if (row >= 0 && row < rowCount && column >= 0 && column < columnCount) {
        seatMatrix[row][column] = state;
    }
}

void Room::loadRoomInfo()
{
    cout << "Digite el numero de la sala: ";
    cin >> roomNumber;

    movieShowName();

    cout << "Digite la pelicula que quiere asiganar a esta sala: ";
    cin >> movieAsign;

    cout << "Digite la fecha: ";
    cin >> day;

    cout << "Digite la hora de inicio: ";
    cin >> startHour;

    cout << "Digite la hora de fin: ";
    cin >> finishHour;

    cout << "Digite la cantidad de filas de butacas: ";
    cin >> rowCount;

    cout << "Digite la cantidad de butacas por fila: ";
    cin >> columnCount;

    cout << "Digite el precio de los boletos: ";
    cin >> ticketPrice;

    seatMatrix = new char* [rowCount];
    for (int i = 0; i < rowCount; ++i) {
        seatMatrix[i] = new char[columnCount];
        for (int j = 0; j < columnCount; ++j) {
            seatMatrix[i][j] = 'O';
        }
    }
}

void Room::loadRooms(Room* rooms, int numberOfRooms)
{
    for (int i = 0; i < numberOfRooms; i++) {
        cout << "\nCargando informacion de la sala " << (i + 1) << endl;
        rooms[i].loadRoomInfo();
    }
}



void Room::showRooms(Room* rooms, int numberOfRooms)
{
    for (int i = 0; i < numberOfRooms; i++) {
        cout << "\nInformacion de la sala " << (i + 1) << endl;
        cout << "Numero de sala: " << rooms[i].getRoomNumber() << endl;
        movieShowInRoom(rooms[i].getmovieAsing());
        cout << "Precio del boleto: " << rooms[i].getTicketPrice() << endl;
        cout << "Dia: " << rooms[i].getday() << endl;
        cout << "Hora de inicio: " << rooms[i].getstartHour() << endl;
        cout << "Hora de fin: " << rooms[i].getfinishHour() << endl;

        rooms[i].showSeatMatrix();  // Mostrar la disposición de las butacas con colores
    }
}

void Room::showSpecificRooms(int roomNumbers)
{
   
        cout << "\nInformacion de la sala " << (roomNumbers) << endl;
        cout << "Numero de sala: " << rooms[roomNumbers-1].getRoomNumber() << endl;
        movieShowInRoom(rooms[roomNumbers-1].getmovieAsing());
        cout << "Precio del boleto: " << rooms[roomNumbers-1].getTicketPrice() << endl;
        rooms[roomNumbers-1].showSeatMatrix();  // Mostrar la disposición de las butacas con colores
    
}


int numberOfRooms;
int consecutiveNumber;

void Room::menuRooms()
{
  
    cout << "¿Cuantas salas desea registrar? ";
    cin >> numberOfRooms;

    rooms = new Room[numberOfRooms];  // Crear un arreglo dinámico de salas
    
    loadRooms(rooms, numberOfRooms);

 
    rooms[0].setSeatState(0, 0, 'X');  // Primer asiento vendido
    rooms[0].setSeatState(1, 1, 'R');  // Otro asiento reservado

    // Mostrar la información de las salas
    showRooms(rooms, numberOfRooms);

    system("pause");
}

Room* Room::findRoom(Room* rooms, int numberOfRooms, int roomNumber) {
    for (int i = 0; i < numberOfRooms; i++) {
        if (rooms[i].getRoomNumber() == roomNumber) {
            return &rooms[i];  // Devuelve un puntero a la sala encontrada
        }
    }
    return nullptr;  // Si no se encuentra la sala, devuelve nullptr
}


void Room::reserveSeat(Room* rooms, int numberOfRooms)
{
    int row, column, roomNumber;


    showRooms(rooms, numberOfRooms); 

    cout << "Ingrese el numero de sala: ";
    cin >> roomNumber;

    showSpecificRooms(roomNumber);


    // Buscar la sala en el arreglo de salas
    Room* selectedRoom = findRoom(rooms, numberOfRooms, roomNumber);


    if (selectedRoom != nullptr) {
        cout << "Selecciona la fila y columna del asiento que deseas reservar (ej. 1 3): ";
        cin >> row >> column;

        if (row >= 1 && row <= selectedRoom->rowCount && column >= 1 && column <= selectedRoom->columnCount) {
            row--; // Ajuste a índice 0
            column--; // Ajuste a índice 0

            if (selectedRoom->seatMatrix[row][column] == 'O') {
                selectedRoom->seatMatrix[row][column] = 'R';  // Marcar como reservado
                cout << "Asiento reservado exitosamente." << endl;
                cout << "El ID del ticket es: " << consecutiveNumber;
                consecutiveNumber++;
            }
            else {
                cout << "Asiento ya está reservado o vendido." << endl;
            }
        }
        else {
            cout << "Fila o columna inválida." << endl;
        }
    }
    else {
        cout << "Sala no encontrada." << endl;
    }

    showSpecificRooms(roomNumber);

    system("pause");
}

void Room::sellTicket(Room* rooms, int numberOfRooms)
{
    int row, column, roomNumber;
    int ticketNumber;

    showRooms(rooms, numberOfRooms);

    cout << "Ingrese el numero de sala: ";
    cin >> roomNumber;

    showSpecificRooms(roomNumber);

    // Buscar la sala en el arreglo de salas
    Room* selectedRoom = findRoom(rooms, numberOfRooms, roomNumber);

    if (selectedRoom != nullptr) {
        cout << "Ingrese el numero de tiquete generado para venta: ";
        cin >> ticketNumber;

            cout << "Ingrese la fila y columna del asiento que deseas vender (ej. 1 3): ";
            cin >> row >> column;

            if (row >= 1 && row <= selectedRoom->rowCount && column >= 1 && column <= selectedRoom->columnCount) {
                row--; // Ajuste a índice 0
                column--; // Ajuste a índice 0

                if (selectedRoom->seatMatrix[row][column] == 'R') {
                    selectedRoom->seatMatrix[row][column] = 'X';  // Marcar como vendido
                    cout << "Tiquete vendido exitosamente. Precio: " << selectedRoom->ticketPrice << endl;
                    
                }   

                else {
                    cout << "Asiento no está reservado o ya está vendido." << endl;
                }
            }
            else {
                cout << "Fila o columna inválida." << endl;
            }
    }
    else {
        cout << "Sala no encontrada." << endl;
    }

    showSpecificRooms(roomNumber);

    system("pause");
}

void Room::reserve()
{
    reserveSeat(rooms, numberOfRooms);
}

void Room::sell()
{

    sellTicket(rooms, numberOfRooms);

}



