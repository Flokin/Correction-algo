#include <iostream>

using namespace std;

double pgcd(int a, int b)
{
  if (a == b)
    return a;
  if (a < b)
    return pgcd(a, b - a);
  else
    return pgcd(b, a - b);
}

int main()
{
  int a, b;
  
  while (true)
  {
    do
    {
      cout << "a (>=0) : ";
      cin >> a;
    }
    while (a < 0);
    do
    {
      cout << "b (>=0) : ";
      cin >> b;
    }
    while (b < 0);
    cout << "Le PGCD de " << a << " et " << b << " est : " << pgcd(a, b) << endl;
  }
}
