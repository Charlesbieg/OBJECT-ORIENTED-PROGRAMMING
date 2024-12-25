class Hotel {
private:
    const int totalRooms = 5; // Total number of rooms
    bool roomStatus[5];
    string roomNames[5];
public:
    Hotel() {
        for (int i = 0; i < totalRooms; ++i) {
            roomNames[i] = "Room " + to_string(i + 1);
            roomStatus[i] = false;
        }
    }
};