#include <iostream>
#include <string>

using namespace std;

class smartdevice {
private:
    string devicename;
    string devicetype;
    bool ison;

public:
    smartdevice(string name, string type, bool status) {
        devicename = name;
        devicetype = type;
        ison = status;
        cout << "[System] " << devicename << " (" << devicetype << ") is now online." << endl;
    }

    ~smartdevice() {
        cout << "[Shutdown] " << devicename << ": \"Goodbye, cruel world... My circuits grow cold...\" *Dramatic static*" << endl;
    }

    void toggle() {
        ison = !ison;
        cout << devicename << " is now " << (ison ? "ON" : "OFF") << "." << endl;
    }

    void getstatus() {
        cout << "Device: " << devicename << " | Type: " << devicetype << " | Status: " << (ison ? "Active" : "Idle") << endl;
    }
};

int main() {
    smartdevice* light = new smartdevice("Glow-Ray", "Smart Light", true);
    smartdevice* vacuum = new smartdevice("Dust-Eater 3000", "Robo-Vacuum", false);
    smartdevice* coffee = new smartdevice("Caffeine-Overlord", "Coffee Maker", true);

    cout << "--- Testing Devices ---" << endl;
    light->getstatus();
    vacuum->toggle();
    
    cout << "--- Triggering Dramatic Exits ---" << endl;
    delete light;
    delete vacuum;
    delete coffee;

    return 0;
}