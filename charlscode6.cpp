void checkOut() {
    int roomNumber;
    cout << "Enter the room number to checkout (1-5): ";
    cin >> roomNumber;
    if (roomNumber < 1 || roomNumber > 5) {
        cout << "Invalid room number.\n";
    } else if (!roomStatus[roomNumber - 1]) {
        cout << "Room " << roomNumber << " is not booked.\n";
    } else {
        roomStatus[roomNumber - 1] = false;
        cout << "Room " << roomNumber << " has been checked out.\n";
    }
}