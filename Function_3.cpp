#include <iostream>
using namespace std;

void input(int& hours24, int& minutes);
void output(int hours, int minutes);

int main()
{
    int timeHours, timeMinutes, waitHours, waitMinutes,finishHours, finishMinutes;
    
    cout << "Compute completion time from current time and waiting period\n";
    
    char ans = 'y'; 
    while ('y' == ans || 'Y' == ans)
    {
        cout << "Current time:\n";
        input(timeHours, timeMinutes);
        
        cout << "Waiting time:\n";
        input(waitHours, waitMinutes);
        
        finishHours = timeHours + waitHours;
        finishMinutes = timeMinutes + waitMinutes;
        
        finishHours += finishMinutes / 60;
        if(finishHours >= 24)
        {
            finishHours %= 24;
            cout << "Completion time is in the day following the start time\n";
        }
        
        finishMinutes%= 60;
        
        cout << "Completion ";
        output(finishHours, finishMinutes);
        
        cout << "\n\nEnter Y or y to continue, any other halts\n\n";
        cin >> ans;
    }
    
    return 0;
}

void input(int& hours24, int& minutes)
{
    char colon;
    cout << "Enter 24 hour time in the format HH:MM" << endl;
    cin >> hours24;
    cin >> colon;
    cin >> minutes;
}

void output(int hours, int minutes)
{
    cout << "Time in 24 hour format:" << endl;
    cout << hours << ":" << minutes;
}
