#include<iostream>
 using namespace std;
 class A
 {
    static int count; // creating static data member
    int number;
public:
    void get(int a)
    {
        number = a;
        count++;

    }
    void show()
    {

        cout << "count = " << count <<"\n";

    }
 };

 int A :: count;  //intializing count(with zero)


int main()
{
    A a,b,c;
      cout << "before reading data\n";
  a.show(); //displaying data
    b.show();//displaying data
    c.show();//displaying data

    a.get(10); //getting data
    b.get(20);//getting data
    c.get(30);//getting data

    cout << "\nafter reading data\n";
    a.show(); //displaying data
    b.show();//displaying data
    c.show();//displaying data

    return 0;
}
