#include <iostream>

using namespace std;

void afficher(int T[], int d, int f)
{
  int i;
  
  for (i = d;i <= f; i++)
    cout << T[i] << ' ';
  cout << endl;
}

void fusionner(int T[], int d1, int f1, int d2, int f2)
{
  int i1, i2, j;
  int * Tmp = new int[f2 - d1 +1];
  
  cout << endl;
  afficher(T,d1, f1);
  afficher(T,d2, f2);

  i1 = d1;
  i2 = d2;
  j = 0;
  while (i1 <= f1 && i2 <= f2)
  {
    if (T[i1] < T[i2])
    {
      Tmp[j] = T[i1];
      i1++;
      j++;
    }
    else
    {
      Tmp[j] = T[i2];
      i2++;
      j++;
    }
  }
  if (i1 == f1 + 1)
    for ( ;i2 <= f2; i2++, j++)
      Tmp[j] = T[i2];
  else
    for ( ;i1 <= f1; i1++, j++)
      Tmp[j] = T[i1];
  for (j = 0, i1 = d1;i1 <= f2; j++, i1++)
    T[i1] = Tmp[j];

  afficher(T,d1, f1);
  afficher(T,d2, f2);
  cout << endl;
}

void trier(int T[], int d, int f)
{
  if (d == f)
    return;
  trier(T, d, (d + f) / 2);
  trier(T, (d + f) / 2 + 1, f);
  fusionner(T, d, (d + f) / 2, (d + f) / 2 + 1, f);
}

int main()
{
  const int N = 10;
  int i;
  int Tab[N];
  
  while (true)
  {
    cout << "Entrer " << N << " valeurs :" << endl;
    for (i = 0;i < N; i++)
      cin >> Tab[i];
    trier(Tab, 0, N - 1);
    afficher(Tab,0, N - 1);
  }
}
