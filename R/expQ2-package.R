#' @title Non-negative vector * exp of rate matrix
#' 
#' @description v exp(Q) by uniformisation or scaling and squaring, or exp(Q) by scaling and squaring.
#' 
#' \tabular{ll}{ 
#' Package: \tab expQ2\cr 
#' Type: \tab Package\cr 
#' Version: \tab 1.3\cr 
#' Date: \tab May 4, 2023\cr 
#' License: \tab CC0 \cr 
#' LazyLoad: \tab yes\cr 
#' }
#' 
#' @note This software package is based on the R package {expQ} developed by 
#' Chris Sherlock (https://github.com/ChrisGSherlock/expQ). This alternate 
#' version is maintained by scientists at the NOAA Fisheries Pacific Islands 
#' Fisheries Science Center and should be considered a fundamental research 
#' communication. The recommendations and conclusions presented here are those 
#' of the authors and this software should not be construed as official 
#' communication by NMFS, NOAA, or the U.S. Dept. of Commerce. In addition, 
#' reference to trade names does not imply endorsement by the National Marine 
#' Fisheries Service, NOAA. While the best efforts have been made to insure the 
#' highest quality, tools such as this are under constant development and are 
#' subject to change.
#'  
#' @name expQ2-package
#' @aliases expQ2-package expQ2
#' @docType package
#' @author Chris Sherlock and Devin Johnson
#' 
#' Maintainer: Devin S. Johnson <devin.johnson@@noaa.gov>
#' @references Sherlock, C. (2021). Direct statistical inference for finite 
#' Markov jump processes via the matrix exponential. Computational Statistics, 
#' 36(4), 2863-2887.
#' 
#' @useDynLib expQ2, .registration=TRUE
#' @importFrom Rcpp evalCpp
#' @import Matrix
NULL


