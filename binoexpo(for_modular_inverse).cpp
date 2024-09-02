ll Binoexpo(ll base, ll raise, ll mod) {
    base %= MOD;
    ll ans = 1;
    while (raise) {
        if (raise & 1) {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        raise >>= 1;
    }
    return ans;
}