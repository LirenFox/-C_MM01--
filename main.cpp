#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int u, d, h;
    while(cin >> u>>d>> h){
        double area;
        area = (u+d)*h/2.0;
        cout <<fixed<<setprecision(1)<<"Trapezoid area:"<< area<< endl;
    }
    return 0;
}
