#include <iostream>
using namespace std;
class customer
{
    string name;
    int acc_no;
    int balance;
    int *roi;
    public:
    //default cunstructor
    customer()
    {
        cout <<"customer is called" << endl;
        name="muskan";
        acc_no=1234;
        balance=5000;
        roi=new int[100];
    }
    // parameterised constructor
    customer(string name,int acc_no,int balance)
    {
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }
    // constructor overloading
    customer(string a,int b)
    {
        name=a;
        acc_no=345;
        balance=300;
    }
    // inline constructor
    inline customer(string a,int b,int c):name(a),acc_no(b),balance(c){

    }
    void display()
    {
        cout << name << " "<< acc_no << " " << balance << " " << endl;
    }
    //copy constructor
    customer(customer &b)
    {
        name=b.name;
        acc_no=b.acc_no;
        balance=b.balance;
    }

};
int main()
{
    customer a1;
    customer a2("mushu",1234,400);
    customer a3("mush",124);
    a1.display();
    a2.display();
    a3.display();
    customer a4(a3);
    customer a5;
    a4.display();
    a5 = a3;
    a5.display();

}