void fibonacci_without_recursion(int n) {
    int i, t1 = 0, t2 = 1, nT;
    for (i = 1; i <= n; ++i) {
        cout<<t1<<" ";
        nT = t1 + t2;
        t1 = t2;
        t2 = nT;
    }
}