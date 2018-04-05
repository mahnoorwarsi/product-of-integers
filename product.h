#include<iostream>
using namespace std;
class product
{
  private:
  int a;
  int b;
  public:
product()
  {
    this->a=50;
    this->b=100;
  }
  int pro()
  {
    int pro=(this->a*this->b);
    return pro;
  }

};