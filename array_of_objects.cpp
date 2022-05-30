#include <iostream>
using namespace std;
class det
{
    char name[20];
    int age;
    int roll_no;

public:
    void get_data()
    {
        cout << "enter name";
        cin >> name;
        cout << "enter age";
        cin >> age;
        cout << "enter roll_no";
        cin >> roll_no;
    }
    void put_data()
    {
        cout << "name is" << name << endl;
        cout << "age is" << age << endl;
        cout << "roll_no" << roll_no << endl;
    }
};

int main()
{
    det obj[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        obj[i].get_data();
    }
    for (i = 0; i < 2; i++)
    {
        obj[i].put_data();
    }
    return 0;
}