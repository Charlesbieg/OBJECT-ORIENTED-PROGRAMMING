void bookRoom() {
    int roomNumber;
    cout << "Enter the room number to book (1-5): ";
    cin >> roomNumber;
    if (roomNumber < 1 || roomNumber > 5) {
        cout << "Invalid room number.\n";
    } else if (roomStatus[roomNumber - 1]) {
        cout << "Room " << roomNumber << " is already booked.\n";
    } else {
        roomStatus[roomNumber - 1] = true;
        cout << "Room " << roomNumber << " has been booked.\n";
    }
}