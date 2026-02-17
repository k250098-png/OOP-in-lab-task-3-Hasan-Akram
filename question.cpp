#include <iostream>
#include <string>

using namespace std;

class book {
private:
    string title;
    string author;
    double price;

public:
    book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    book(const book &source) {
        title = source.title;
        author = source.author;
        price = source.price;
    }

    void show_details() const {
        cout << "Title: " << title 
             << " | Author: " << author 
             << " | Price: $" << price << endl;
    }
};

int main() {
    book b1;
    b1.show_details();

    book b2("The Great Gatsby", "F. Scott Fitzgerald", 12.99);
    b2.show_details();

    book b3("The C++ Chronicles");
    b3.show_details();

    book b4(b2);
    b4.show_details();

    return 0;
}
