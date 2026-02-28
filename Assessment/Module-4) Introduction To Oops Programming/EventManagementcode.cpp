#include <iostream>
#include <string>
#include <cmath>     // For ceil()[span_2](end_span)
#include <iomanip>   // For setprecision

using namespace std;

// Class definition to demonstrate OOP concept[span_3](end_span)
class Event {
private:
    // Rate card constants[span_4](end_span)
    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

    string eventName;
    string firstName, lastName;
    int numGuests;
    int numMinutes;

public:
// Function to handle input requirements[span_5](end_span)[span_6](end_span)
    void getInputs() {
        cout << "**********Event Management System*************" << endl;
        
        cout << "Enter the name of the event: " << endl;
        getline(cin, eventName); //[span_7](end_span)

        cout << "Enter the customer's first and last name: " << endl;
        cin >> firstName >> lastName; //[span_8](end_span)

        cout << "Enter the number of guests: " << endl;
        cin >> numGuests; //[span_9](end_span)

        cout << "Enter the number of minutes in the event: " << endl;
        cin >> numMinutes; //[span_10](end_span)
    }

   // Function to calculate and display cost estimations[span_11](end_span)
    void calculateAndDisplay() {
        // i. [span_12](start_span)Calculate Number of Servers (1 server per 20 guests)[span_12](end_span)
        double numberOfServers = ceil(static_cast<double>(numGuests) / 20);

        // ii. [span_13](start_span)Calculate COST of ONE Server[span_13](end_span)
        double cost1 = (numMinutes / 60) * CostPerHour;
        double cost2 = (numMinutes % 60) * CostPerMinute;
        double costForOneServer = cost1 + cost2;

        // iii. [span_14](start_span)Calculate COST for FOOD[span_14](end_span)
        double totalFoodCost = numGuests * CostOfDinner;

        // iv. [span_15](start_span)Get Average Cost Per Person[span_15](end_span)
        double averageCost = totalFoodCost / numGuests;

        // v. GET TOTAL COST[span_16](end_span)
        double totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        // vi. [span_17](start_span)GET DEPOSIT AMOUNT (25%)[span_17](end_span)
        double depositAmount = totalCost * .25;

        // Output formatting to match the example[span_18](end_span)
        cout << "\n====================Event estimate for " << firstName << " " << lastName << "============" << endl;
        cout << fixed << setprecision(2);
        
        cout << "Number Of Server: " << (int)numberOfServers << endl;
        cout << "The Cost for Servers: " << (costForOneServer * numberOfServers) << endl;
        cout << "The Cost for Food is: " << totalFoodCost << endl;
        cout << "Average Cost Per Person: " << averageCost << endl;
        
        cout << "\nTotal cost is: " << totalCost << endl;
        cout << "Please deposit a 25% deposit to reserve the event" << endl;
        cout << "The deposit needed is: " << depositAmount << endl;
    }
};

int main() {
    // Creating object to manage the event[span_19](end_span)
    Event myEvent;
    
    myEvent.getInputs();            // Execute flow step 1 & 2
    myEvent.calculateAndDisplay();   // Execute flow step 3
    
    return 0;
}
