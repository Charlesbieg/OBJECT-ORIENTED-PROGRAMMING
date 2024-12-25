void checkOut() {
    int roomNumber;
    cout << "Enter the room number to checkout (1-5): ";
    cin >> roomNumber;
    if (cin.fail()) {
        cout << "Invalid input. Please enter a number.\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        return;
    }
    // rest of the logic
}