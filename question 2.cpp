#include <iostream>
#include <string>

using namespace std;

class weekdays {
private:
    string days[7];
    int currentday;

    void initializedays() {
        days[0] = "Sunday";
        days[1] = "Monday";
        days[2] = "Tuesday";
        days[3] = "Wednesday";
        days[4] = "Thursday";
        days[5] = "Friday";
        days[6] = "Saturday";
    }

public:
    weekdays() {
        initializedays();
        currentday = 0;
    }

    weekdays(int dayindex) {
        initializedays();
        currentday = dayindex % 7;
    }

    string getcurrentday() {
        return days[currentday];
    }

    string getnextday() {
        return days[(currentday + 1) % 7];
    }

    string getpreviousday() {
        return days[(currentday + 6) % 7];
    }

    string getnthdayfromtoday(int n) {
        return days[(currentday + n) % 7];
    }
};

int main() {
    weekdays week(1);

    cout << "Today: " << week.getcurrentday() << endl;
    cout << "Yesterday: " << week.getpreviousday() << endl;
    cout << "Tomorrow: " << week.getnextday() << endl;

    int n = 20;
    cout << n << " days from now: " << week.getnthdayfromtoday(n) << endl;

    return 0;
}