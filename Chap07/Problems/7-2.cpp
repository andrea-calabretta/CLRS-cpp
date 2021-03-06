#include "7-2.h"
#include "../../print.h"

using namespace CLRS::CH7;

int main() {
  print(string("Problem 7-2 Hoare partition correctness"));

  cout << "Initialize an array A as 7-1 (a)\n";
  vector<int> A = {13, 19, 9, 5, 12, 8, 7, 4, 11, 2, 6, 21};
  print(A);

  cout << "\nPerform QUICKSORT'(A, 0, 11)\n";
  quicksort_(A, 0, 11);
  print(A);
}