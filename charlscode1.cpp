#include <iostream>
using namespace std;

class Hotel {
public:
    void showMenu() {
        cout << "Hotel Management System Initialized.\n";
    }
};

int main() {
    Hotel hotel;
    hotel.showMenu();
    return 0;
}