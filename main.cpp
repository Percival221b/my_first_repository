//2
/*
#include <iostream>
#include <string.h>
using namespace std;

class Person {
private:
    static const int LIMIT = 25;
    string lname; // Person’s last name
    char fname[LIMIT]; // Person’s first name
public:
    Person() {lname = ""; fname[0] = '0'; } // #1 空白
    Person(const string & ln, const char * fn = "Heyyou"); // #2  这里可以给firstname一个默认值
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};

int main() {
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    cout << endl;
    one.FormalShow();
    two.FormalShow();
    three.FormalShow();
    return 0;
}

Person::Person(const string & ln, const char * fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const {
    if (lname == ""&&fname[0] == '0') {
        cout <<"No name given"<<endl;
    }
    else {
        cout << fname << " ";
        cout << lname << endl;
    }
}
void Person::FormalShow() const {
    if (lname == ""&&fname[0] == '0') {
        cout <<"No name given"<<endl;
    }
    else {
        cout <<lname << ", ";
        cout << fname << endl;
    }
}*/


//3


#include<iostream>
using namespace std;


int main() {

    return 0;
}
