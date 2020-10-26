#include <iostream>
using namespace std;

bool chetn(int a)
{
  return a >= 10 && a <= 99 && a%2==0 ;
}

bool ravnostoron(int a, int b, int c)
{
  return a==b==c;
}

bool ravnnobed(int a, int b, int c)
{
  return a==b || a==c || b == c || a==b==c;
}

bool sred( int a, int b, int c)
{
  return (a+b)/2==c;
}

int main() {
  int a,b,c;
  int f,k,l;
  int n;
  cout << "Введите число ";
  cin >> n;
  cout << "введите стороны треугольника ";
  cin >> a >> b >> c;
  cout << "Введите числа ( сред арифмет ) ";
  cin >> f >> k >> l;
  cout << "Двузначное и четное? " << chetn(n) << "\n";
  cout << "Равносторонний? " << ravnostoron(a, b, c) << "\n";
  cout << "Равнобедренный? " << ravnostoron(a, b, c) << "\n";
  cout << "Является ли среднеариметическим? " << sred(f, k, l);
}