#include <iostream>

using namespace std;

int SommeChiffres(int n)
{
  int total = 0;

  do
  {
    total = total + n % 10; // Extraction et addition du dernier chiffre
    n = n / 10;       // puis suppression par decalage a gauche
  } while(n != 0);
  return total;
}

bool DivisibilitePar3(int N)
{
    if (N <= 9) // c'est un chiffre
        if (N == 3 || N == 6 || N == 9) // il est divisble par 3
            return true;
        else
            return false;
    // C'est un nombre, on calcule la somme des chiffres et on relance
    return DivisibilitePar3(SommeChiffres(N));
}

int main()
{
  int n = 0;
  int resultat;

  while (true)
  {
    do
    {
      cout << "Entrez le nombre à tester (> 0): ";
      cin >> n;
    } while (n <= 0);
    if (DivisibilitePar3(n))
      cout << n << " est un multiple de 3" << endl;
    else 
      cout << n << " n'est pas un multiple de 3" << endl;
  }
}
