#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int i;
int p;

int main() {
    std::cin >> i;
    std::vector<int> array;
    for(int k = 0; k < i; k++){
      std::cin >> p;
      array.push_back(p);
    }
    for(int j = i - 1; j >= 0; j-- )
    std::cout << array[j] << " ";

  }
