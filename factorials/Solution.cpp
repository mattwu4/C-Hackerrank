#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
  int answer = 1;
  for(int i = n; i > 1; i--){
    answer = answer * i;
  }
  return answer;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    cout << result << "\n";

    return 0;
}
