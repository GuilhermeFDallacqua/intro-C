#include <stdio.h>
#include <locale.h>

int expo(int a, int b) {
    if (b == 0) {
        return a;
    } 
    
    return a * expo(a, b - 1);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("%d", expo(2, 3));

    return 0;
}
