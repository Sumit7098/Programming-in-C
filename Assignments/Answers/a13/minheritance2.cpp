/*
CH-230-A
a13-p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
        int x;
    public:
        A(int i) { x = i; }
        void print() { cout << x; }
};

class B: virtual public A
{
    public:
        B():A(10) {  }
};

class C:  virtual public A
{
    public:
        C():A(10) {  }
};

class D: public B, public C
{
    public:
        // without initiazling constructor A in D
        // we can't use d with A functions
        // because it's vague which class (B,C) should have the upper hand
        // because the constructor of A takes an input
        // in this case the constructor should be set in D
        // with the input wanted
        D():A(10) { }
};

int main()
{
    D d;
    d.print();
    return 0;
}
