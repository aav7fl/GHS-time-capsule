#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int element;
    int simpleArray[10] = {1,3,5,6,7,8,11,13,15,17};
    cout << "Elememt #" << setw(9) << "Value" << "\n";
    for (element = 0; element<10; element++)
    cout << setw(9) << element << setw (9)
    << simpleArray[element] <<"\n";
    system("PAUSE");
    return 0;
}
