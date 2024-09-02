bool sqrtcheck(long long n) {
  
    // 0 is considered as a perfect
    // square
    if (n == 0) return true;
    
    long long odd = 1;
    while (n > 0) {
        n -= odd;
        odd += 2;
    }
    return n == 0;
}