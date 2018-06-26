snippet mod
abbr modの除算を積にする
 LL change_div_mul_mod(LL divisor, LL mod_minus_2, LL mod){
     if(mod_minus_2 == 0) return 1;
         else if(mod_minus_2 % 2 == 0){
         LL d = change_div_mul_mod(divisor, mod_minus_2/2, mod);
         return (d * d) % mod;
     }else{
         return (divisor * change_div_mul_mod(divisor, mod_minus_2-1, mod)) % mod;
     }
 }
