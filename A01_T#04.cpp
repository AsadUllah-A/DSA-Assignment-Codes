#include <iostream>
using namespace std;

int searchOrderID(int orders[], int size, int targetID) 
{
    for (int i = 0; i < size; i++) 
    {
        if (orders[i] == targetID) 
        {
            return i;  
        }
    }
    return -1; 
}

int main() 
{
    cout << "Task # 4" << endl;

    int orders[1000];
    int orderCount;

    cout << "Enter the number of orders (1 to 1,000): ";
    cin >> orderCount;
    cout << "\nEnter the order IDs:" << endl;
    for (int i = 0; i < orderCount; i++) 
    {
        cout << "Order #" << i + 1 << ": ";
        cin >> orders[i];
    }

    int targetID;
    cout << "\nEnter the Order ID to search for: ";
    cin >> targetID;
    int position = searchOrderID(orders, orderCount, targetID);

    if (position != -1) 
    {
        cout << "Order ID " << targetID << " found at position " << position + 1 << "." << endl;
    } 
    else 
    {
        cout << "Order ID " << targetID << " not found in the list." << endl;
    }

    return 0;
}
