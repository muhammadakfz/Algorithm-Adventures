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

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int temp = fastInput();
        ans += temp % 2;
    }

    for (int i = 0; i < n; i++) {
        fastInput();
    }

    printf("%d\n", ans % 2);

    return 0;
}
