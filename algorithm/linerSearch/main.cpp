#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // 入力を受け取る
  int N = 5;
  int target = 1;
  vector<int> a(N);
  for (int i = 0; i < N; i++)
  {
    a[i] += 1;
  }

  bool exist = false;
  for (int i = 0; i < N; i++)
  {
    cout << a[i] << endl;
    if (a[i] == target)
    {
      exist = true;
    }
  }
  //結果出力
  if (exist)
  {
    cout << " Found" << endl;
  }
  else
  {
    cout << " Not Found" << endl;
  }
}