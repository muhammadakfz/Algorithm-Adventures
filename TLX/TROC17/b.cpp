#include <cstdio>


inline int fastInput() {
    int n = 0;
    char c = getchar_unlocked();
    while (c < '0' || c > '9') c = getchar_unlocked(); 
    while (c >= '0' && c <= '9') {
        n = n * 10 + c - '0'; 
        c = getchar_unlocked();
    }
    return n;
}

int main() {
    int n = fastInput();
    int m = fastInput();

    if (n % 4 == 0 && m % 4 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
