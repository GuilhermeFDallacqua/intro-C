int factorial(int x) {
    int factorial = 1;

    for (int i = 1; i <= x; i++) {
        factorial*=i;
    }

    return factorial;
}
