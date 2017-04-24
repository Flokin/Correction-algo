#include <iostream>

using namespace std;

void afficher(int T[], int N)
{
  int i;
  
  for (i = 0;i < N; i++)
    cout << T[i] << ' ';
  cout << endl;
}

void inserer(int T[], int n)
{
  int i, v;
  
  cout << endl;
  afficher(T,n + 1);
  i = n - 1;
  v = T[n];
  while (i >= 0 && T[i] > v)
  {
    T[i + 1] = T[i];
    i--;
  }
  T[i + 1] = v;
  afficher(T,n + 1);
  cout << endl;
}

void trier(int T[], int n)
{
  if (n == 0)
    return;
  trier(T, n - 1);
  inserer(T, n);
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
    trier(Tab, N - 1);
    afficher(Tab,N);
  }
}
