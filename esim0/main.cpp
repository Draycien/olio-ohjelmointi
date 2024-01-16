#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,c;
    float avg;
    cout<<"Anna 1.luku"<<endl;
    cin>>a;
    cout<<"Anna 2.luku"<<endl;
    cin>>b;
    cout<<"Anna 3.luku"<<endl;
    cin>>c;
    avg=(a+b+c)/3;
    cout<<setprecision(2)<<fixed;
    cout<<"Keskiarvo on "<<avg<<endl;
    return 0;
}
