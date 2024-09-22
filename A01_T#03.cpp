#include <iostream>
using namespace std;

int main() 
{
    cout << "Task # 3" << endl;
    int seats[10][15] = {0}; 
    int row, seat;
    char choice;
    
    auto displaySeats = [&]() 
    {
        cout << "\nSeating Arrangement (0 = Available, 1 = Occupied):" << endl;
        for (int i = 0; i < 10; i++) 
        {
            cout << "Row #" << i + 1 << ": ";
            for (int j = 0; j < 15; j++) 
            {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }
    };    
    displaySeats();

    do {
        cout << "\nEnter the row (1-10) and seat number (1-15) to book: "<<endl;
        cin >> row >> seat;
        row -= 1;
        seat -= 1;
        if (seats[row][seat] == 1) 
        {
            cout << "Sorry, this seat is already occupied. Please choose another seat." << endl;
        } 
        else 
        {
            seats[row][seat] = 1;
            cout << "Seat successfully booked!" << endl;
        }
        displaySeats();
        cout << "\nDo you want to book another seat? (y/Y or n/N): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the Cinema Seating Arrangement System!" << endl;
    return 0;
}
