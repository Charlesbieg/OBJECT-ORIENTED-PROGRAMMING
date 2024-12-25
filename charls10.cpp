int main() {
    Hotel hotel;
    int choice;
    while (true) {
        hotel.showMenu();
        cin >> choice;
        switch (choice) {
            case 1: hotel.showAvailableRooms(); break;
            case 2: hotel.bookRoom(); break;
            case 3: hotel.checkOut(); break;
            case 4: hotel.showRoomDetails(); break;
            case 5: return 0;
            default: cout << "Invalid choice. Try again.\n";
        }
    }
}