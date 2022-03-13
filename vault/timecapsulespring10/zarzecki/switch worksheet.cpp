//Steven Zarzecki
#include <iostream>

using namespace std;

int main()
{
    cout << "What is your current grade average?" << endl;
    cout << "1 - A" << endl;
    cout << "2 - B" << endl;
    cout << "3 - C" << endl;
    cout << "4 - D" << endl;
    cout << "5 - F" << endl;
    int choice;
    cin >> choice;
    switch(choice)
    {
           
           case 1:
                cout << "Your work is outstanding!" << endl;
                break;
           case 2:
                cout << "You are doing good work!" << endl;
                break;
           case 3:
                cout << "Your work is satisfactory." << endl;
                break;
           case 4:
                cout << "You need to work a little harder." << endl;
                break;
           case 5:
                cout << "Please see me for extra help!" << endl;
                break;
                }
                
    system("PAUSE");
    return EXIT_SUCCESS;
}
