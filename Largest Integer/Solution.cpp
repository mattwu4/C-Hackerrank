#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

void four_integer(int a, int b, int c, int d){
  int max1 = std::max(a, b);
  int max2 = std::max(c, d);
  int max = std::max(max1, max2);
  std::cout << max;
}



int main(){

  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  four_integer(a,b,c,d);

}
