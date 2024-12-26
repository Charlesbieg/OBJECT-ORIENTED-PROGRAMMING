void showRoomDetails() {
    cout << "Room Details:\n";
    for (int i = 0; i < totalRooms; ++i) {
        cout << roomNames[i] << " - " << (roomStatus[i] ? "Booked" : "Available") << endl;
    }
}