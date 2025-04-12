#include <iostream>
#include <string>
#include <vector>                       // Needed for using std::vector
using namespace std;                    // Prevents us from having to use "std::"
    
    // Defining a simple Car class
    class Car {
        public:
                                        // Public attributes for now; we will discuss "private" and "protected" next week
            string VIN;                 // Vehicle Identification Number (should be unique for each car)
            string make;                // Car brand (e.g., Toyota, Ford)
            string model;               // Specific model (e.g., Corolla, Mustang)
            int year;                   // Manufacturing year
            double mileage;             // Current mileage of the car
            vector<string> owners;      // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string>
        ownerList) {
            VIN = vin;
            make = mk;
            model = mdl;
            year = yr;
            mileage = miles;
            owners = ownerList;
        }

    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;

    // Displaying owners
    cout << "Owners: ";
        for (const string & owner : owners) {
            cout << owner << " ";
        }
    cout << endl;
    }
    };

    int main() {
        vector<string> owners = {"Vi,", "Jinx,", "Katelyn,", "Vander,"};               //This list displays the people who have owned the vehicle.
            
        Car myCar("VF9SV2C27GM795001", "Bugatti", "Veyron", 2016, 77345.6, owners);    //Uses the object car for the constructor above.
        myCar.displayInfo();                                                           //Recalls information that needs to be displayed from the method above.
        
return 0;
}


// What attributes--if any--should be private, and why?
// The information that should not be altered would be private, such as the VIN number, make, model, and year.  Those values will always be true, but the mileage and the list of owners may change.