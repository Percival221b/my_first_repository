#include <iostream>
using namespace std;

const int strsize = 20;
enum Choice{a,b,c,d,q};

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference; // 0=fullname, 1=title, 2=bopname
};

void menu();
void Register();

int main()
{
    int persons;
    cout << "Enter the number of Persons: ";
    cin >> persons;
    bop programmers[persons];
    int i=0;
    /*for (; i < persons; i++) {
        void Register(i);
    }*/
    Choice choice;
    cout<<"Benevolent Order Of Programmers Report"<<endl;
    cout<<"Enter Your Choice: "<<endl;
    void menu();
    int code;
    cin>>code;
    while(code!=q) {
        switch(code) {
            case a:cout<<"a";break;
            case b:cout<<"b";break;
            case c:cout<<"c";break;
            case d:cout<<"d";break;
            default: cout<<"Invalid Choice"<<endl;
        }
        cout<<"Enter Your Next Choice: "<<endl;
        cin>>code;
        void menu();
    }
    return 0;
}

void menu() {
    cout<<"a. display by name\t";
    cout<<"b. display by title\n: ";
    cout<<"c. display by bopname\t";
    cout<<"d. display by preference\n";
    cout<<"q. quit\n";
}
/*void Register() {
    cout<<"Enter Your Preference: "<<endl;
    int temp;
    while(cin>>temp) {
        switch(temp) {
            case 0: cout<<"Enter Your FullName: "<<endl; cin>>;


        }
    }
}*/