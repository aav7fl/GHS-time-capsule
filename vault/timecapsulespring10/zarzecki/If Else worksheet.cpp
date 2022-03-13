
#include <iostream>

using namespace std;
int name; 
int age;
int main()
{
    
    cout << "What is your name?" << endl;
    cin >> name;
   
    cout << "What is your age?" << endl;
    cin >> age;
    if (age >= 16)
    cout << "It's scary, " << name << " you are old enough to drive!" << endl;
    else 
    cout << "You are " << 16 - age << " years young before you can drive." << endl;
                 
    system("PAUSE");
    return 0;
}
