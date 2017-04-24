#include <iostream>

using namespace std;

int fibo_R(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  if (n == 2)
    return 1;
  return fibo_R(n - 1) + fibo_R(n - 2);
/*
 * Le nombre d'appels pour calculer F(n) est égal à la valeur du terme :
 * F(3) : appel de F(2) et F(1) -> 2 appels
 * F(4) : appel de F(3) et F(2) -> 3 appels
 * F(5) : appel de F(4) et F(3) -> 5 appels
 * ...
 */
}



int main()
{
  int n;
  
  while (true)
  {
    cout << "n : ";
    cin >> n;
    do
    {
      cout << "fibo(" << n<< ") : ";
      cout << fibo_R(n) << endl;
    }
    while (n < 0);
  }
}
