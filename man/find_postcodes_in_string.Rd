% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/address.R
\name{find_postcodes_in_string}
\alias{find_postcodes_in_string}
\title{Find postcodes in a string.}
\usage{
find_postcodes_in_string(string, locale = "GBR")
}
\arguments{
\item{string}{Input vector. Either a character vector, or something
coercible to one (e.g. a data frame).}

\item{locale}{A string, the country code in format ISO 3. Default is "GBR".}
}
\value{
A character vector containing all the matches.
}
\description{
Returns an empty string where no match is found.
The string can be an address or any text string.
For large flat files, use \code{find_postcodes()}.
}
\section{TODO}{

Handle extra white spaces: try trimming ws inside postcode if not match
Handle special cases with lower casing without interferring with other strings
such as Ec2M 1aA
Handle case: currently only findingpostcodes that are in caps (to deal with possible
typos, see test)
}

\examples{
string <- "The quick brown fox lives at 6 Bridge Road, N17 0RN."
find_postcodes_in_string(string)

}
\seealso{
\code{\link[=find_postcodes]{find_postcodes()}}
}
