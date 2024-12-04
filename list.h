//
// Created by perci on 24-12-4.
//
typedef unsigned long Item;
#ifndef LIST_H
#define LIST_H
class List {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    List();
    void append(Item value);
    void is_full();
    void is_empty();
    void visit(void (*pf) (Item &));
};
#endif //LIST_H
