#include <iostream>
using namespace std;

int w;

int main() {
    scanf("%d", &w);
    if ((w & 1) || w == 2) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}
