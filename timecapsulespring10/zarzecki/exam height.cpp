//Steven Zarzecki Problem 3
#include <iostream>

using namespace std;

int main()

{
    int h,f,i;
    cout << "Please enter your height in inches." << endl;
    cin >> h;
    f = h/12;
    i = (h) - f*12;
    cout << "You are " << f << " feet " << i << " inches. " << endl;
    
    
    system("PAUSE");
    return 0;
}
