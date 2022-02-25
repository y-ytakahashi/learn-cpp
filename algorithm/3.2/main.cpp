#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // 入力値を取得
  int N, v;
  cin >> N >> v;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
    cin >> a[i];

  // 線形探索
  int found_id = -1;
  int found_num = -1;
  for (int i = 0; i < N; i++)
  {
    if (a[i] == v)
    {
      found_id = i;
      found_num = a[i];
      break;
    }
  }

  cout << found_id << found_num << endl;
  std::cout << "found_id" << found_id << "found_num" << found_num << endl;
}
