% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/address.R
\name{is_sector}
\alias{is_sector}
\title{Is the string the sector part of a postcode.}
\usage{
is_sector(postcode, ignore_case = FALSE)
}
\arguments{
\item{postcode}{A character string.}

\item{ignore_case}{A boolean.}
}
\value{
A boolean.
}
\description{
Is the string the sector part of a postcode.
}
\section{FIXME}{

SE16 is TRUE (should be FALSE) cause it takes it as SE1 6 without space
}

\examples{
is_sector("EC2A 0")
is_sector("se16 0", ignore_case = TRUE)
}
