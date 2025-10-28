#include <iostream>
#include <string>
using namespace std;

class WeekSchedule {
private:
    string days[7];
    string activities[7];

public:
    WeekSchedule() {
        days[0] = "Sunday";
        days[1] = "Monday";
        days[2] = "Tuesday";
        days[3] = "Wednesday";
        days[4] = "Thursday";
        days[5] = "Friday";
        days[6] = "Saturday";
    }

   
    void inputActivities() {
        cout << "Enter your activity for each day:\n";
        for (int i = 0; i < 7; i++) {
            cout << days[i] << ": ";
            getline(cin, activities[i]);
        }
    }

       
    void displaySchedule() {
        cout << "\n--- Weekly Schedule ---\n";
        for (int i = 0; i < 7; i++) {
            cout << days[i] << " → " << activities[i] << endl;
        }
    }
};

int main() {
    WeekSchedule myWeek;  
    myWeek.inputActivities();  
    myWeek.displaySchedule();    

    return 0;
}