ll permute(ll num){
    ll ret=1;
    for(ll i=1;i<=num;i++){
        ret*=i;
        ret%=MOD;
    }
    return ret;
}
ll comb(ll num1){
    ll num2=(num1*(num1-1))/2;
    num2%=MOD;
    return num2;
}