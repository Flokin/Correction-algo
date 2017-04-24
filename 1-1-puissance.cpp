#include <iostream>

using namespace std;

double puissance(double x, int n)
{
  if (n == 0)
    return 1;
  return x * puissance(x, n -1);
}

int main()
{
  double x;
  int n;
  
  while (true)
  {
    cout << "x : ";
    cin >> x;
    do
    {
      cout << "n (>=0) : ";
      cin >> n;
    }
    while (n < 0);
    cout << "x^n : " << puissance(x, n) << endl;
  }
}
