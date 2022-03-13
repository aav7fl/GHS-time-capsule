
#include <iostream>

using namespace std;

int main()
{
    int myArray[3];
    cout << "Enter a number: ";
    cin >> myArray[0];
    cout << "Enter a second number: ";
    cin >> myArray[1];
    myArray[2] = myArray[0]+myArray[1];
    cout << "The sum is: " << myArray[2];
    
    system("PAUSE");
    
}
