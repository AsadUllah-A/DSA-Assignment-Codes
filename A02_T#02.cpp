#include<iostream>
#include<cmath>  // For sqrt function
using namespace std;

// Base class: Progression
class Progression {
    public:
        double a;  // Start value for progression
        // Default constructor initializes 'a' with 65536
        Progression() : a(65536) {}

        // Parametric constructor initializes 'a' with a given value
        Progression(double start) : a(start) {}

        // Method to return the current value of 'a'
        double getValue() const {
            return a;
        }
        // Method to set the value of 'a'
        void setValue(double value) {
            a = value;
        }
};

// Derived class: FinalProgression
class FinalProgression : public Progression {
    public:
        // Default constructor uses base class constructor
        FinalProgression() : Progression() {}

        // Parametric constructor to start with a specified value
        FinalProgression(double start) : Progression(start) {}

        // Method to compute next value as the square root of the current one
        void nextValue() {
            cout<<"Progressive sqrt series of "<< a <<" : "<<endl;
            cout <<  a<<", ";
         while(a>1.9 && a!=2) {
            a = sqrt(a);
            cout <<  a << ", ";  // Update 'a' to its square root
        }}
};

int main() {
    int c;
    FinalProgression p;  // Start with default 65536
    cout << "Initial value: " << p.getValue() << endl;

    p.nextValue();
    cout <<"\nEnter the value of which you want to find the progression"<< endl;  
    cin>>c;
    p.setValue(c);
    // The Progression of your current value
    cout << "\nProgression of : " << p.getValue() << endl;
    p.nextValue();

    return 0;
}