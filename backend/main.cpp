#include <iostream>
#include <string>
#include "Suspect.h"
using namespace std;
class Case
{
private:
    int caseId;
    string caseTitle;
    string victimName;

public:
    Case(int id, string title, string victim)
{
    caseId = id;
    caseTitle = title;
    victimName = victim;
}
    void displayCase()
    {
        cout << "CASE CLOSED" << endl;
        cout << "Case ID: " << caseId << endl;
        cout << "Case Title: " << caseTitle << endl;
        cout << "Victim: " << victimName << endl;
    }
};
int main()
{
    Case case1(1, "The Blackwood Manor Murder", "Dr. Adrian Blackwood");

    case1.displayCase();
    
    Suspect eleanor(
    "Eleanor Blackwood",
    "Wife",
    "Claims she was sleeping in her bedroom",
    false
);

Suspect marcus(
    "Marcus Blackwood",
    "Younger Brother",
    "Claims he was reading in the library",
    false
);

eleanor.displaySuspect();
int choice;

do
{
    cout << "\n===== INVESTIGATION MENU =====" << endl;
    cout << "1. Interrogate Eleanor" << endl;
    cout << "2. Interrogate Marcus" << endl;
    cout << "3. Exit Investigation" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            eleanor.interrogate();
            break;

        case 2:
            marcus.interrogate();
            break;

        case 3:
            cout << "Investigation paused." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

} while (choice != 3);

    return 0;
}