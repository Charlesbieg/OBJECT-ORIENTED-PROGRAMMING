// Main function to run the Hotel Management System
int main() {
    Hotel hotel;  // Create an instance of Hotel class
    int choice;
    while (true) {
        hotel.showMenu();  // Show menu options
        cin >> choice;
        // Switch case to handle user choices
        switch (choice) {
            case 1: hotel.showAvailableRooms(); break;
            case 2: hotel.bookRoom(); break;
            case 3: hotel.checkOut(); break;
            case 4: hotel.showRoomDetails(); break;
            case 5: return 0;  // Exit the system
            default: cout << "Invalid choice. Try again.\n"; break;
        }
    }
}