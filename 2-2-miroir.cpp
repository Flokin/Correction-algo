#include <iostream>

using namespace std;

void miroir()
{
  char c;
  
  cin >> c;
  if (c != '.')
    miroir();
  else
    return;
  cout << c;
}

int main()
{
  int a, b;
  
  while (true)
  {
    cout << "Entrer une chaine :" << endl;
    miroir();
    cout << endl;
  }
}
