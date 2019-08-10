#include <iostream>
#include <cstdio>
using namespace std;

int a;
int b;

int main() {
    // Complete the code.
    std::cin >> a;
    std::cin >> b;
    std::string small[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
      for(int i = a; i <= b; i++){
        if(i > 9){
          if(i % 2 == 0){
            std::cout << "even";
            std::cout << endl;
          } else{
            std::cout << "odd";
            std::cout << endl;
          }
        } else{
          std::cout << small[i];
          std::cout << endl;
        }
      }
    }
