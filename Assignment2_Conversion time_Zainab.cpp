#include <iostream>
using namespace std;

class Time {
     int totalSeconds;
  public:
    Time(int seconds) {
        totalSeconds = seconds;
    }

    int getDays() {
        return totalSeconds / (24 * 3600);
    }

    int getHours() {
        return (totalSeconds % (24 * 3600)) / 3600;
    }

    int getMinutes() {
        return (totalSeconds % 3600) / 60;
    }

    int getSeconds() {
        return totalSeconds % 60;
    }
};

int main() {
    int totalSeconds = 456886;
    Time t(totalSeconds);

    cout << "Days: " << t.getDays() << endl;
    cout << "Hours: " << t.getHours() << endl;
    cout << "Minutes: " << t.getMinutes() << endl;
    cout << "Seconds: " << t.getSeconds() << endl;

    return 0;
}

