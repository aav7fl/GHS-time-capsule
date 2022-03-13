#include <iostream>

using namespace std;

int main()
{
      int a, c;
    cout << "Civilians Saved" << endl;
    cin >> c;
    cout << "Aliens Killed" << endl;
    cin >> a;
    cout << "Score" << endl;
   int total;
   int cs;
   int ak;
    cs = c * 100;
    ak = a * 50;
    total = cs + ak;
    cout << "Bonus:" << total <<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
    
    
