//Steven Zarzecki
#include <iostream>

using namespace std;
void menu();
int inches;
int height(int);
int main()
{ 
    menu();
    height(inches);
    system ("pause");
    return 0;
}
void menu()
{
     cout << "Welcome to Height Conversion!!!\n\n";
     cout << "In this game we covert your height in feet to inches!!!\n\n";
}
int height (int)
{
    int height;
    cout << "What is you height in feet?\n\n";
    cin >> height;
    inches = height *12;
    cout << "You are " << inches << " inches in height\n\n";
    return inches;
}
     

    

    
    
