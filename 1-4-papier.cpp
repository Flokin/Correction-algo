#include <iostream>

using namespace std;

void feuilleA(int n, float & lo, float & la)
{
    if (n == 0)
    {
        lo = 118.9;
        la = 84.1;
    }
    else
    {
        feuilleA(n - 1, la, lo);
        la = la / 2;
    }
}

int main()
{
  int N;
  float lo, la;
  
  while (true)
  {
    cout << "Entrer une taille de feuille :" << endl;
    cin >> N;
    feuilleA(N, lo, la);
    cout << "longueur : " << lo << " et largeur : " << la << endl;
  }
}
