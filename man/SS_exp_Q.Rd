% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{SS_exp_Q}
\alias{SS_exp_Q}
\title{Exponentiate a rate matrix}
\usage{
SS_exp_Q(Q, prec, renorm = TRUE)
}
\arguments{
\item{Q}{Rate matrix (sparse or dense).}

\item{prec}{Required precision - missing mass in the Poisson distribution.}

\item{renorm}{Force elements of each row to sum to 1? Defaults to TRUE.}
}
\value{
exp(Q) A dense matrix.
}
\description{
Exponentiates a whole rate matrix by making all elements non-negative, then  scaling and squaring.
}
\examples{
Qd <- matrix(nrow=2,ncol=2,data=c(-1,1,2,-2),byrow=TRUE); SS_exp_Q(Qd,1e-10)

library("Matrix")
d<-5; f<-0.3; ones<-rep(1,d)
Qs <- abs(rsparsematrix(d,d,f))
diag(Qs) <- 0
Qsum <- as.vector(Qs\%*\%ones)
diag(Qs) <- -Qsum
SS_exp_Q(Qs,1e-15)

\dontrun{
M <- matrix(nrow=2,ncol=2,data=c(1,1,2,2),byrow=TRUE); SS_exp_Q(M,1e-10)
M <- matrix(nrow=2,ncol=2,data=c(1,-1,-2,2),byrow=TRUE); SS_exp_Q(M,1e-10)
SS_exp_Q(Qs,1.5)
SS_exp_Q(Qs,-2.0)
}
}
\author{
Chris Sherlock
}
