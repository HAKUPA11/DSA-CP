#include<bits/stdc++.h>

using namespace std;

int main() {
  set < int > s;
  for (int i = 1; i <= 10; i++) {
    int x; cin >> x;
    s.insert(x);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }