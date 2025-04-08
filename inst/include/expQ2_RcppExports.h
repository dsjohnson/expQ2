// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_expQ2_RCPPEXPORTS_H_GEN_
#define RCPP_expQ2_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace expQ2 {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("expQ2", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("expQ2", "_expQ2_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in expQ2");
            }
        }
    }

    inline arma::mat sSS_exp_Q(const arma::sp_mat Q, double prec, bool renorm = true) {
        typedef SEXP(*Ptr_sSS_exp_Q)(SEXP,SEXP,SEXP);
        static Ptr_sSS_exp_Q p_sSS_exp_Q = NULL;
        if (p_sSS_exp_Q == NULL) {
            validateSignature("arma::mat(*sSS_exp_Q)(const arma::sp_mat,double,bool)");
            p_sSS_exp_Q = (Ptr_sSS_exp_Q)R_GetCCallable("expQ2", "_expQ2_sSS_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sSS_exp_Q(Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat dSS_exp_Q(const arma::dmat Q, double prec, bool renorm = true) {
        typedef SEXP(*Ptr_dSS_exp_Q)(SEXP,SEXP,SEXP);
        static Ptr_dSS_exp_Q p_dSS_exp_Q = NULL;
        if (p_dSS_exp_Q == NULL) {
            validateSignature("arma::mat(*dSS_exp_Q)(const arma::dmat,double,bool)");
            p_dSS_exp_Q = (Ptr_dSS_exp_Q)R_GetCCallable("expQ2", "_expQ2_dSS_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dSS_exp_Q(Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat SS_exp_Q(SEXP Q, double prec, bool renorm = true) {
        typedef SEXP(*Ptr_SS_exp_Q)(SEXP,SEXP,SEXP);
        static Ptr_SS_exp_Q p_SS_exp_Q = NULL;
        if (p_SS_exp_Q == NULL) {
            validateSignature("arma::mat(*SS_exp_Q)(SEXP,double,bool)");
            p_SS_exp_Q = (Ptr_SS_exp_Q)R_GetCCallable("expQ2", "_expQ2_SS_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_SS_exp_Q(Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat sSS_v_exp_Q(const arma::mat v, const arma::sp_mat Q, double prec, bool renorm = true) {
        typedef SEXP(*Ptr_sSS_v_exp_Q)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_sSS_v_exp_Q p_sSS_v_exp_Q = NULL;
        if (p_sSS_v_exp_Q == NULL) {
            validateSignature("arma::mat(*sSS_v_exp_Q)(const arma::mat,const arma::sp_mat,double,bool)");
            p_sSS_v_exp_Q = (Ptr_sSS_v_exp_Q)R_GetCCallable("expQ2", "_expQ2_sSS_v_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sSS_v_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat dSS_v_exp_Q(const arma::mat v, const arma::mat Q, double prec, bool renorm = true) {
        typedef SEXP(*Ptr_dSS_v_exp_Q)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_dSS_v_exp_Q p_dSS_v_exp_Q = NULL;
        if (p_dSS_v_exp_Q == NULL) {
            validateSignature("arma::mat(*dSS_v_exp_Q)(const arma::mat,const arma::mat,double,bool)");
            p_dSS_v_exp_Q = (Ptr_dSS_v_exp_Q)R_GetCCallable("expQ2", "_expQ2_dSS_v_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dSS_v_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat SS_v_exp_Q(const arma::mat v, SEXP Q, double prec, bool renorm = true, bool checks = true) {
        typedef SEXP(*Ptr_SS_v_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_SS_v_exp_Q p_SS_v_exp_Q = NULL;
        if (p_SS_v_exp_Q == NULL) {
            validateSignature("arma::mat(*SS_v_exp_Q)(const arma::mat,SEXP,double,bool,bool)");
            p_SS_v_exp_Q = (Ptr_SS_v_exp_Q)R_GetCCallable("expQ2", "_expQ2_SS_v_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_SS_v_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(checks)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat sUnif_v_exp_Q(const arma::mat v, const arma::sp_mat Q, double prec, bool renorm = true, bool t2 = true) {
        typedef SEXP(*Ptr_sUnif_v_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sUnif_v_exp_Q p_sUnif_v_exp_Q = NULL;
        if (p_sUnif_v_exp_Q == NULL) {
            validateSignature("arma::mat(*sUnif_v_exp_Q)(const arma::mat,const arma::sp_mat,double,bool,bool)");
            p_sUnif_v_exp_Q = (Ptr_sUnif_v_exp_Q)R_GetCCallable("expQ2", "_expQ2_sUnif_v_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sUnif_v_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(t2)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat dUnif_v_exp_Q(const arma::mat v, const arma::mat Q, double prec, bool renorm = true, bool t2 = true) {
        typedef SEXP(*Ptr_dUnif_v_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dUnif_v_exp_Q p_dUnif_v_exp_Q = NULL;
        if (p_dUnif_v_exp_Q == NULL) {
            validateSignature("arma::mat(*dUnif_v_exp_Q)(const arma::mat,const arma::mat,double,bool,bool)");
            p_dUnif_v_exp_Q = (Ptr_dUnif_v_exp_Q)R_GetCCallable("expQ2", "_expQ2_dUnif_v_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dUnif_v_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(t2)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat Unif_v_exp_Q(const arma::mat v, SEXP Q, double prec, bool renorm = true, bool t2 = true, bool checks = true) {
        typedef SEXP(*Ptr_Unif_v_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_Unif_v_exp_Q p_Unif_v_exp_Q = NULL;
        if (p_Unif_v_exp_Q == NULL) {
            validateSignature("arma::mat(*Unif_v_exp_Q)(const arma::mat,SEXP,double,bool,bool,bool)");
            p_Unif_v_exp_Q = (Ptr_Unif_v_exp_Q)R_GetCCallable("expQ2", "_expQ2_Unif_v_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_Unif_v_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(t2)), Shield<SEXP>(Rcpp::wrap(checks)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline bool should_use_SS_sparse(int d, double rho, double f) {
        typedef SEXP(*Ptr_should_use_SS_sparse)(SEXP,SEXP,SEXP);
        static Ptr_should_use_SS_sparse p_should_use_SS_sparse = NULL;
        if (p_should_use_SS_sparse == NULL) {
            validateSignature("bool(*should_use_SS_sparse)(int,double,double)");
            p_should_use_SS_sparse = (Ptr_should_use_SS_sparse)R_GetCCallable("expQ2", "_expQ2_should_use_SS_sparse");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_should_use_SS_sparse(Shield<SEXP>(Rcpp::wrap(d)), Shield<SEXP>(Rcpp::wrap(rho)), Shield<SEXP>(Rcpp::wrap(f)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool should_use_SS_dense(int d, double rho) {
        typedef SEXP(*Ptr_should_use_SS_dense)(SEXP,SEXP);
        static Ptr_should_use_SS_dense p_should_use_SS_dense = NULL;
        if (p_should_use_SS_dense == NULL) {
            validateSignature("bool(*should_use_SS_dense)(int,double)");
            p_should_use_SS_dense = (Ptr_should_use_SS_dense)R_GetCCallable("expQ2", "_expQ2_should_use_SS_dense");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_should_use_SS_dense(Shield<SEXP>(Rcpp::wrap(d)), Shield<SEXP>(Rcpp::wrap(rho)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline arma::mat sv_exp_Q(const arma::mat v, const arma::sp_mat Q, double prec, bool renorm = true, bool t2 = true) {
        typedef SEXP(*Ptr_sv_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sv_exp_Q p_sv_exp_Q = NULL;
        if (p_sv_exp_Q == NULL) {
            validateSignature("arma::mat(*sv_exp_Q)(const arma::mat,const arma::sp_mat,double,bool,bool)");
            p_sv_exp_Q = (Ptr_sv_exp_Q)R_GetCCallable("expQ2", "_expQ2_sv_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sv_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(t2)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat dv_exp_Q(const arma::mat v, const arma::mat Q, double prec, bool renorm = true, bool t2 = true) {
        typedef SEXP(*Ptr_dv_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dv_exp_Q p_dv_exp_Q = NULL;
        if (p_dv_exp_Q == NULL) {
            validateSignature("arma::mat(*dv_exp_Q)(const arma::mat,const arma::mat,double,bool,bool)");
            p_dv_exp_Q = (Ptr_dv_exp_Q)R_GetCCallable("expQ2", "_expQ2_dv_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dv_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(t2)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat v_exp_Q(const arma::mat v, SEXP Q, double prec, bool renorm = true, bool t2 = true, bool checks = true) {
        typedef SEXP(*Ptr_v_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_v_exp_Q p_v_exp_Q = NULL;
        if (p_v_exp_Q == NULL) {
            validateSignature("arma::mat(*v_exp_Q)(const arma::mat,SEXP,double,bool,bool,bool)");
            p_v_exp_Q = (Ptr_v_exp_Q)R_GetCCallable("expQ2", "_expQ2_v_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_v_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(t2)), Shield<SEXP>(Rcpp::wrap(checks)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::dvec vT_exp_Q(const arma::dvec& v, SEXP Q, double prec, bool renorm = true, bool t2 = true, bool checks = true) {
        typedef SEXP(*Ptr_vT_exp_Q)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_vT_exp_Q p_vT_exp_Q = NULL;
        if (p_vT_exp_Q == NULL) {
            validateSignature("arma::dvec(*vT_exp_Q)(const arma::dvec&,SEXP,double,bool,bool,bool)");
            p_vT_exp_Q = (Ptr_vT_exp_Q)R_GetCCallable("expQ2", "_expQ2_vT_exp_Q");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_vT_exp_Q(Shield<SEXP>(Rcpp::wrap(v)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(prec)), Shield<SEXP>(Rcpp::wrap(renorm)), Shield<SEXP>(Rcpp::wrap(t2)), Shield<SEXP>(Rcpp::wrap(checks)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::dvec >(rcpp_result_gen);
    }

}

#endif // RCPP_expQ2_RCPPEXPORTS_H_GEN_
