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

/*
#include<iostream>
#include"golf.h"
using namespace std;
int main() {
    golf g1,g2("x",99);
    if (!g1.setgolf()) {
        cout<<"Name can't be empty"<<endl;
    }
    g2.Handicap(30);
    g1.showgolf();
    g2.showgolf();
    return 0;
}
int golf::setgolf() {
    cout<<"Enter the name:"<<endl;
    cin.getline(name,40);
    cout<<"Enter the handicap:"<<endl;
    cin>>handicap;
    if (name[0]=='0') {
        return 0;
    }
    return 1;
}
void golf::Handicap(int hc) {
    this->handicap=hc;
}
void golf::showgolf() {
    int len=strlen(name);
    cout<<"Name:"<<endl;
    for(int i=0;i<len;i++) {
        cout<<name[i];
    }
    cout<<endl;
    cout<<"handicap:"<<handicap<<endl;
}
*/


//4
//5
/*#include<iostream>
#include "stack.h"
using namespace std;


int main() {
    customer c1={"k",10};
    customer c2={"q",20};
    customer c3={"j",30};
    Stack s;
    s.push(c1);
    s.push(c2);
    s.push(c3);

    return 0;
}

Stack::Stack(){
    top = 0;
}
bool Stack::isEmpty() const{
    return top == 0;
}
bool Stack::isFull() const {
    return top == MAX;
}
bool Stack::push( Item& item) {
    if(isFull()) {
        return false;
    }
    else {
        item=items[top++];
        return true;
    }
}
bool Stack::pop(Item& item) {
    if(isEmpty()) {
        return false;
    }
    else {
        item=items[--top];
        return true;
    }
}*/

//6
/*
#include <iostream>
using namespace std;

class Move {
private:
    double x;
    double y;
public:
    Move(double a=0, double b=0);
    void showmove() const;
    Move add (const Move &m) const;
    void reset(double a=0, double b=0);
};
Move::Move(double a, double b) {
    x=a;
    y=b;
}
void Move::showmove() const {
    cout<<"x="<<x<<", y="<<y<<endl;
}
Move Move::add (const Move &m) const {
    return Move(x+m.x, y+m.y);
}
int main() {
    Move m1(1,1);
    Move m2(2,2);
    m1.showmove();
    m1.add(m2).showmove();
    return 0;
}*/


//7
/*
#include <iostream>
#include <string.h>
using namespace std;
class plorg {
    private:
    char m_name[20];
    int m_CI;
    public:
    plorg(char name[]="Plorga",int CI=50);
    void setCI(int CI);
    void showplorg();
};

int main() {
    plorg plorg1;
    plorg1.showplorg();
    plorg1.setCI(100);
    plorg1.showplorg();
    plorg plorg2("asdc",89);
    plorg2.showplorg();
    return 0;
}

plorg::plorg(char name[],int CI) {
    strncpy(m_name,name,19);//使用strncpy而不是strcpy
    m_name[19]='\0';
    m_CI = CI;
}
void plorg::setCI(int CI) {
    m_CI = CI;
}
void plorg::showplorg() {
    int len=strlen(m_name);
    for (int i = 0; i < len; i++) {
        cout << m_name[i];
    }
    cout << endl;
    cout<<m_CI<<endl;

}*/
