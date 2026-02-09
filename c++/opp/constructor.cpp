#include<bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int account_name;
    int balance;
    
    public:
    // Default Constructor
    customer()
    {
        int n;
        name = "rohit";
        account_name = 123;
        balance = 1000 ;
        //cout<<"hello constructor\n";
    }
    // Parameterized Constructor
    customer(string a, int b,int c)
    {
        name=a;
        account_name= b;
        balance = c;
    }
    // constructor overloading
    customer(string s,int num)
    {
        name=s;
        account_name=num;
    }
    // IN line constructor
    inline customer(string a, int b, int c): name(a),account_name(b),balance(c){

    }
    void display()
    {
        cout<<name<<" "<<account_name<<" "<<balance<<endl;
    }

};
int main()
{
    customer a1;
    customer a2("mohit",124,1000);
    customer a3("ram",125);
    a1.display();
    a2.display();
    a3.display();
}