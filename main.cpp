#include <bits/stdc++.h>

using namespace std;

int main () {
  string w;
  vector <string> arr1, arr2;
  map <string, int> frec;
  while (cin >> w, w != "#") {
    arr1.push_back(w);
    for (char& ch: w) ch = tolower(ch);
    sort(begin(w), end(w));
    arr2.push_back(w);
    frec[w]++;
  }
  vector <string> ans;
  for (int i = 0; i < int(arr1.size()); i++) {
    if (frec[arr2[i]] == 1 or int(arr2[i].size()) == 1) {
      ans.push_back(arr1[i]);
    }
  }
  sort(begin(ans), end(ans));
  for (string word: ans) cout << word << endl;
  return (0);
}
