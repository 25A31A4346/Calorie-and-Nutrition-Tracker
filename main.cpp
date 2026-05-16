#include <iostream>
#include <string>

using namespace std;

class Food {
public:
    string foodName;
    int calories;
    int protein;
    int carbs;
    int fats;

    void addFood() {

        cin.ignore();

        cout << "\nEnter Food Name: ";
        getline(cin, foodName);

        cout << "Enter Calories: ";
        cin >> calories;

        cout << "Enter Protein (g): ";
        cin >> protein;

        cout << "Enter Carbohydrates (g): ";
        cin >> carbs;

        cout << "Enter Fats (g): ";
        cin >> fats;
    }

    void displayFood() {

        cout << "\n--------------------------------";
        cout << "\nFood Name      : " << foodName;
        cout << "\nCalories       : " << calories;
        cout << "\nProtein        : " << protein << " g";
        cout << "\nCarbohydrates  : " << carbs << " g";
        cout << "\nFats           : " << fats << " g";
        cout << "\n--------------------------------";
    }
};

int main() {

    Food foods[100];

    int count = 0;
    int choice;

    int totalCalories = 0;
    int totalProtein = 0;
    int totalCarbs = 0;
    int totalFats = 0;

    do {

        cout << "\n\n====== CALORIE AND NUTRITION TRACKER ======";
        cout << "\n1. Add Food";
        cout << "\n2. View All Foods";
        cout << "\n3. View Total Nutrition";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:

            foods[count].addFood();

            totalCalories += foods[count].calories;
            totalProtein += foods[count].protein;
            totalCarbs += foods[count].carbs;
            totalFats += foods[count].fats;

            count++;

            cout << "\nFood Added Successfully!";
            break;

        case 2:

            if(count == 0) {
                cout << "\nNo Food Records Available!";
            }

            else {

                for(int i = 0; i < count; i++) {
                    foods[i].displayFood();
                }
            }

            break;

        case 3:

            cout << "\n========== TOTAL NUTRITION ==========";

            cout << "\nTotal Calories      : "
                 << totalCalories;

            cout << "\nTotal Protein       : "
                 << totalProtein << " g";

            cout << "\nTotal Carbohydrates : "
                 << totalCarbs << " g";

            cout << "\nTotal Fats          : "
                 << totalFats << " g";

            cout << "\n=====================================";

            break;

        case 4:

            cout << "\nThank You for Using the Tracker!";
            break;

        default:

            cout << "\nInvalid Choice!";
        }

    } while(choice != 4);

    return 0;
}
