template <typename T>
T change_div_mul_mod(T divisor, T mod_minus_2, T mod){
    if(mod_minus_2 == 0) return 1;
        else if(mod_minus_2 % 2 == 0){
        T d = change_div_mul_mod(divisor, mod_minus_2/2, mod);
        return (d * d) % mod;
    }else{
        return (divisor * change_div_mul_mod(divisor, mod_minus_2-1, mod)) % mod;
    }
}