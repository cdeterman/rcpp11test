//[[Rcpp::plugins(cpp11)]]

#include <Rcpp.h>

// my awesome c11 function

// [[Rcpp::export]]
int useCpp11(){
    auto x = 10;
    return x;
}