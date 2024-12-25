void showRoomDetails() {
    cout << "Room Details:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Room " << i + 1 << " - " << (roomStatus[i] ? "Booked" : "Available") << endl;
    }
}