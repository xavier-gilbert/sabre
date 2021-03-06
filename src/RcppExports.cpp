// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// to_upper
Rcpp::String to_upper(std::string str);
RcppExport SEXP _sabre_to_upper(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(to_upper(str));
    return rcpp_result_gen;
END_RCPP
}
// find_postcodes_in_string_cpp
std::string find_postcodes_in_string_cpp(const std::string s);
RcppExport SEXP _sabre_find_postcodes_in_string_cpp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(find_postcodes_in_string_cpp(s));
    return rcpp_result_gen;
END_RCPP
}
// is_district_cpp
bool is_district_cpp(std::string s);
RcppExport SEXP _sabre_is_district_cpp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(is_district_cpp(s));
    return rcpp_result_gen;
END_RCPP
}
// is_sector_cpp
bool is_sector_cpp(std::string s);
RcppExport SEXP _sabre_is_sector_cpp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(is_sector_cpp(s));
    return rcpp_result_gen;
END_RCPP
}
// is_postcode_complete_cpp
bool is_postcode_complete_cpp(std::string s);
RcppExport SEXP _sabre_is_postcode_complete_cpp(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(is_postcode_complete_cpp(s));
    return rcpp_result_gen;
END_RCPP
}
// last_cpp
Rcpp::String last_cpp(std::vector<std::string> v);
RcppExport SEXP _sabre_last_cpp(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(last_cpp(v));
    return rcpp_result_gen;
END_RCPP
}
// gapfill_postcodes
std::vector<std::string> gapfill_postcodes(std::vector<std::string> postcode, std::vector<std::string> address);
RcppExport SEXP _sabre_gapfill_postcodes(SEXP postcodeSEXP, SEXP addressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type postcode(postcodeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type address(addressSEXP);
    rcpp_result_gen = Rcpp::wrap(gapfill_postcodes(postcode, address));
    return rcpp_result_gen;
END_RCPP
}
// parse_nested_records
CharacterVector parse_nested_records(std::vector<std::string> s, std::string sep_from, std::string sep_to);
RcppExport SEXP _sabre_parse_nested_records(SEXP sSEXP, SEXP sep_fromSEXP, SEXP sep_toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type s(sSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep_from(sep_fromSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep_to(sep_toSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_nested_records(s, sep_from, sep_to));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sabre_to_upper", (DL_FUNC) &_sabre_to_upper, 1},
    {"_sabre_find_postcodes_in_string_cpp", (DL_FUNC) &_sabre_find_postcodes_in_string_cpp, 1},
    {"_sabre_is_district_cpp", (DL_FUNC) &_sabre_is_district_cpp, 1},
    {"_sabre_is_sector_cpp", (DL_FUNC) &_sabre_is_sector_cpp, 1},
    {"_sabre_is_postcode_complete_cpp", (DL_FUNC) &_sabre_is_postcode_complete_cpp, 1},
    {"_sabre_last_cpp", (DL_FUNC) &_sabre_last_cpp, 1},
    {"_sabre_gapfill_postcodes", (DL_FUNC) &_sabre_gapfill_postcodes, 2},
    {"_sabre_parse_nested_records", (DL_FUNC) &_sabre_parse_nested_records, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sabre(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
