
#include <cstdlib>
#include <iostream>

using namespace std;
const int D = 10;

int main()
{
    int d[10],t,b=10;
    for (t=0;t<D;t++)
    {
                        cout << "Type in your kills ";
                        cin >> d[t];
                        b+= (d[t]>=10);
        }
        cout << "Here are your kills for each game" << b << endl;
    system("PAUSE");
    return 0;
}
