//
// Created by perci on 24-12-2.
//

#ifndef STACK_H
#define STACK_H
struct customer {
    char fullname[35];
    int payment;
};
typedef customer Item;
class Stack {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push( Item& item);
    bool pop(Item& item);
};
#endif //STACK_H
