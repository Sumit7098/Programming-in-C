/*
CH-230-A
a13-p4.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B:  public A
{
public:
  B()  { setX(10); }
};

class C:  public A
{
public:
  C()  { setX(20); }

};

// the problem is b and c have print functions
//so it's ambigous which one to use
// by only inherting c it will set x to 20 as I assume was wanted
// and the code will work fine
class D: public C {
};

int main()
{
    D d;
    d.print();
    return 0;
}
