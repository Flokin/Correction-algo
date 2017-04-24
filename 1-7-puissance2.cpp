#include <iostream>

using namespace std;

float Puissance2(float X, int n, int & nbMult)
{
    if (n == 0)
        return 1.;
    if (n == 1)
        return X;
    if (n % 2 == 0)
    {
        nbMult++;
        return Puissance2(X * X, n / 2, nbMult);
    }
    nbMult++;
    return X * Puissance2(X, n - 1, nbMult);
}

int main()
{
  int N;
  float X;
  int nbMult;
  
  while (true)
  {
    nbMult = 0;
    cout << "Entrer X :" << endl;
    cin >> X;
    cout << "Entrer N :" << endl;
    cin >> N;
    cout << "X ^ N = " << Puissance2(X, N, nbMult);
    cout << " nb de multiplication : " << nbMult << endl;
  }
}
