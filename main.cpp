#include <iostream>
#include <cmath>
using namespace std;

double case1 (double a, double b, double c) 
{
return ((b - sqrt(pow(b,2) + 4*a*c)/2*a) - pow(a,3) * c + pow(b, -2));
} 

int main() {
  cout<<"Результаты для значений a=2.2 b=5.4 c=3.5 ." <<" "<< case1(2.2 , 5.4, 3.5);
}