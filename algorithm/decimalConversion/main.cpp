#include <iostream>
#include <string>
using namespace std;

int N;
string Answer = "";

int main()
{
  cin >> N;
  while (N >= 1)
  {
    if (N % 2 == 0)
    {
      Answer = "0" + Answer;
      cout << "N is" << N << "N % 2 equal 0 calc answer >> " << N % 2 << endl;
    }

    if (N % 2 == 1)
    {
      Answer = "1" + Answer;
      cout << "N is" << N << "N % 2 equal 1  calc answer >> " << N % 2 << endl;
    }

    N = N / 2;
  }

  cout << Answer << endl;
  return 0;
}