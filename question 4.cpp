#include <iostream>
#include <string>

using namespace std;

class cricketplayer {
private:
    string name;
    int jerseynumber;
    double battingaverage;
    int matchesplayed;

public:
    cricketplayer(string name, int jerseynumber, double battingaverage) {
        this->name = name;
        this->jerseynumber = jerseynumber;
        this->battingaverage = battingaverage;
        this->matchesplayed = 10; 
    }

    cricketplayer& improveaverage(double runs) {
        this->battingaverage += runs;
        cout << name << " just got a massive boost! The crowd is going wild!" << endl;
        return *this; 
    }

    void playmatch(int runsscored) {
        double totalruns = (this->battingaverage * this->matchesplayed) + runsscored;
        this->matchesplayed++;
        this->battingaverage = totalruns / this->matchesplayed;
        
        if(runsscored >= 100) cout << name << " scores a Century! A national hero!" << endl;
        else if(runsscored == 0) cout << name << " out for a Golden Duck... tough day at the office." << endl;
    }

    void displayplayerstats() {
        cout << "--- Player Profile ---" << endl;
        cout << "Name: " << this->name << " (No. " << this->jerseynumber << ")" << endl;
        cout << "Average: " << this->battingaverage << endl;
        cout << "Commentary: \"This batting average is more consistent than Karachi's weather!\"" << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    cricketplayer babar("Babar Azam", 56, 50.5);
    cricketplayer rizwan("Muhammad Rizwan", 16, 45.2);
    cricketplayer saim("Saim Ayub", 72, 30.0);

    babar.playmatch(102);
    babar.displayplayerstats();

    rizwan.playmatch(0);
    rizwan.improveaverage(5.5).improveaverage(2.0);
    rizwan.displayplayerstats();

    saim.playmatch(85);
    saim.displayplayerstats();

    return 0;
}