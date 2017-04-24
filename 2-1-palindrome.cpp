#include <iostream>

using namespace std;

bool palindrome(char S[1024], int d, int f)
{
    if (d >= f)
        return true;
    if (S[d] != S[f])
        return false;
    return palindrome(S, d + 1, f - 1);
}

int main()
{
  char S[1024];
  int N;
  
  while (true)
  {
    cout << "Chaine : ";
    cin >> S;
    cout << "Longueur : ";
    cin >> N;
    if (palindrome(S, 0, N - 1))
      cout << S << " est un palindrome" << endl;
    else
      cout << S << " n'est pas un palindrome" << endl;
  }
}
