#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay()
    {
        cout << "Making a payment" << endl;
    }
};
class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using UPI" << endl;
    }
};
class Card : public Payment
{
public:
    void pay()
    {
       cout << "Payment made using Card" 
				<< endl;
    }
};

class Cash : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using Cash" 
				<< endl;
    }
};
int main()
{
    UPI u;
    Card c;
    Cash cash;

    Payment *ptr;

    ptr = &u;
    ptr->pay();

    ptr = &c;
    ptr->pay();

    ptr = &cash;
    ptr->pay();

    return 0;
}

