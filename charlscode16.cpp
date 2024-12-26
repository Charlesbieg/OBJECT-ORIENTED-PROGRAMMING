switch (choice) {
    case 1: hotel.showAvailableRooms(); break;
    case 2: hotel.bookRoom(); break;
    case 3: hotel.checkOut(); break;
    case 4: hotel.showRoomDetails(); break;
    case 5: return 0;
    default: cout << "Invalid choice. Please try again.\n"; break;
}