#include <iostream>

using namespace std;

double factorielle_iterative(int N)
{
  double f = 1;
  for (int i = 1;i <= N; i++)
    f = f * i;
  return f;
}

double factorielle_recursive(int N)
{
  if (N == 0)
    return 1;
  return N * factorielle_recursive(N -1);
}

int main()
{
  int N;
  
  while (true)
  {
    do
    {
      cout << "N (>=0) : ";
      cin >> N;
    }
    while (N < 0);
    cout << "Iterative N! : " << factorielle_iterative(N) << endl;
    cout << "Recursive N! : " << factorielle_recursive(N) << endl;
  }
}
