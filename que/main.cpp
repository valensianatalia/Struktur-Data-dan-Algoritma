#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;

  q.push(6);
  q.push(7);
  q.push(8);

  /*q = queue*/

  cout << "Nilai awal q: " << q.front() << endl;
  cout << "Nilai akhir q: " << q.back() << endl;
  cout<<"\n";
  q.pop();
  cout << "Nilai awal q setelah dihapus : " << q.front() << endl;
  cout << "Nilai akhir q setelah dihapus : " << q.back() << endl;
  return 0;
}
