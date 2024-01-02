#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Room {
protected:
    int roomNumber;
    string type;
    double nightlyRate;
public:
    Room(int roomNo, const string& t, double rate)
     : roomNumber(roomNo), type(t), nightlyRate(rate) {}
        virtual double getRate() const { return nightlyRate; }
        virtual string getType() const { return type; }
        int getRoomNumber() const { return roomNumber; }
};
class StandardRoom : public Room {
public:
    StandardRoom(int roomNo, double rate) : Room(roomNo, "Standard", rate) {}
};
class DeluxeRoom : public Room {
public:
    DeluxeRoom(int roomNo, double rate) : Room(roomNo, "Deluxe", rate) {}
};
class ReservationSystem {
private:
    vector<Room*> availableRooms;
    vector<Room*> bookedRooms;
public:
    void addRoom(Room* room) {
        availableRooms.push_back(room);
    }
    bool bookRoom(int roomNumber) {
        for (size_t i = 0; i < availableRooms.size(); i++) {
            if (availableRooms[i]->getRoomNumber() == roomNumber) {
                bookedRooms.push_back(availableRooms[i]);
                availableRooms.erase(availableRooms.begin() + i);
                return true;  
            }
        }
        return false; 
    }
    double calculateReservationCost(int roomNumber, int nights) {
        for (const auto& room : bookedRooms) {
            if (room->getRoomNumber() == roomNumber) {
                return room->getRate() * nights;
            }
        }
        return -1;  
    }
    void listReservations() {
        cout << "List of booked rooms:" << endl;
        for (const auto& room : bookedRooms) {
            cout << "Room Number: " << room->getRoomNumber()
                 << ", Type: " << room->getType()
                 << ", Rate: $" << room->getRate() << "/night" << endl;
        }
    }
};

int main() {
    ReservationSystem hotel;
    hotel.addRoom(new StandardRoom(51, 2000));
    hotel.addRoom(new DeluxeRoom(56, 1800));

    hotel.bookRoom(56);

    hotel.listReservations();

    double cost = hotel.calculateReservationCost(56, 5);
    if (cost >= 0) {
        cout << "Your cost for staying 5 nights in the hotel room is : Rs." << cost << endl;
    } else {
        cout << "Room 56 is not booked." << endl;
    }
    return 0;
}
