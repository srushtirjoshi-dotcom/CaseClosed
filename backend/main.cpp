#include <iostream>
#include <string>
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

    return 0;
}