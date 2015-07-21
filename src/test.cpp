

#include <RcppEigen.h>


template <class T>
using DynVector = std::vector<T>;


// my awesome c11 function

// [[Rcpp::export]]
int useCpp11(){
    auto x = 10;
    return x;
}