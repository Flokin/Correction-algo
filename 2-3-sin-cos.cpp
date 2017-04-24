#include <iostream>
#include <cmath>

using namespace std;

double cr(double a, double e);

double sr(double a, double e)
{
  if (a < e)
    return a;
  return 2 * sr(a / 2., e) * cr(a / 2., e);
}

double cr(double a, double e)
{
  double c, s;
  
  if (a < e)
    return 1;
  s = sr(a / 2., e);
  c = cr(a / 2., e);
  return c * c - s * s;
}

int main()
{
  double a;
  double e;
  
  while (true)
  {
    cout << "precision : ";
    cin >> e;
    cout << "angle : ";
    cin >> a;
    cout << "bon sin : " << sin(a) << endl;
    cout << "rec sin : " << sr(a, e) << endl;
    cout << "bon cos : " << cos(a) << endl;
    cout << "rec cos : " << cr(a, e) << endl;
  }
}
