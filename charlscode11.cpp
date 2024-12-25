void bookRoom() {
    int roomNumber;
    cout << "Enter the room number to book (1-5): ";
    cin >> roomNumber;
    if (cin.fail()) {
        cout << "Invalid input. Please enter a number.\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        return;
    }
    // rest of the logic
}