#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <cmath>

void update(int *a,int *b) {
    int first = (*a + *b);
    std::cout << first << "\n";
    int second = abs(*a - *b);
    std::cout << second << "\n";
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}
