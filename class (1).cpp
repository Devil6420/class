#include<iostream>
using namespace std;
class cube
{
public:
    
    double hieght = 5;
    double width = 2;
    double length = 3;


};
int main()
{
    cube cube1;
    double vol;
    vol = cube1.hieght*cube1.width*cube1.length;
    cout<<vol<<endl;
}



