#include <iostream>
#include <iomanip>
using namespace std;

void getTime(int& h, int& m) {
  cout << "Input hour & minute: ";
  cin >> h >> m;
}

int subtract(int h1, int m1, int h2, int m2) {
  int h = h2 - h1;
  if (m2 < m1) h--;
  if (h < 0) h += 24;
  return h;
}

int subtract(int m1, int m2) {
  if (m2 < m1)
    return m2 + 60 - m1;
  else
    return m2 - m1;
}

int main() {
  int h1, m1, h2, m2, h3, m3;
  cout << "What time was it?" << endl;
  getTime(h1, m1);
  cout << "What time is it now?" << endl;
  getTime(h2, m2);

  cout << "Time difference is ";
  h3 = subtract(h1, m1, h2, m2);
  m3 = subtract(m1, m2);
  cout << setfill('0') << setw(2) << h3 << ":" << setfill('0') << setw(2) << m3 << endl;

  return 0;
}