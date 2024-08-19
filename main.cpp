#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x , p;
    cin >> x >> p ;
    double y = 100 - x ;
    double z = y/10;
    double res = (p*10)/z;
    cout << fixed << setprecision(2) << res << endl;


    return 0;
}
