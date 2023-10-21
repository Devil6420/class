#include<iostream>
using namespace std;
class cube
{
public:
    
    double hieght = 5;
    double width = 6;
    double length = 2;  
int volume()
  {
    double vol;
    vol=hieght*width*length;
    return vol;
  }
  int display(int b)
  {
    cout<<"Volume is:"<<b<<endl;
  }

};
int main(){
    cube cube1;
    double a=  cube1.volume();
    cube1.display(a);
  

    
}    



