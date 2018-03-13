#include <iostream>

using namespace std;

int main()
{

    double fb , v , y = 62.4 , r;

    cout << "enter value of weight: " << endl;

    cin >> v;

    cout << "enter value of reduce: " << endl;

    cin >> r;

    fb = v*y ;

     v = (4/3)*(3.14)*r*r*r;

     if (fb >= v)
     {
         cout << "the weight will float.";
     }

     else
     {
         cout << "the weight will sink.";
     }



    return 0;
}
