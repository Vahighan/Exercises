#include<iostream>
using namespace std;

class Circle{
private:
float *radius_;

public:
Circle(float R){
radius_ = new float;
*radius_=R;
cout<<"parameter is "<<*radius_<<endl;
}
~Circle()
{
delete radius_;
cout<<"deleting radius"<<endl;
}
};
int main(){
Circle cir(2);
}
