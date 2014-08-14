
#include <Rcpp.h>
using namespace Rcpp;

//' Example function of rcpp
//'
//' @param string first string
//' @param string second string
//' @return list list of two vectors
//' @export
// [[Rcpp::export]]
List rcpp_hello_world(std::string a, std::string b) {

    CharacterVector x = CharacterVector::create(a, b)  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}
