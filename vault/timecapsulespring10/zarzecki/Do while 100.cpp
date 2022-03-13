//Steven Zarzecki Problem 2
#include <iostream>

using namespace std;

int main()
{ 
    int m;
    do{
         
          cout << "Please enter the amount of miles you drove on your trip." << endl;
          cin >> m;
          }
          while((m>=1)&&(m<=500));
          
          cout << "You must be tired. Goodbye." << endl;
          
                          
    system("PAUSE");
    return 0;
}
