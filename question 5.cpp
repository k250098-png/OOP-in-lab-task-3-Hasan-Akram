#include <iostream>
#include <string>

using namespace std;

class footballplayer {
private:
    string playername;
    string position;
    int goalcount;

public:
    footballplayer() {
        playername = "Unknown Player";
        position = "Benchwarmer";
        goalcount = 0;
    }

    footballplayer(string name, string pos, int goals) {
        playername = name;
        position = pos;
        goalcount = goals;
    }

    footballplayer(const footballplayer &other) {
        playername = other.playername + " (Clone)";
        position = other.position;
        goalcount = other.goalcount;
    }

    footballplayer(string name, string pos = "Midfielder", int goals = 10) {
        playername = name;
        position = pos;
        goalcount = goals;
    }

    void addgoals(int newgoals) {
        goalcount += newgoals;
        cout << playername << " scored " << newgoals << " goals!" << endl;
    }

    void displayprofile() {
        cout << "--- Player Profile ---" << endl;
        cout << "Name: " << playername << endl;
        cout << "Position: " << position << endl;
        cout << "Goals: " << goalcount << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    footballplayer rookie;
    rookie.displayprofile();

    footballplayer messi("Lionel Messi", "Forward", 800);
    messi.displayprofile();

    footballplayer messiclone = messi;
    messiclone.displayprofile();

    footballplayer kdb("Kevin De Bruyne");
    kdb.displayprofile();

    kdb.addgoals(5);
    kdb.displayprofile();

    return 0;
}