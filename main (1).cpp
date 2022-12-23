#include<iostream>
using namespace std;
int calculate_length(int m, int n, const int side)
{
  int length = 0;
  while (m > 1 && n > 1)
  {
    length += --m;
    length += n - 2;
    n--;
  }
  return length * side;
}
int main()
{
  int m, n;
  cout << "Enter m n" << endl;
  cin >> m >> n;
  int const side_length = 1;
  int fence_length = calculate_length(m, n, side_length);
  cout << "Fence length: " << fence_length << endl;
  return 0;
}
