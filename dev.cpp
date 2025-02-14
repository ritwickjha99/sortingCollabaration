#include <bits/stdc++.h>
using namespace std;

class sortingAlgo {
private:
  vector<int> arrElem;

public:
  sortingAlgo(vector<int> a) { arrElem = a; }
  void printSortedArr() {
    for (int i = 0; i < arrElem.size(); i++) {
      cout << arrElem[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  vector<int> arrayElements = {14, 30, 10, 12, 16};
  sortingAlgo newObj(arrayElements);

  // appy any method on created object, for instance:
  newObj.sort();
  newObj.sort('b');
  newObj.sort(true);
  newObj.sort(0, arrayElements.size() - 1);

  newObj.printSortedArr();
  return 0;
}