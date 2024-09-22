#include <iostream>
using namespace std;
int main()
{
    cout << "Task # 01" << endl;
    int books[100]={0};
    int new_book_index, copies;
    cout << "At which Index you want to add new Book (0-9) : ";
    cin >> new_book_index;
    cout << "How many copies of books you want : ";
    cin >> copies;
    books[new_book_index] = copies;
    cout << "\nAdded a new book at index " << new_book_index << " with " << copies << " copies." << endl;
    cout << "\nCurrent Number of Copies for Books: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Book #" << i + 1 << " Index [" << i << "] Copies: " << books[i] << endl;
    }

    int borrowIndex;
    char choice;
    n_borrow:
    cout << "\nEnter the book index to borrow (0-99): ";
    cin >> borrowIndex;
    if (books[borrowIndex] > 0)
    {
        books[borrowIndex]--;
        cout << "One copy borrowed from Book #" << borrowIndex + 1 << ". Remaining copies: " << books[borrowIndex] << endl;
        cout<<"\nYou want another copy to borrow (y/Y or n/N): ";
        cin>>choice;
        if(choice=='y' || choice=='Y')
        {
            goto n_borrow;
        }
        int returnIndex;
        cout << "\nEnter the book index to return (0-99): ";
        cin >> returnIndex;
        books[returnIndex]++;
        cout << "One copy returned to Book #" << returnIndex + 1 << ". Total copies: " << books[returnIndex] << endl;

        cout << "\nUpdated Number of Copies for Books: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "Book #" << i + 1 << " Copies: " << books[i] << endl;
        }
    }
    else
    {
        cout << "No copies available for Book #" << borrowIndex + 1 << endl;
    }
    return 0;
}