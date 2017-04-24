#include <iostream>

using namespace std;

int fibo_I(int n)
{
    int Fnm2 = 0;
    int Fnm1 = 1;
    int Fn;
    
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    while (n > 1)
    {
        Fn = Fnm1 + Fnm2;
        Fnm2 = Fnm1;
        Fnm1 = Fn;
        n--;
    }
    return Fn;
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
      cout << "fibo(" << n << ") : ";
      cout << fibo_I(n) << endl;
    }
    while (n < 0);
  }
}
