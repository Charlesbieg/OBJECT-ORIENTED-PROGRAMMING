class Hotel {
private:
    bool roomStatus[5]; // Track room availability

public:
    Hotel() {
        for (int i = 0; i < 5; ++i) {
            roomStatus[i] = false; // All rooms are available initially
        }
    }

    void showAvailableRooms() {
        cout << "Available Rooms:\n";
        for (int i = 0; i < 5; ++i) {
            if (!roomStatus[i]) {
                cout << "Room " << i + 1 << endl;
            }
        }
    }
};