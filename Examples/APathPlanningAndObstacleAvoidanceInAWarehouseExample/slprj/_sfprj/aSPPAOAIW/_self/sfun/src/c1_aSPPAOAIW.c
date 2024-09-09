/* Include files */

#include "aSPPAOAIW_sfun.h"
#include "c1_aSPPAOAIW.h"
#include <math.h>
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define c1_const_mapScalingFactor      (100.0)
#define CALL_EVENT                     (-1)
#define c1_b_mapScalingFactor          (100.0)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c1_b_emlrtMCI = { 21,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtMCInfo c1_c_emlrtMCI = { 706,/* lineNo */
  79,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_d_emlrtMCI = { 38,/* lineNo */
  48,                                  /* colNo */
  "circshift",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pName */
};

static emlrtMCInfo c1_e_emlrtMCI = { 506,/* lineNo */
  68,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_f_emlrtMCI = { 507,/* lineNo */
  66,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_g_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c1_h_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c1_i_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c1_j_emlrtMCI = { 774,/* lineNo */
  131,                                 /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_k_emlrtMCI = { 785,/* lineNo */
  132,                                 /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_l_emlrtMCI = { 882,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_m_emlrtMCI = { 899,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_n_emlrtMCI = { 908,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_o_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo c1_p_emlrtMCI = { 301,/* lineNo */
  35,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_q_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c1_r_emlrtMCI = { 518,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_s_emlrtMCI = { 90,/* lineNo */
  13,                                  /* colNo */
  "PriorityQueue",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\PriorityQueue.m"/* pName */
};

static emlrtMCInfo c1_t_emlrtMCI = { 320,/* lineNo */
  39,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtMCInfo c1_u_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c1_v_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo c1_w_emlrtMCI = { 288,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c1_x_emlrtMCI = { 18,/* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 1,  /* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 1,/* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+map\\+internal\\I"
  "nternalAccess.m"                    /* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 1,/* lineNo */
  "binaryOccupancyMap",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\nav_rst\\nav_rst_lib\\binaryOccupancyMap.m"/* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 119,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 325,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 328,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 329,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 347,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 380,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 385,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 71,/* lineNo */
  "SharedMapProperties",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\SharedM"
  "apProperties.m"                     /* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 430,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 494,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 30,/* lineNo */
  "CircularBufferIndex",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\Circula"
  "rBufferIndex.m"                     /* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 35,/* lineNo */
  "CircularBuffer",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\Circula"
  "rBuffer.m"                          /* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 921,/* lineNo */
  "binaryOccupancyMap",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\nav_rst\\nav_rst_lib\\binaryOccupancyMap.m"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 722,/* lineNo */
  "binaryOccupancyMap",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\nav_rst\\nav_rst_lib\\binaryOccupancyMap.m"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 868,/* lineNo */
  "binaryOccupancyMap",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\nav_rst\\nav_rst_lib\\binaryOccupancyMap.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 380,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 518,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 519,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 249,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 263,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_x_emlrtRSI = { 282,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_y_emlrtRSI = { 285,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ab_emlrtRSI = { 295,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_bb_emlrtRSI = { 298,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_cb_emlrtRSI = { 306,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_db_emlrtRSI = { 315,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_eb_emlrtRSI = { 320,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_fb_emlrtRSI = { 323,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_gb_emlrtRSI = { 1,/* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\nav_rst\\nav_rst_lib\\+nav\\+algs\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo c1_hb_emlrtRSI = { 338,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ib_emlrtRSI = { 676,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_jb_emlrtRSI = { 693,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_kb_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c1_lb_emlrtRSI = { 390,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_mb_emlrtRSI = { 391,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_nb_emlrtRSI = { 411,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ob_emlrtRSI = { 412,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_pb_emlrtRSI = { 413,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_qb_emlrtRSI = { 379,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_rb_emlrtRSI = { 380,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_sb_emlrtRSI = { 400,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_tb_emlrtRSI = { 401,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ub_emlrtRSI = { 402,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_vb_emlrtRSI = { 648,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_wb_emlrtRSI = { 451,/* lineNo */
  "binaryOccupancyMap",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\nav_rst\\nav_rst_lib\\binaryOccupancyMap.m"/* pathName */
};

static emlrtRSInfo c1_xb_emlrtRSI = { 1431,/* lineNo */
  "MapLayer",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapLaye"
  "r.m"                                /* pathName */
};

static emlrtRSInfo c1_yb_emlrtRSI = { 51,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_ac_emlrtRSI = { 96,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_bc_emlrtRSI = { 137,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_cc_emlrtRSI = { 133,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_dc_emlrtRSI = { 129,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_ec_emlrtRSI = { 124,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_fc_emlrtRSI = { 116,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_gc_emlrtRSI = { 112,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_hc_emlrtRSI = { 110,/* lineNo */
  "circshift",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\circshift.m"/* pathName */
};

static emlrtRSInfo c1_ic_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c1_jc_emlrtRSI = { 498,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_kc_emlrtRSI = { 500,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_lc_emlrtRSI = { 511,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_mc_emlrtRSI = { 512,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_nc_emlrtRSI = { 513,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_oc_emlrtRSI = { 520,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_pc_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c1_qc_emlrtRSI = { 848,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_rc_emlrtRSI = { 830,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_sc_emlrtRSI = { 828,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_tc_emlrtRSI = { 827,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_uc_emlrtRSI = { 820,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_vc_emlrtRSI = { 817,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_wc_emlrtRSI = { 811,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_xc_emlrtRSI = { 798,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_yc_emlrtRSI = { 795,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ad_emlrtRSI = { 783,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_bd_emlrtRSI = { 782,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_cd_emlrtRSI = { 773,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_dd_emlrtRSI = { 769,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ed_emlrtRSI = { 768,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_fd_emlrtRSI = { 766,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_gd_emlrtRSI = { 763,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_hd_emlrtRSI = { 761,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_id_emlrtRSI = { 760,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_jd_emlrtRSI = { 757,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_kd_emlrtRSI = { 754,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ld_emlrtRSI = { 749,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_md_emlrtRSI = { 750,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_nd_emlrtRSI = { 746,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_od_emlrtRSI = { 731,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_pd_emlrtRSI = { 726,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_qd_emlrtRSI = { 725,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_rd_emlrtRSI = { 863,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_sd_emlrtRSI = { 866,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_td_emlrtRSI = { 867,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ud_emlrtRSI = { 868,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_vd_emlrtRSI = { 883,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_wd_emlrtRSI = { 884,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_xd_emlrtRSI = { 894,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_yd_emlrtRSI = { 903,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ae_emlrtRSI = { 872,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_be_emlrtRSI = { 447,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_ce_emlrtRSI = { 452,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_de_emlrtRSI = { 15,/* lineNo */
  "num2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\num2str.m"/* pathName */
};

static emlrtRSInfo c1_ee_emlrtRSI = { 53,/* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

static emlrtRSInfo c1_fe_emlrtRSI = { 1036,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ge_emlrtRSI = { 88,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_he_emlrtRSI = { 117,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ie_emlrtRSI = { 128,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_je_emlrtRSI = { 133,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ke_emlrtRSI = { 135,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_le_emlrtRSI = { 139,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_me_emlrtRSI = { 31,/* lineNo */
  "NameValueParser",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\+codegen\\NameValueParser"
  ".m"                                 /* pathName */
};

static emlrtRSInfo c1_ne_emlrtRSI = { 39,/* lineNo */
  "NameValueParserInterface",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NameValueParserInterface."
  "m"                                  /* pathName */
};

static emlrtRSInfo c1_oe_emlrtRSI = { 357,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_pe_emlrtRSI = { 171,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_qe_emlrtRSI = { 175,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_re_emlrtRSI = { 180,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_se_emlrtRSI = { 190,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_te_emlrtRSI = { 195,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ue_emlrtRSI = { 201,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ve_emlrtRSI = { 217,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_we_emlrtRSI = { 222,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_xe_emlrtRSI = { 234,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ye_emlrtRSI = { 244,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_af_emlrtRSI = { 252,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_bf_emlrtRSI = { 271,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_cf_emlrtRSI = { 297,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_df_emlrtRSI = { 304,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ef_emlrtRSI = { 305,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ff_emlrtRSI = { 306,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_gf_emlrtRSI = { 45,/* lineNo */
  "PriorityQueue",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\PriorityQueue.m"/* pathName */
};

static emlrtRSInfo c1_hf_emlrtRSI = { 489,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_if_emlrtRSI = { 492,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_jf_emlrtRSI = { 493,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_kf_emlrtRSI = { 466,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_lf_emlrtRSI = { 556,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_mf_emlrtRSI = { 1047,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_nf_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c1_of_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c1_pf_emlrtRSI = { 74,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c1_qf_emlrtRSI = { 99,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c1_rf_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c1_sf_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c1_tf_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c1_uf_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c1_vf_emlrtRSI = { 71,/* lineNo */
  "PriorityQueue",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\PriorityQueue.m"/* pathName */
};

static emlrtRSInfo c1_wf_emlrtRSI = { 345,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_xf_emlrtRSI = { 344,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_yf_emlrtRSI = { 37,/* lineNo */
  "flip",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\flip.m"/* pathName */
};

static emlrtRSInfo c1_ag_emlrtRSI = { 506,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_bg_emlrtRSI = { 508,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_cg_emlrtRSI = { 509,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_dg_emlrtRSI = { 460,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_eg_emlrtRSI = { 462,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_fg_emlrtRSI = { 464,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_gg_emlrtRSI = { 562,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_hg_emlrtRSI = { 553,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ig_emlrtRSI = { 559,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_jg_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_kg_emlrtRSI = { 144,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_lg_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_mg_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c1_ng_emlrtRSI = { 415,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_og_emlrtRSI = { 426,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_pg_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c1_qg_emlrtRSI = { 328,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_rg_emlrtRSI = { 332,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_sg_emlrtRSI = { 500,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_tg_emlrtRSI = { 501,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_ug_emlrtRSI = { 511,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_vg_emlrtRSI = { 39,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c1_wg_emlrtRSI = { 113,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c1_xg_emlrtRSI = { 22,/* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c1_yg_emlrtRSI = { 25,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRSInfo c1_ah_emlrtRSI = { 40,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRSInfo c1_bh_emlrtRSI = { 41,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRSInfo c1_ch_emlrtRSI = { 47,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRSInfo c1_dh_emlrtRSI = { 48,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRSInfo c1_eh_emlrtRSI = { 49,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRSInfo c1_fh_emlrtRSI = { 50,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRSInfo c1_gh_emlrtRSI = { 51,/* lineNo */
  "Scheduler/Planner",                 /* fcnName */
  "#aSPPAOAIW:229"                     /* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 128,/* lineNo */
  57,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "validateAStarBuiltinCostFunction",  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+internal\\+validation\\validateAStarBuiltinCostFunction.m"/* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 17,/* lineNo */
  20,                                  /* colNo */
  "validateAStarBuiltinCostFunction",  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+internal\\+validation\\validateAStarBuiltinCostFunction.m"/* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 57,/* lineNo */
  25,                                  /* colNo */
  "strcmp",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 151,/* lineNo */
  45,                                  /* colNo */
  "strcmp",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pName */
};

static emlrtRTEInfo c1_f_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_g_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "validateAStarBuiltinCostFunction",  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+internal\\+validation\\validateAStarBuiltinCostFunction.m"/* pName */
};

static emlrtRTEInfo c1_h_emlrtRTEI = { 766,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_i_emlrtRTEI = { 773,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_j_emlrtRTEI = { 778,/* lineNo */
  26,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_k_emlrtRTEI = { 778,/* lineNo */
  51,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_l_emlrtRTEI = { 782,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_m_emlrtRTEI = { 788,/* lineNo */
  30,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_n_emlrtRTEI = { 422,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_o_emlrtRTEI = { 834,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_p_emlrtRTEI = { 817,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_q_emlrtRTEI = { 841,/* lineNo */
  28,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_r_emlrtRTEI = { 820,/* lineNo */
  28,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_s_emlrtRTEI = { 841,/* lineNo */
  54,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_t_emlrtRTEI = { 820,/* lineNo */
  68,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_u_emlrtRTEI = { 825,/* lineNo */
  30,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_v_emlrtRTEI = { 848,/* lineNo */
  26,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_w_emlrtRTEI = { 825,/* lineNo */
  55,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_x_emlrtRTEI = { 848,/* lineNo */
  69,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_y_emlrtRTEI = { 830,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_ab_emlrtRTEI = { 828,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_bb_emlrtRTEI = { 768,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_cb_emlrtRTEI = { 778,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_db_emlrtRTEI = { 820,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_eb_emlrtRTEI = { 817,/* lineNo */
  35,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_fb_emlrtRTEI = { 874,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_gb_emlrtRTEI = { 875,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_hb_emlrtRTEI = { 869,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_ib_emlrtRTEI = { 870,/* lineNo */
  21,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_jb_emlrtRTEI = { 1031,/* lineNo */
  24,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_kb_emlrtRTEI = { 92,/* lineNo */
  39,                                  /* colNo */
  "PriorityQueue",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\PriorityQueue.m"/* pName */
};

static emlrtRTEInfo c1_lb_emlrtRTEI = { 369,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_mb_emlrtRTEI = { 227,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_nb_emlrtRTEI = { 297,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_ob_emlrtRTEI = { 303,/* lineNo */
  46,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_pb_emlrtRTEI = { 304,/* lineNo */
  39,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_qb_emlrtRTEI = { 360,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_rb_emlrtRTEI = { 304,/* lineNo */
  67,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_sb_emlrtRTEI = { 304,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_tb_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_ub_emlrtRTEI = { 478,/* lineNo */
  18,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_vb_emlrtRTEI = { 476,/* lineNo */
  18,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_wb_emlrtRTEI = { 344,/* lineNo */
  30,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_xb_emlrtRTEI = { 344,/* lineNo */
  44,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_yb_emlrtRTEI = { 345,/* lineNo */
  37,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_ac_emlrtRTEI = { 345,/* lineNo */
  51,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_bc_emlrtRTEI = { 344,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_cc_emlrtRTEI = { 332,/* lineNo */
  38,                                  /* colNo */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pName */
};

static emlrtRTEInfo c1_dc_emlrtRTEI = { 500,/* lineNo */
  42,                                  /* colNo */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pName */
};

static emlrtRTEInfo c1_ec_emlrtRTEI = { 500,/* lineNo */
  13,                                  /* colNo */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pName */
};

static emlrtRTEInfo c1_fc_emlrtRTEI = { 511,/* lineNo */
  24,                                  /* colNo */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pName */
};

static emlrtRTEInfo c1_gc_emlrtRTEI = { 512,/* lineNo */
  17,                                  /* colNo */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pName */
};

static emlrtRTEInfo c1_hc_emlrtRTEI = { 121,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c1_ic_emlrtRTEI = { 128,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c1_jc_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c1_kc_emlrtRTEI = { 511,/* lineNo */
  13,                                  /* colNo */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pName */
};

static emlrtRTEInfo c1_lc_emlrtRTEI = { 116,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c1_mc_emlrtRTEI = { 557,/* lineNo */
  13,                                  /* colNo */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pName */
};

static emlrtRTEInfo c1_nc_emlrtRTEI = { 428,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_oc_emlrtRTEI = { 432,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_pc_emlrtRTEI = { 436,/* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_qc_emlrtRTEI = { 440,/* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtRTEInfo c1_rc_emlrtRTEI = { 57,/* lineNo */
  15,                                  /* colNo */
  "Scheduler/Planner",                 /* fName */
  "#aSPPAOAIW:229"                     /* pName */
};

static emlrtRTEInfo c1_sc_emlrtRTEI = { 50,/* lineNo */
  5,                                   /* colNo */
  "Scheduler/Planner",                 /* fName */
  "#aSPPAOAIW:229"                     /* pName */
};

static emlrtRTEInfo c1_tc_emlrtRTEI = { 51,/* lineNo */
  5,                                   /* colNo */
  "Scheduler/Planner",                 /* fName */
  "#aSPPAOAIW:229"                     /* pName */
};

static emlrtBCInfo c1_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "validateAStarBuiltinCostFunction",  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+internal\\+validation\\validateAStarBuiltinCostFunction.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c1_emlrtECI = { -1, /* nDims */
  848,                                 /* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_b_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  848,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_emlrtDCI = { 848,/* lineNo */
  28,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_b_emlrtECI = { -1,/* nDims */
  841,                                 /* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_c_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  841,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 841,/* lineNo */
  30,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_c_emlrtECI = { -1,/* nDims */
  825,                                 /* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_d_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  825,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 825,/* lineNo */
  32,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_d_emlrtECI = { -1,/* nDims */
  820,                                 /* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_e_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  820,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_d_emlrtDCI = { 820,/* lineNo */
  30,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_e_emlrtECI = { -1,/* nDims */
  788,                                 /* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_f_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  788,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_e_emlrtDCI = { 788,/* lineNo */
  32,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_f_emlrtECI = { -1,/* nDims */
  778,                                 /* lineNo */
  17,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_g_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  778,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_f_emlrtDCI = { 778,/* lineNo */
  28,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  778,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_g_emlrtDCI = { 778,/* lineNo */
  58,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  778,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_h_emlrtDCI = { 422,/* lineNo */
  30,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_j_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  422,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_i_emlrtDCI = { 353,/* lineNo */
  45,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_k_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  353,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_j_emlrtDCI = { 360,/* lineNo */
  54,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_l_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  360,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_m_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  817,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_k_emlrtDCI = { 817,/* lineNo */
  35,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_n_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  834,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_l_emlrtDCI = { 834,/* lineNo */
  31,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_o_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  890,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_m_emlrtDCI = { 890,/* lineNo */
  35,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_p_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  890,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_n_emlrtDCI = { 890,/* lineNo */
  49,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_q_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  891,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_o_emlrtDCI = { 891,/* lineNo */
  36,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_r_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  891,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_p_emlrtDCI = { 891,/* lineNo */
  51,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_s_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  1037,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_q_emlrtDCI = { 1037,/* lineNo */
  47,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_t_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  350,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_r_emlrtDCI = { 350,/* lineNo */
  38,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_g_emlrtECI = { -1,/* nDims */
  304,                                 /* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_u_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  304,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_s_emlrtDCI = { 304,/* lineNo */
  41,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_h_emlrtECI = { -1,/* nDims */
  303,                                 /* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_v_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  303,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_t_emlrtDCI = { 303,/* lineNo */
  48,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_w_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  258,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_x_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  258,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_y_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  284,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_ab_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  284,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_bb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  283,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_cb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  283,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_db_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  282,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_eb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  282,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  271,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_hb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  261,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_ib_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  261,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_jb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  260,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_kb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  260,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_lb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  259,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_mb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  259,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_nb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  223,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_u_emlrtDCI = { 223,/* lineNo */
  38,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ob_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  223,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_v_emlrtDCI = { 223,/* lineNo */
  27,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  208,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_sb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  197,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_tb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  179,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_w_emlrtDCI = { 179,/* lineNo */
  46,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ub_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  179,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_x_emlrtDCI = { 179,/* lineNo */
  57,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_vb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  179,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_y_emlrtDCI = { 179,/* lineNo */
  20,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_wb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  179,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_ab_emlrtDCI = { 179,/* lineNo */
  31,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_xb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  180,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_bb_emlrtDCI = { 180,/* lineNo */
  28,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_yb_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  180,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_cb_emlrtDCI = { 180,/* lineNo */
  64,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ac_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  180,                                 /* lineNo */
  107,                                 /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_db_emlrtDCI = { 180,/* lineNo */
  107,                                 /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_bc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  180,                                 /* lineNo */
  147,                                 /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_eb_emlrtDCI = { 180,/* lineNo */
  147,                                 /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_cc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  181,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_fb_emlrtDCI = { 181,/* lineNo */
  27,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_dc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  181,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_gb_emlrtDCI = { 181,/* lineNo */
  38,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ec_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  182,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_hb_emlrtDCI = { 182,/* lineNo */
  20,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_fc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  182,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_ib_emlrtDCI = { 182,/* lineNo */
  31,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c1_jb_emlrtDCI = { 92,/* lineNo */
  48,                                  /* colNo */
  "PriorityQueue",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\PriorityQueue.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c1_kb_emlrtDCI = { 92,/* lineNo */
  48,                                  /* colNo */
  "PriorityQueue",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\PriorityQueue.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c1_gc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  291,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_lb_emlrtDCI = { 291,/* lineNo */
  35,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_hc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  291,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_mb_emlrtDCI = { 291,/* lineNo */
  46,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ic_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  203,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_nb_emlrtDCI = { 203,/* lineNo */
  35,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_jc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  203,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_ob_emlrtDCI = { 203,/* lineNo */
  46,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_kc_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  208,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_pb_emlrtDCI = { 208,/* lineNo */
  43,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_lc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  204,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_qb_emlrtDCI = { 204,/* lineNo */
  35,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_mc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  204,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_rb_emlrtDCI = { 204,/* lineNo */
  46,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_nc_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  209,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_sb_emlrtDCI = { 209,/* lineNo */
  43,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_oc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  211,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_tb_emlrtDCI = { 211,/* lineNo */
  50,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_pc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  211,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ub_emlrtDCI = { 211,/* lineNo */
  60,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_qc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  231,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_rc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  232,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_sc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  525,                                 /* lineNo */
  92,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_tc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  525,                                 /* lineNo */
  105,                                 /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_uc_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  304,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_vb_emlrtDCI = { 304,/* lineNo */
  80,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_vc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  239,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_wc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  239,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_xc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  255,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_yc_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  255,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_ad_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  274,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_bd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  274,                                 /* lineNo */
  68,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_cd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  285,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_dd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  285,                                 /* lineNo */
  93,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_ed_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  285,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_fd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  285,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_gd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  262,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_hd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  262,                                 /* lineNo */
  93,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_id_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  262,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_jd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  262,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_kd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  263,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_ld_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  263,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_md_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  268,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_nd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  269,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_od_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  270,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_wb_emlrtDCI = { 458,/* lineNo */
  20,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c1_xb_emlrtDCI = { 474,/* lineNo */
  20,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c1_i_emlrtECI = { -1,/* nDims */
  345,                                 /* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtECInfo c1_j_emlrtECI = { -1,/* nDims */
  344,                                 /* lineNo */
  13,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pName */
};

static emlrtBCInfo c1_pd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  315,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_yb_emlrtDCI = { 315,/* lineNo */
  42,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_qd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  315,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ac_emlrtDCI = { 315,/* lineNo */
  53,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_rd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  332,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_bc_emlrtDCI = { 332,/* lineNo */
  46,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_sd_emlrtBCI = { 1,/* iFirst */
  4000,                                /* iLast */
  332,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_cc_emlrtDCI = { 332,/* lineNo */
  57,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c1_dc_emlrtDCI = { 428,/* lineNo */
  36,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_td_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  428,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ec_emlrtDCI = { 436,/* lineNo */
  32,                                  /* colNo */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ud_emlrtBCI = { 1,/* iFirst */
  16000000,                            /* iLast */
  436,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "plannerAStarGrid",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_vd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  511,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m",                           /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_wd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  75,                                  /* colNo */
  "",                                  /* aName */
  "MapInterface",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m",                           /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_fc_emlrtDCI = { 57,/* lineNo */
  17,                                  /* colNo */
  "Scheduler/Planner",                 /* fName */
  "#aSPPAOAIW:229",                    /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_xd_emlrtBCI = { 1,/* iFirst */
  5000,                                /* iLast */
  57,                                  /* lineNo */
  17,                                  /* colNo */
  "wayPoints",                         /* aName */
  "Scheduler/Planner",                 /* fName */
  "#aSPPAOAIW:229",                    /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c1_k_emlrtECI = { -1,/* nDims */
  57,                                  /* lineNo */
  5,                                   /* colNo */
  "Scheduler/Planner",                 /* fName */
  "#aSPPAOAIW:229"                     /* pName */
};

static emlrtRSInfo c1_hh_emlrtRSI = { 512,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_ih_emlrtRSI = { 778,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_jh_emlrtRSI = { 303,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\+nav\\+algs\\+internal\\+codegen\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_kh_emlrtRSI = { 825,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_lh_emlrtRSI = { 841,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_mh_emlrtRSI = { 788,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_nh_emlrtRSI = { 440,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_oh_emlrtRSI = { 436,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_ph_emlrtRSI = { 432,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_qh_emlrtRSI = { 428,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static emlrtRSInfo c1_rh_emlrtRSI = { 557,/* lineNo */
  "MapInterface",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\autonomous\\maplib\\internal\\+matlabshared\\+autonomous\\+internal\\MapInte"
  "rface.m"                            /* pathName */
};

static emlrtRSInfo c1_sh_emlrtRSI = { 834,/* lineNo */
  "plannerAStarGrid",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\nav\\navalgs2\\plannerAStarGrid.m"/* pathName */
};

static char_T c1_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
  'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

static char_T c1_cv1[52] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l', 'g',
  's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r', 'g', 'r',
  'i', 'd', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a', 'i', 'l',
  'e', 'd', 'L', 'e', 's', 's', 'T', 'h', 'a', 'n' };

static char_T c1_cv2[16] = { 'N', 'u', 'm', 'N', 'o', 'd', 'e', 's', 'E', 'x',
  'p', 'l', 'o', 'r', 'e', 'd' };

static char_T c1_cv3[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I', 'n',
  't', 'e', 'g', 'e', 'r' };

static char_T c1_cv4[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n', 'E',
  'r', 'r', 'o', 'r' };

static char_T c1_cv5[64] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l', 'g',
  's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r', 'g', 'r',
  'i', 'd', ':', 'U', 's', 'e', 'r', 'D', 'i', 's', 't', 'a', 'n', 'c', 'e', 'F',
  'u', 'n', 'c', 't', 'i', 'o', 'n', 'R', 'e', 't', 'u', 'r', 'n', 's', 'N', 'a',
  'N', 'O', 'r', 'I', 'n', 'f' };

static char_T c1_cv6[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'g', 'r', 'i',
  'd', '2', 'w', 'o', 'r', 'l', 'd', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

static char_T c1_cv7[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
  'n', 'e', 'm', 'p', 't', 'y' };

static char_T c1_cv8[20] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
  'e', 'r', ' ', '2', ',', ' ', 'i', 'd', 'x', ',' };

static char_T c1_cv9[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'g', 'r', 'i',
  'd', '2', 'w', 'o', 'r', 'l', 'd', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'I', 'n', 't', 'e', 'g', 'e', 'r' };

static char_T c1_cv10[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
  'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm', 'e',
  'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

/* Function Declarations */
static void initialize_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void initialize_params_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static void mdl_start_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void mdl_terminate_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c1_aSPPAOAIW
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_aSPPAOAIW
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void enable_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void disable_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void sf_gateway_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void ext_mode_exec_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static void c1_update_jit_animation_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static void c1_do_animation_call_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static void set_sim_state_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const mxArray *c1_st);
static void initSimStructsc1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static c1_binaryOccupancyMap *c1_binaryOccupancyMap_binaryOccupancyMap
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance, c1_binaryOccupancyMap *c1_obj,
   boolean_T c1_c_varargin_1[16000000]);
static c1_matlabshared_autonomous_internal_CircularBuffer
  *c1_CircularBuffer_CircularBuffer(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  c1_matlabshared_autonomous_internal_CircularBuffer *c1_obj,
  c1_matlabshared_autonomous_internal_CircularBufferIndex *c1_index, boolean_T
  c1_constVal);
static void c1_binaryOccupancyMap_postConstructSet(SFc1_aSPPAOAIWInstanceStruct *
  chartInstance, c1_binaryOccupancyMap *c1_obj, boolean_T c1_c_varargin_1
  [16000000]);
static void c1_MapInterface_set_LocalOriginInWorld(SFc1_aSPPAOAIWInstanceStruct *
  chartInstance, c1_binaryOccupancyMap *c1_obj);
static void c1_MapInterface_world2grid(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_binaryOccupancyMap *c1_obj, real_T c1_pos[2], real_T
  c1_idx[2]);
static c1_plannerAStarGrid *c1_plannerAStarGrid_plannerAStarGrid
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance, const emlrtStack *c1_sp,
   c1_plannerAStarGrid *c1_obj, c1_binaryOccupancyMap *c1_c_varargin_1);
static void c1_plannerAStarGrid_setInputState(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_plannerAStarGrid *c1_obj);
static void c1_ind2sub(SFc1_aSPPAOAIWInstanceStruct *chartInstance, real_T
  c1_ndx[16000000], int32_T c1_varargout_1[16000000], int32_T c1_varargout_2
  [16000000], int32_T c1_b_varargout_3[16000000]);
static void c1_validateAStarBuiltinCostFunction(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, char_T c1_strVal_data[], int32_T
  c1_strVal_size[2], real_T *c1_idx);
static void c1_plannerAStarGrid_updateMap(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj);
static void c1_circshift(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, boolean_T c1_a[16000000], real_T c1_p[2], boolean_T c1_b_a
  [16000000]);
static void c1_check_forloop_overflow_error(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp);
static void c1_plannerAStarGrid_plan(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj, real_T c1_start[2],
  real_T c1_goal[2], c1_emxArray_real_T *c1_path);
static void c1_plannerAStarGrid_planOM(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj, real_T
  c1_StartInGrid[2], real_T c1_GoalInGrid[2], c1_emxArray_real_T *c1_pathOut,
  c1_s5OFbBsTtftXcO0wOIk58PB *c1_b_debugInfo);
static void c1_plannerAStarGrid_validateStartGoal(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj,
  c1_binaryOccupancyMap *c1_c_map, real_T c1_StartInGrid[2], real_T
  c1_GoalInGrid[2]);
static real_T c1_plannerAStarGrid_getNodeCostOMDefault
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance, const emlrtStack *c1_sp,
   c1_plannerAStarGrid *c1_obj, real_T c1_currentNode);
static c1_nav_algs_internal_plannerAStarGrid
  *c1_b_plannerAStarGrid_plannerAStarGrid(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_nav_algs_internal_plannerAStarGrid *c1_obj, real_T
  c1_c_map[16000000], real_T c1_obstacleThreshold);
static void c1_b_ind2sub(SFc1_aSPPAOAIWInstanceStruct *chartInstance, real_T
  c1_ndx[16000000], int32_T c1_varargout_1[16000000], int32_T c1_varargout_2
  [16000000]);
static void c1_b_plannerAStarGrid_plan(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_startIn[2], real_T c1_goalIn[2]);
static void c1_plannerAStarGrid_getHeuristicMatrix(SFc1_aSPPAOAIWInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid *
  c1_obj, real_T c1_goalIn[2], real_T c1_Hn[16000000]);
static void c1_plannerAStarGrid_Chebyshev(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, real_T c1_b_pose1[32000000], real_T c1_pose2[32000000], real_T
  c1_dist[16000000]);
static real_T c1_plannerAStarGrid_Euclidean(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, real_T c1_b_pose1[2], real_T
  c1_pose2[2]);
static real_T c1_sumColumnB(SFc1_aSPPAOAIWInstanceStruct *chartInstance, real_T
  c1_b_x[2]);
static void c1_plannerAStarGrid_getNeighbors(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_Neighbors_data[], int32_T c1_Neighbors_size[2], real_T
  *c1_NumNeighbors);
static void c1_plannerAStarGrid_reconstructPath(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_CurrentRow, real_T c1_CurrentCol, real_T c1_startIn[2]);
static real_T c1_plannerAStarGrid_gcostValue(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_CurrentRow, real_T c1_CurrentCol, real_T c1_i, real_T c1_j);
static void c1_indexShapeCheck(SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void c1_warning(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp);
static void c1_MapInterface_grid2world(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_idx, c1_emxArray_real_T *c1_pos);
static void c1_MapInterface_grid2worldImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_worldXY);
static void c1_MapInterface_grid2localImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_localXY);
static void c1_MapInterface_local2worldImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_localXY, c1_emxArray_real_T *c1_worldXY);
static void c1_plannerAStarGrid_get_PathInGrid(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj,
  c1_emxArray_real_T *c1_val);
static void c1_plannerAStarGrid_get_PathXY(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj,
  c1_emxArray_real_T *c1_val);
static void c1_b_MapInterface_grid2worldImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_worldXY);
static void c1_b_MapInterface_grid2localImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_localXY);
static void c1_handle_matlabCodegenDestructor(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_PriorityQueue
  *c1_obj);
static void c1_planPath(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, boolean_T c1_c_mapMatrix[16000000], real_T c1_b_startPos[2],
  real_T c1_b_endPos[2], real_T c1_wayPoints[10000]);
static void c1_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_a__output_of_sprintf_, const char_T *c1_identifier, char_T
  c1_c_y[23]);
static void c1_b_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, char_T c1_c_y[23]);
static void c1_c_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_waypoints, const char_T *c1_identifier, real_T c1_c_y
  [10000]);
static void c1_d_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_c_y
  [10000]);
static void c1_e_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_prevEndPos, const char_T *c1_identifier, boolean_T
  *c1_svPtr, real_T c1_c_y[2]);
static void c1_f_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr, real_T c1_c_y[2]);
static void c1_g_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_waypointsInternal, const char_T *c1_identifier, boolean_T *
  c1_svPtr, real_T c1_c_y[10000]);
static void c1_h_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr, real_T c1_c_y[10000]);
static uint8_T c1_i_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_is_active_c1_aSPPAOAIW, const char_T *c1_identifier);
static uint8_T c1_j_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance);
static void c1_chart_data_browse_helper(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static const mxArray *c1_sprintf(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static const mxArray *c1_feval(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static void c1_b_feval(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static void c1_b_circshift(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, boolean_T c1_a[16000000], real_T c1_p[2]);
static void c1_emxEnsureCapacity_real_T(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxEnsureCapacity_int32_T(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_int32_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxEnsureCapacity_real_T1(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_real_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray, int32_T c1_numDimensions,
  const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_real_T1(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray, int32_T
  c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_int32_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_emxArray_int32_T **c1_pEmxArray, int32_T
  c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxFree_real_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  c1_emxArray_real_T **c1_pEmxArray);
static void c1_emxFree_int32_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  c1_emxArray_int32_T **c1_pEmxArray);
static void c1_emxInitMatrix_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_cell_wrap_34 c1_pMatrix[2], const
  emlrtRTEInfo *c1_srcLocation);
static void c1_emxInitStruct_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_cell_wrap_34 *c1_pStruct, const
  emlrtRTEInfo *c1_srcLocation);
static void c1_emxFreeMatrix_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_cell_wrap_34 c1_pMatrix[2]);
static void c1_emxFreeStruct_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_cell_wrap_34 *c1_pStruct);
static int32_T c1_div_nzp_s32(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  int32_T c1_numerator, int32_T c1_denominator, int32_T c1_EMLOvCount_src_loc,
  uint32_T c1_ssid_src_loc, int32_T c1_offset_src_loc, int32_T c1_length_src_loc);
static int32_T c1_div_s32_ndbzs(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  int32_T c1_numerator, int32_T c1_denominator, int32_T c1_EMLOvCount_src_loc,
  uint32_T c1_ssid_src_loc, int32_T c1_offset_src_loc, int32_T c1_length_src_loc);
static void init_dsm_address_info(SFc1_aSPPAOAIWInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc1_aSPPAOAIWInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c1_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "navigation_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_waypointsInternal_not_empty = false;
  chartInstance->c1_prevStartPos_not_empty = false;
  chartInstance->c1_prevEndPos_not_empty = false;
  chartInstance->c1_is_active_c1_aSPPAOAIW = 0U;
}

static void initialize_params_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  real_T c1_d;
  sf_mex_import_named("mapScalingFactor", sf_mex_get_sfun_param(chartInstance->S,
    0U, 0U), &c1_d, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c1_mapScalingFactor = c1_d;
}

static void mdl_start_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_aSPPAOAIW
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  static const int32_T c1_postfixPredicateTree[5] = { 0, -1, 1, -1, -2 };

  static const int32_T c1_b_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c1_b_condTxtEndIdx[2] = { 482, 495 };

  static const int32_T c1_b_condTxtStartIdx[2] = { 456, 486 };

  static const int32_T c1_condTxtEndIdx[2] = { 417, 449 };

  static const int32_T c1_condTxtStartIdx[2] = { 386, 422 };

  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    42U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 2U, 0U, 3U, 0U,
                  0U, 0U, 0U, 0U, 4U, 2U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1774);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, "planPath",
                     996, -1, 1769);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 260, 284, -1,
                    317, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 319, 341, -1,
                    370, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 453, 495, -1,
                    811, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 385, 449, 2U,
                      0U, c1_condTxtStartIdx, c1_condTxtEndIdx, 5U,
                      c1_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 456, 495, 2U,
                      2U, c1_b_condTxtStartIdx, c1_b_condTxtEndIdx, 3U,
                      c1_b_postfixPredicateTree, false);
}

static void mdl_cleanup_runtime_resources_c1_aSPPAOAIW
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  emlrtStack c1_b_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c1_dv2[10000];
  real_T c1_c_dv[2];
  real_T c1_dv1[2];
  real_T c1_b_k;
  real_T c1_b_x1;
  real_T c1_b_x2;
  real_T c1_d_k;
  real_T c1_x1;
  real_T c1_x2;
  int32_T c1_c_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_k;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_p;
  boolean_T c1_d_p;
  boolean_T c1_e_p;
  boolean_T c1_exitg1;
  boolean_T c1_f_p;
  boolean_T c1_isNewPath;
  boolean_T c1_p;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U, (real_T)
                      (*chartInstance->c1_b_mapMatrix)[c1_i]);
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U,
                      (*chartInstance->c1_endPos)[c1_i1]);
  }

  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U,
                      (*chartInstance->c1_startPos)[c1_i2]);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                     !chartInstance->c1_prevStartPos_not_empty)) {
    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      chartInstance->c1_prevStartPos[c1_i3] = (*chartInstance->c1_startPos)
        [c1_i3];
    }

    chartInstance->c1_prevStartPos_not_empty = true;
  }

  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 1,
                     !chartInstance->c1_prevEndPos_not_empty)) {
    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      chartInstance->c1_prevEndPos[c1_i4] = (*chartInstance->c1_endPos)[c1_i4];
    }

    chartInstance->c1_prevEndPos_not_empty = true;
  }

  c1_p = false;
  c1_b_p = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 2)) {
    c1_b_k = (real_T)c1_k + 1.0;
    c1_x1 = chartInstance->c1_prevStartPos[(int32_T)c1_b_k - 1];
    c1_x2 = (*chartInstance->c1_startPos)[(int32_T)c1_b_k - 1];
    c1_d_p = (c1_x1 == c1_x2);
    if (!c1_d_p) {
      c1_b_p = false;
      c1_exitg1 = true;
    } else {
      c1_k++;
    }
  }

  if (c1_b_p) {
    c1_p = true;
  }

  if (!covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 0, c1_p)) {
    c1_b_b = true;
  } else {
    c1_c_p = false;
    c1_e_p = true;
    c1_c_k = 0;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_c_k < 2)) {
      c1_d_k = (real_T)c1_c_k + 1.0;
      c1_b_x1 = chartInstance->c1_prevEndPos[(int32_T)c1_d_k - 1];
      c1_b_x2 = (*chartInstance->c1_endPos)[(int32_T)c1_d_k - 1];
      c1_f_p = (c1_b_x1 == c1_b_x2);
      if (!c1_f_p) {
        c1_e_p = false;
        c1_exitg1 = true;
      } else {
        c1_c_k++;
      }
    }

    if (c1_e_p) {
      c1_c_p = true;
    }

    if (!covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 1, c1_c_p)) {
      c1_b_b = true;
    } else {
      c1_b_b = false;
    }
  }

  c1_isNewPath = covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
    c1_b_b);
  if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 2,
                       !chartInstance->c1_waypointsInternal_not_empty) ||
      covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 3, c1_isNewPath))
  {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, true);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 2, true);
    c1_b_st.site = &c1_yg_emlrtRSI;
    for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
      chartInstance->c1_bv[c1_i6] = (*chartInstance->c1_b_mapMatrix)[c1_i6];
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_c_dv[c1_i8] = (*chartInstance->c1_startPos)[c1_i8];
    }

    for (c1_i10 = 0; c1_i10 < 2; c1_i10++) {
      c1_dv1[c1_i10] = (*chartInstance->c1_endPos)[c1_i10];
    }

    c1_planPath(chartInstance, &c1_b_st, chartInstance->c1_bv, c1_c_dv, c1_dv1,
                c1_dv2);
    for (c1_i12 = 0; c1_i12 < 10000; c1_i12++) {
      chartInstance->c1_waypointsInternal[c1_i12] = c1_dv2[c1_i12];
    }

    chartInstance->c1_waypointsInternal_not_empty = true;
  } else {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, false);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 2, false);
  }

  for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
    chartInstance->c1_prevStartPos[c1_i5] = (*chartInstance->c1_startPos)[c1_i5];
  }

  for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
    chartInstance->c1_prevEndPos[c1_i7] = (*chartInstance->c1_endPos)[c1_i7];
  }

  for (c1_i9 = 0; c1_i9 < 10000; c1_i9++) {
    (*chartInstance->c1_waypoints)[c1_i9] = chartInstance->
      c1_waypointsInternal[c1_i9];
  }

  c1_do_animation_call_c1_aSPPAOAIW(chartInstance);
  for (c1_i11 = 0; c1_i11 < 10000; c1_i11++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U,
                      (*chartInstance->c1_waypoints)[c1_i11]);
  }
}

static void ext_mode_exec_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_st;
  c1_st = NULL;
  c1_st = NULL;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_createcellmatrix(5, 1), false);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", *chartInstance->c1_waypoints, 0, 0U,
    1U, 0U, 2, 5000, 2), false);
  sf_mex_setcell(c1_c_y, 0, c1_d_y);
  c1_e_y = NULL;
  if (!chartInstance->c1_prevEndPos_not_empty) {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", chartInstance->c1_prevEndPos, 0,
      0U, 1U, 0U, 2, 1, 2), false);
  }

  sf_mex_setcell(c1_c_y, 1, c1_e_y);
  c1_f_y = NULL;
  if (!chartInstance->c1_prevEndPos_not_empty) {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", chartInstance->c1_prevStartPos, 0,
      0U, 1U, 0U, 2, 1, 2), false);
  }

  sf_mex_setcell(c1_c_y, 2, c1_f_y);
  c1_g_y = NULL;
  if (!chartInstance->c1_waypointsInternal_not_empty) {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_g_y, sf_mex_create("y",
      chartInstance->c1_waypointsInternal, 0, 0U, 1U, 0U, 2, 5000, 2), false);
  }

  sf_mex_setcell(c1_c_y, 3, c1_g_y);
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_aSPPAOAIW, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_c_y, 4, c1_h_y);
  sf_mex_assign(&c1_st, c1_c_y, false);
  return c1_st;
}

static void set_sim_state_c1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T c1_dv3[10000];
  real_T c1_dv1[2];
  real_T c1_dv2[2];
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
                        "waypoints", chartInstance->c1_b_dv);
  for (c1_i = 0; c1_i < 10000; c1_i++) {
    (*chartInstance->c1_waypoints)[c1_i] = chartInstance->c1_b_dv[c1_i];
  }

  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
                        "prevEndPos", &chartInstance->c1_prevEndPos_not_empty,
                        c1_dv1);
  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    chartInstance->c1_prevEndPos[c1_i1] = c1_dv1[c1_i1];
  }

  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 2)),
                        "prevStartPos",
                        &chartInstance->c1_prevStartPos_not_empty, c1_dv2);
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    chartInstance->c1_prevStartPos[c1_i2] = c1_dv2[c1_i2];
  }

  c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 3)),
                        "waypointsInternal",
                        &chartInstance->c1_waypointsInternal_not_empty, c1_dv3);
  for (c1_i3 = 0; c1_i3 < 10000; c1_i3++) {
    chartInstance->c1_waypointsInternal[c1_i3] = c1_dv3[c1_i3];
  }

  chartInstance->c1_is_active_c1_aSPPAOAIW = c1_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 4)), "is_active_c1_aSPPAOAIW");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc1_aSPPAOAIW(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static c1_binaryOccupancyMap *c1_binaryOccupancyMap_binaryOccupancyMap
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance, c1_binaryOccupancyMap *c1_obj,
   boolean_T c1_c_varargin_1[16000000])
{
  c1_binaryOccupancyMap *c1_b_obj;
  c1_binaryOccupancyMap *c1_c_obj;
  c1_binaryOccupancyMap *c1_d_obj;
  c1_binaryOccupancyMap *c1_e_obj;
  c1_binaryOccupancyMap *c1_f_obj;
  c1_binaryOccupancyMap *c1_g_obj;
  c1_binaryOccupancyMap *c1_h_obj;
  c1_binaryOccupancyMap *c1_this;
  c1_matlabshared_autonomous_internal_CircularBufferIndex *c1_b_this;
  c1_matlabshared_autonomous_internal_CircularBufferIndex *c1_i_obj;
  c1_matlabshared_autonomous_internal_CircularBufferIndex *c1_j_obj;
  c1_matlabshared_autonomous_internal_CircularBufferIndex *c1_k_obj;
  real_T c1_c_y[2];
  real_T c1_b_x;
  real_T c1_c_x;
  int32_T c1_b_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_k;
  c1_b_obj = c1_obj;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_b_obj->HasParent = false;
  c1_d_obj = c1_b_obj;
  c1_b_obj = c1_d_obj;
  c1_e_obj = c1_b_obj;
  c1_b_obj = c1_e_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_b_obj->UseGPU = false;
  c1_f_obj = c1_b_obj;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_f_obj->SharedProperties.GridOriginInLocal[c1_i] = 0.0;
  }

  c1_g_obj = c1_b_obj;
  c1_h_obj = c1_g_obj;
  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_h_obj->SharedProperties.LocalOriginInWorld[c1_i1] = 0.0;
  }

  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_c_y[c1_i2] = -0.5;
  }

  for (c1_k = 0; c1_k < 2; c1_k++) {
    c1_b_k = c1_k;
    c1_b_x = c1_c_y[c1_b_k];
    c1_c_x = c1_b_x;
    c1_c_x = muDoubleScalarCeil(c1_c_x);
    c1_c_y[c1_b_k] = c1_c_x;
  }

  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    c1_h_obj->SharedProperties.LocalOriginInWorldInternal[c1_i3] = c1_c_y[c1_i3]
      / c1_b_mapScalingFactor;
  }

  c1_i_obj = &c1_b_obj->Index;
  c1_j_obj = c1_i_obj;
  c1_k_obj = c1_j_obj;
  c1_j_obj = c1_k_obj;
  c1_b_this = c1_j_obj;
  c1_j_obj = c1_b_this;
  for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
    c1_j_obj->Head[c1_i4] = 1.0;
  }

  c1_j_obj->DropEntireMap = false;
  for (c1_i5 = 0; c1_i5 < 4; c1_i5++) {
    c1_j_obj->NewRegions[c1_i5] = 0.0;
  }

  for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
    c1_j_obj->DropTwoRegions[c1_i6] = false;
  }

  c1_b_obj->DefaultValueInternal = false;
  c1_CircularBuffer_CircularBuffer(chartInstance, &c1_b_obj->Buffer,
    &c1_b_obj->Index, c1_b_obj->DefaultValueInternal);
  for (c1_i7 = 0; c1_i7 < 16000000; c1_i7++) {
    chartInstance->c1_b_varargin_1[c1_i7] = c1_c_varargin_1[c1_i7];
  }

  c1_binaryOccupancyMap_postConstructSet(chartInstance, c1_b_obj,
    chartInstance->c1_b_varargin_1);
  return c1_b_obj;
}

static c1_matlabshared_autonomous_internal_CircularBuffer
  *c1_CircularBuffer_CircularBuffer(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  c1_matlabshared_autonomous_internal_CircularBuffer *c1_obj,
  c1_matlabshared_autonomous_internal_CircularBufferIndex *c1_index, boolean_T
  c1_constVal)
{
  static char_T c1_b_cv[7] = { 'l', 'o', 'g', 'i', 'c', 'a', 'l' };

  c1_matlabshared_autonomous_internal_CircularBuffer *c1_b_obj;
  c1_matlabshared_autonomous_internal_CircularBuffer *c1_c_obj;
  c1_matlabshared_autonomous_internal_CircularBuffer *c1_this;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  boolean_T c1_a;
  c1_b_obj = c1_obj;
  c1_a = c1_constVal;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    chartInstance->c1_mat[c1_i] = c1_a;
  }

  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_b_obj->Index = c1_index;
  c1_b_obj->ConstVal = c1_constVal;
  for (c1_i1 = 0; c1_i1 < 7; c1_i1++) {
    c1_b_obj->DataType[c1_i1] = c1_b_cv[c1_i1];
  }

  for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
    c1_b_obj->Buffer[c1_i2] = chartInstance->c1_mat[c1_i2];
  }

  return c1_b_obj;
}

static void c1_binaryOccupancyMap_postConstructSet(SFc1_aSPPAOAIWInstanceStruct *
  chartInstance, c1_binaryOccupancyMap *c1_obj, boolean_T c1_c_varargin_1
  [16000000])
{
  c1_binaryOccupancyMap *c1_b_obj;
  c1_binaryOccupancyMap *c1_c_obj;
  c1_binaryOccupancyMap *c1_d_obj;
  int32_T c1_i;
  int32_T c1_i1;
  (void)chartInstance;
  c1_b_obj = c1_obj;
  c1_c_obj = c1_b_obj;
  c1_d_obj = c1_c_obj;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    c1_d_obj->Buffer.Buffer[c1_i] = c1_c_varargin_1[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_d_obj->Index.Head[c1_i1] = 1.0;
  }
}

static void c1_MapInterface_set_LocalOriginInWorld(SFc1_aSPPAOAIWInstanceStruct *
  chartInstance, c1_binaryOccupancyMap *c1_obj)
{
  c1_binaryOccupancyMap *c1_b_obj;
  real_T c1_c_y[2];
  real_T c1_b_x;
  real_T c1_c_x;
  int32_T c1_b_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_k;
  (void)chartInstance;
  c1_b_obj = c1_obj;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_b_obj->SharedProperties.LocalOriginInWorld[c1_i] = -10.0;
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_c_y[c1_i1] = -1000.5;
  }

  for (c1_k = 0; c1_k < 2; c1_k++) {
    c1_b_k = c1_k;
    c1_b_x = c1_c_y[c1_b_k];
    c1_c_x = c1_b_x;
    c1_c_x = muDoubleScalarCeil(c1_c_x);
    c1_c_y[c1_b_k] = c1_c_x;
  }

  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_b_obj->SharedProperties.LocalOriginInWorldInternal[c1_i2] = c1_c_y[c1_i2]
      / c1_b_mapScalingFactor;
  }
}

static void c1_MapInterface_world2grid(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_binaryOccupancyMap *c1_obj, real_T c1_pos[2], real_T
  c1_idx[2])
{
  c1_binaryOccupancyMap *c1_b_obj;
  c1_binaryOccupancyMap *c1_c_obj;
  c1_binaryOccupancyMap *c1_d_obj;
  real_T c1_a[4];
  real_T c1_c_x[4];
  real_T c1_gOrig[2];
  real_T c1_gridXY[2];
  real_T c1_locWorld[2];
  real_T c1_xlimit[2];
  real_T c1_ylimit[2];
  real_T c1_absx;
  real_T c1_b_r;
  real_T c1_b_x;
  real_T c1_c_y;
  real_T c1_d_x;
  real_T c1_d_y;
  real_T c1_e_x;
  real_T c1_ex;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_h_x;
  real_T c1_i_x;
  real_T c1_j_k;
  real_T c1_j_x;
  real_T c1_k_x;
  real_T c1_l_x;
  real_T c1_m_x;
  real_T c1_maxval;
  real_T c1_n_x;
  real_T c1_o_x;
  real_T c1_p_x;
  real_T c1_q_x;
  real_T c1_r;
  real_T c1_r_x;
  int32_T c1_b_exponent;
  int32_T c1_b_i;
  int32_T c1_b_idx;
  int32_T c1_b_k;
  int32_T c1_c_k;
  int32_T c1_d_k;
  int32_T c1_e_k;
  int32_T c1_end;
  int32_T c1_exponent;
  int32_T c1_f_k;
  int32_T c1_first;
  int32_T c1_g_k;
  int32_T c1_h_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i_k;
  int32_T c1_k;
  boolean_T c1_s_x[2];
  boolean_T c1_x_data[2];
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  boolean_T c1_e_b;
  boolean_T c1_e_y;
  boolean_T c1_exitg1;
  boolean_T c1_f_b;
  boolean_T c1_g_b;
  boolean_T c1_p;
  (void)chartInstance;
  c1_b_obj = c1_obj;
  c1_c_obj = c1_b_obj;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_locWorld[c1_i] = c1_c_obj->SharedProperties.LocalOriginInWorld[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_locWorld[c1_i1] = c1_pos[c1_i1] - c1_locWorld[c1_i1];
  }

  c1_d_obj = c1_b_obj;
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_gOrig[c1_i2] = c1_d_obj->SharedProperties.GridOriginInLocal[c1_i2];
  }

  c1_xlimit[0] = c1_gOrig[0];
  c1_xlimit[1] = c1_gOrig[0] + 40.0;
  c1_ylimit[0] = c1_gOrig[1];
  c1_ylimit[1] = c1_gOrig[1] + 40.0;
  c1_gridXY[0] = -c1_ylimit[0] + c1_locWorld[1];
  c1_gridXY[1] = -c1_xlimit[0] + c1_locWorld[0];
  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    c1_gridXY[c1_i3] *= 100.0;
  }

  for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
    c1_idx[c1_i4] = c1_gridXY[c1_i4];
  }

  for (c1_k = 0; c1_k < 2; c1_k++) {
    c1_b_k = c1_k;
    c1_b_x = c1_idx[c1_b_k];
    c1_d_x = c1_b_x;
    c1_d_x = muDoubleScalarCeil(c1_d_x);
    c1_idx[c1_b_k] = c1_d_x;
  }

  for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
    c1_c_x[c1_i5] = c1_xlimit[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
    c1_c_x[c1_i6 + 2] = c1_ylimit[c1_i6];
  }

  for (c1_c_k = 0; c1_c_k < 4; c1_c_k++) {
    c1_d_k = c1_c_k;
    c1_e_x = c1_c_x[c1_d_k];
    c1_c_y = muDoubleScalarAbs(c1_e_x);
    c1_a[c1_d_k] = c1_c_y;
  }

  for (c1_i7 = 0; c1_i7 < 4; c1_i7++) {
    c1_a[c1_i7] *= 100.0;
  }

  c1_f_x = c1_a[0];
  c1_g_x = c1_f_x;
  c1_b_b = muDoubleScalarIsNaN(c1_g_x);
  c1_p = !c1_b_b;
  if (c1_p) {
    c1_b_idx = 1;
  } else {
    c1_b_idx = 0;
    c1_e_k = 2;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_e_k < 5)) {
      c1_h_x = c1_a[c1_e_k - 1];
      c1_i_x = c1_h_x;
      c1_c_b = muDoubleScalarIsNaN(c1_i_x);
      c1_b_p = !c1_c_b;
      if (c1_b_p) {
        c1_b_idx = c1_e_k;
        c1_exitg1 = true;
      } else {
        c1_e_k++;
      }
    }
  }

  if (c1_b_idx == 0) {
    c1_maxval = c1_a[0];
  } else {
    c1_first = c1_b_idx - 1;
    c1_ex = c1_a[c1_first];
    c1_i8 = c1_first;
    for (c1_g_k = c1_i8 + 2; c1_g_k < 5; c1_g_k++) {
      if (c1_ex < c1_a[c1_g_k - 1]) {
        c1_ex = c1_a[c1_g_k - 1];
      }
    }

    c1_maxval = c1_ex;
  }

  for (c1_f_k = 0; c1_f_k < 2; c1_f_k++) {
    c1_h_k = c1_f_k;
    c1_l_x = c1_gridXY[c1_h_k];
    c1_d_y = muDoubleScalarAbs(c1_l_x);
    c1_gOrig[c1_h_k] = c1_d_y;
  }

  c1_j_x = c1_maxval;
  c1_k_x = c1_j_x;
  c1_m_x = c1_k_x;
  c1_n_x = c1_m_x;
  c1_o_x = c1_n_x;
  c1_absx = muDoubleScalarAbs(c1_o_x);
  c1_p_x = c1_absx;
  c1_q_x = c1_p_x;
  c1_d_b = muDoubleScalarIsInf(c1_q_x);
  c1_e_b = !c1_d_b;
  c1_r_x = c1_p_x;
  c1_f_b = muDoubleScalarIsNaN(c1_r_x);
  c1_b1 = !c1_f_b;
  c1_g_b = (c1_e_b && c1_b1);
  if (!c1_g_b) {
    c1_r = rtNaN;
  } else if (c1_absx < 4.4501477170144028E-308) {
    c1_r = 4.94065645841247E-324;
  } else {
    frexp(c1_absx, &c1_exponent);
    c1_b_exponent = c1_exponent;
    c1_r = ldexp(1.0, c1_b_exponent - 53);
  }

  c1_b_r = c1_r * 2.0;
  for (c1_i9 = 0; c1_i9 < 2; c1_i9++) {
    c1_s_x[c1_i9] = (c1_gOrig[c1_i9] < c1_b_r);
  }

  for (c1_i10 = 0; c1_i10 < 2; c1_i10++) {
    c1_x_data[c1_i10] = c1_s_x[c1_i10];
  }

  c1_e_y = false;
  c1_i_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_i_k < 2)) {
    c1_j_k = (real_T)c1_i_k + 1.0;
    if (!c1_x_data[(int32_T)c1_j_k - 1]) {
      c1_b2 = true;
    } else {
      c1_b2 = false;
    }

    if (!c1_b2) {
      c1_e_y = true;
      c1_exitg1 = true;
    } else {
      c1_i_k++;
    }
  }

  if (c1_e_y) {
    c1_end = 2;
    for (c1_b_i = 0; c1_b_i < c1_end; c1_b_i++) {
      if (c1_gOrig[c1_b_i] < c1_r * 2.0) {
        c1_idx[c1_b_i] = 1.0;
      }
    }
  }

  c1_idx[0] = 4001.0 - c1_idx[0];
}

static c1_plannerAStarGrid *c1_plannerAStarGrid_plannerAStarGrid
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance, const emlrtStack *c1_sp,
   c1_plannerAStarGrid *c1_obj, c1_binaryOccupancyMap *c1_c_varargin_1)
{
  static char_T c1_b_cv[56] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l', 'g',
    's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r', 'g',
    'r', 'i', 'd', ':', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'S', 'e', 't',
    'I', 'n', 'C', 'o', 'd', 'e', 'G', 'e', 'n', 'e', 'r', 'a', 't', 'i', 'o',
    'n' };

  static char_T c1_b_cv2[56] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l',
    'g', 's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r',
    'g', 'r', 'i', 'd', ':', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'S', 'e',
    't', 'I', 'n', 'C', 'o', 'd', 'e', 'G', 'e', 'n', 'e', 'r', 'a', 't', 'i',
    'o', 'n' };

  static char_T c1_b_cv4[56] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l',
    'g', 's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r',
    'g', 'r', 'i', 'd', ':', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'S', 'e',
    't', 'I', 'n', 'C', 'o', 'd', 'e', 'G', 'e', 'n', 'e', 'r', 'a', 't', 'i',
    'o', 'n' };

  static char_T c1_b_cv6[56] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l',
    'g', 's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r',
    'g', 'r', 'i', 'd', ':', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'S', 'e',
    't', 'I', 'n', 'C', 'o', 'd', 'e', 'G', 'e', 'n', 'e', 'r', 'a', 't', 'i',
    'o', 'n' };

  static char_T c1_b_cv1[8] = { 'G', 'C', 'o', 's', 't', 'F', 'c', 'n' };

  static char_T c1_b_cv5[8] = { 'H', 'C', 'o', 's', 't', 'F', 'c', 'n' };

  static char_T c1_b_cv3[5] = { 'G', 'C', 'o', 's', 't' };

  static char_T c1_b_cv7[5] = { 'H', 'C', 'o', 's', 't' };

  c1_binaryOccupancyMap *c1_input;
  c1_plannerAStarGrid *c1_b_obj;
  c1_plannerAStarGrid *c1_c_obj;
  c1_plannerAStarGrid *c1_d_obj;
  c1_plannerAStarGrid *c1_e_obj;
  c1_plannerAStarGrid *c1_f_obj;
  c1_plannerAStarGrid *c1_g_obj;
  c1_plannerAStarGrid *c1_h_obj;
  c1_plannerAStarGrid *c1_i_obj;
  c1_plannerAStarGrid *c1_j_obj;
  c1_plannerAStarGrid *c1_k_obj;
  c1_plannerAStarGrid *c1_l_obj;
  c1_plannerAStarGrid *c1_m_obj;
  c1_plannerAStarGrid *c1_n_obj;
  c1_plannerAStarGrid *c1_o_obj;
  c1_plannerAStarGrid *c1_p_obj;
  c1_plannerAStarGrid *c1_q_obj;
  c1_plannerAStarGrid *c1_r_obj;
  c1_plannerAStarGrid *c1_this;
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_l_y = NULL;
  const mxArray *c1_m_y = NULL;
  const mxArray *c1_n_y = NULL;
  real_T c1_d;
  real_T c1_d1;
  int32_T c1_a__2_size[2];
  char_T c1_a__2_data[9];
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_b_obj = c1_obj;
  c1_b_obj->isFirstRun = 1.0;
  c1_st.site = &c1_v_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_b_st.site = &c1_gb_emlrtRSI;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_st.site = &c1_w_emlrtRSI;
  c1_d_obj = c1_b_obj;
  c1_input = c1_c_varargin_1;
  c1_d_obj->Map = c1_input;
  c1_b_st.site = &c1_hb_emlrtRSI;
  c1_plannerAStarGrid_setInputState(chartInstance, c1_d_obj);
  c1_st.site = &c1_x_emlrtRSI;
  c1_e_obj = c1_b_obj;
  c1_b_st.site = &c1_lb_emlrtRSI;
  c1_f_obj = c1_e_obj;
  if (c1_f_obj->isFirstRun == 0.0) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 8),
                  false);
    sf_mex_call(&c1_b_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_d_y, 14, c1_e_y)));
  }

  c1_b_st.site = &c1_mb_emlrtRSI;
  c1_g_obj = c1_e_obj;
  c1_g_obj->UseCustomG = 1.0;
  c1_st.site = &c1_y_emlrtRSI;
  c1_h_obj = c1_b_obj;
  c1_b_st.site = &c1_nb_emlrtRSI;
  c1_i_obj = c1_h_obj;
  if (c1_i_obj->isFirstRun == 0.0) {
    c1_b1 = true;
  } else {
    c1_b1 = false;
  }

  if (c1_b1) {
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_b_cv2, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_b_cv2, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_b_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c1_b_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_g_y, 14, c1_h_y)));
  }

  c1_b_st.site = &c1_ob_emlrtRSI;
  c1_j_obj = c1_h_obj;
  c1_j_obj->UseCustomG = 0.0;
  c1_b_st.site = &c1_pb_emlrtRSI;
  c1_validateAStarBuiltinCostFunction(chartInstance, &c1_b_st, c1_a__2_data,
    c1_a__2_size, &c1_d);
  c1_h_obj->GCost = c1_d;
  c1_b_obj->UseCustomG = 0.0;
  c1_st.site = &c1_ab_emlrtRSI;
  c1_k_obj = c1_b_obj;
  c1_b_st.site = &c1_qb_emlrtRSI;
  c1_l_obj = c1_k_obj;
  if (c1_l_obj->isFirstRun == 0.0) {
    c1_b2 = true;
  } else {
    c1_b2 = false;
  }

  if (c1_b2) {
    c1_i_y = NULL;
    sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_b_cv4, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_j_y = NULL;
    sf_mex_assign(&c1_j_y, sf_mex_create("y", c1_b_cv4, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_k_y = NULL;
    sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_b_cv5, 10, 0U, 1U, 0U, 2, 1, 8),
                  false);
    sf_mex_call(&c1_b_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_i_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_j_y, 14, c1_k_y)));
  }

  c1_b_st.site = &c1_rb_emlrtRSI;
  c1_m_obj = c1_k_obj;
  c1_m_obj->UseCustomH = 1.0;
  c1_st.site = &c1_bb_emlrtRSI;
  c1_n_obj = c1_b_obj;
  c1_b_st.site = &c1_sb_emlrtRSI;
  c1_o_obj = c1_n_obj;
  if (c1_o_obj->isFirstRun == 0.0) {
    c1_b3 = true;
  } else {
    c1_b3 = false;
  }

  if (c1_b3) {
    c1_l_y = NULL;
    sf_mex_assign(&c1_l_y, sf_mex_create("y", c1_b_cv6, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_m_y = NULL;
    sf_mex_assign(&c1_m_y, sf_mex_create("y", c1_b_cv6, 10, 0U, 1U, 0U, 2, 1, 56),
                  false);
    c1_n_y = NULL;
    sf_mex_assign(&c1_n_y, sf_mex_create("y", c1_b_cv7, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c1_b_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_l_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_m_y, 14, c1_n_y)));
  }

  c1_b_st.site = &c1_tb_emlrtRSI;
  c1_p_obj = c1_n_obj;
  c1_p_obj->UseCustomH = 0.0;
  c1_b_st.site = &c1_ub_emlrtRSI;
  c1_validateAStarBuiltinCostFunction(chartInstance, &c1_b_st, c1_a__2_data,
    c1_a__2_size, &c1_d1);
  c1_n_obj->HCost = c1_d1;
  c1_b_obj->UseCustomH = 0.0;
  c1_st.site = &c1_cb_emlrtRSI;
  c1_b_obj->OccupiedThreshold = 0.65;
  c1_st.site = &c1_db_emlrtRSI;
  c1_q_obj = c1_b_obj;
  c1_q_obj->TieBreaker = 0.0;
  c1_st.site = &c1_eb_emlrtRSI;
  c1_r_obj = c1_b_obj;
  c1_r_obj->DiagonalSearch = 1.0;
  c1_st.site = &c1_fb_emlrtRSI;
  c1_plannerAStarGrid_updateMap(chartInstance, &c1_st, c1_b_obj);
  c1_b_obj->isFirstRun = 0.0;
  return c1_b_obj;
}

static void c1_plannerAStarGrid_setInputState(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_plannerAStarGrid *c1_obj)
{
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    c1_obj->GCostMatrix[c1_i] = rtInf;
  }

  for (c1_i1 = 0; c1_i1 < 48000000; c1_i1++) {
    c1_obj->IdPose[c1_i1] = 0.0;
  }

  for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
    chartInstance->c1_y[c1_i2] = 1.0 + (real_T)c1_i2;
  }

  c1_ind2sub(chartInstance, chartInstance->c1_y, chartInstance->c1_varargout_4,
             chartInstance->c1_varargout_5, chartInstance->c1_varargout_6);
  for (c1_i3 = 0; c1_i3 < 16000000; c1_i3++) {
    chartInstance->c1_y[c1_i3] = (real_T)chartInstance->c1_varargout_4[c1_i3];
  }

  for (c1_i4 = 0; c1_i4 < 16000000; c1_i4++) {
    chartInstance->c1_poseIdTemp[c1_i4] = (real_T)chartInstance->
      c1_varargout_5[c1_i4];
  }

  for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
    chartInstance->c1_dv[c1_i5] = (real_T)chartInstance->c1_varargout_6[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
    c1_obj->IdPose[c1_i6] = chartInstance->c1_y[c1_i6];
  }

  for (c1_i7 = 0; c1_i7 < 16000000; c1_i7++) {
    c1_obj->IdPose[c1_i7 + 16000000] = chartInstance->c1_poseIdTemp[c1_i7];
  }

  for (c1_i8 = 0; c1_i8 < 16000000; c1_i8++) {
    c1_obj->IdPose[c1_i8 + 32000000] = chartInstance->c1_dv[c1_i8];
  }

  for (c1_i9 = 0; c1_i9 < 16000000; c1_i9++) {
    chartInstance->c1_poseIdTemp[c1_i9] = c1_obj->IdPose[c1_i9 + 16000000] - 1.0;
  }

  for (c1_i10 = 0; c1_i10 < 16000000; c1_i10++) {
    chartInstance->c1_poseIdTemp[c1_i10] *= 4000.0;
  }

  for (c1_i11 = 0; c1_i11 < 16000000; c1_i11++) {
    chartInstance->c1_y[c1_i11] = c1_obj->IdPose[c1_i11 + 32000000] - 1.0;
  }

  for (c1_i12 = 0; c1_i12 < 16000000; c1_i12++) {
    chartInstance->c1_y[c1_i12] *= 4000.0;
  }

  for (c1_i13 = 0; c1_i13 < 16000000; c1_i13++) {
    chartInstance->c1_y[c1_i13] *= 4000.0;
  }

  for (c1_i14 = 0; c1_i14 < 16000000; c1_i14++) {
    chartInstance->c1_poseIdTemp[c1_i14] = (c1_obj->IdPose[c1_i14] +
      chartInstance->c1_poseIdTemp[c1_i14]) + chartInstance->c1_y[c1_i14];
  }

  for (c1_i15 = 0; c1_i15 < 16000000; c1_i15++) {
    c1_obj->PoseId[c1_i15] = chartInstance->c1_poseIdTemp[c1_i15];
  }

  for (c1_i16 = 0; c1_i16 < 16000000; c1_i16++) {
    c1_obj->NodeCostValue[c1_i16] = -1.0;
  }
}

static void c1_ind2sub(SFc1_aSPPAOAIWInstanceStruct *chartInstance, real_T
  c1_ndx[16000000], int32_T c1_varargout_1[16000000], int32_T c1_varargout_2
  [16000000], int32_T c1_b_varargout_3[16000000])
{
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    c1_varargout_1[c1_i] = (int32_T)c1_ndx[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 16000000; c1_i1++) {
    c1_varargout_1[c1_i1]--;
  }

  for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
    chartInstance->c1_vk[c1_i2] = c1_div_nzp_s32(chartInstance,
      c1_varargout_1[c1_i2], 16000000, 0, 0U, 0, 0);
  }

  for (c1_i3 = 0; c1_i3 < 16000000; c1_i3++) {
    c1_b_varargout_3[c1_i3] = chartInstance->c1_vk[c1_i3] + 1;
  }

  for (c1_i4 = 0; c1_i4 < 16000000; c1_i4++) {
    chartInstance->c1_vk[c1_i4] *= 16000000;
  }

  for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
    c1_varargout_1[c1_i5] -= chartInstance->c1_vk[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
    chartInstance->c1_vk[c1_i6] = c1_div_nzp_s32(chartInstance,
      c1_varargout_1[c1_i6], 4000, 0, 0U, 0, 0);
  }

  for (c1_i7 = 0; c1_i7 < 16000000; c1_i7++) {
    c1_varargout_2[c1_i7] = chartInstance->c1_vk[c1_i7] + 1;
  }

  for (c1_i8 = 0; c1_i8 < 16000000; c1_i8++) {
    chartInstance->c1_vk[c1_i8] *= 4000;
  }

  for (c1_i9 = 0; c1_i9 < 16000000; c1_i9++) {
    c1_varargout_1[c1_i9] -= chartInstance->c1_vk[c1_i9];
  }

  for (c1_i10 = 0; c1_i10 < 16000000; c1_i10++) {
    c1_varargout_1[c1_i10]++;
  }
}

static void c1_validateAStarBuiltinCostFunction(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, char_T c1_strVal_data[], int32_T
  c1_strVal_size[2], real_T *c1_idx)
{
  static char_T c1_a[9] = { 'E', 'u', 'c', 'l', 'i', 'd', 'e', 'a', 'n' };

  static char_T c1_b_cv[9] = { 'E', 'u', 'c', 'l', 'i', 'd', 'e', 'a', 'n' };

  static char_T c1_b_cv1[9] = { 'M', 'a', 'n', 'h', 'a', 't', 't', 'a', 'n' };

  static char_T c1_b_cv2[9] = { 'C', 'h', 'e', 'b', 'y', 's', 'h', 'e', 'v' };

  c1_cell_wrap_25 c1_b_b[1];
  c1_cell_wrap_25 c1_r;
  real_T c1_idxTemp_data[4];
  int32_T c1_ii_data[4];
  int32_T c1_idxTemp_size[2];
  int32_T c1_ii_size[2];
  int32_T c1_b_idx;
  int32_T c1_b_ii;
  int32_T c1_b_kstr;
  int32_T c1_c_kstr;
  int32_T c1_d_kstr;
  int32_T c1_e_kstr;
  int32_T c1_exitg1;
  int32_T c1_f_kstr;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_ii;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  char_T c1_b_data[9];
  boolean_T c1_b_x[4];
  boolean_T c1_b_bool;
  boolean_T c1_bool;
  boolean_T c1_c_b;
  boolean_T c1_c_bool;
  boolean_T c1_exitg2;
  (void)chartInstance;
  c1_strVal_size[0] = 1;
  c1_strVal_size[1] = 9;
  for (c1_i = 0; c1_i < 9; c1_i++) {
    c1_strVal_data[c1_i] = c1_a[c1_i];
  }

  c1_r.f1.size[0] = 1;
  c1_r.f1.size[1] = 9;
  for (c1_i1 = 0; c1_i1 < 9; c1_i1++) {
    c1_r.f1.data[c1_i1] = c1_strVal_data[c1_i1];
  }

  c1_b_b[0] = c1_r;
  for (c1_i2 = 0; c1_i2 < 9; c1_i2++) {
    c1_b_data[c1_i2] = c1_b_b[0].f1.data[c1_i2];
  }

  c1_bool = false;
  c1_kstr = 1;
  do {
    c1_exitg1 = 0;
    if (c1_kstr - 1 < 9) {
      c1_b_kstr = c1_kstr - 1;
      if (c1_b_cv[c1_b_kstr] != c1_b_data[c1_b_kstr]) {
        c1_exitg1 = 1;
      } else {
        c1_kstr++;
      }
    } else {
      c1_bool = true;
      c1_exitg1 = 1;
    }
  } while (c1_exitg1 == 0);

  c1_b_x[0] = c1_bool;
  for (c1_i3 = 0; c1_i3 < 9; c1_i3++) {
    c1_b_data[c1_i3] = c1_b_b[0].f1.data[c1_i3];
  }

  c1_b_bool = false;
  c1_c_kstr = 1;
  do {
    c1_exitg1 = 0;
    if (c1_c_kstr - 1 < 9) {
      c1_d_kstr = c1_c_kstr - 1;
      if (c1_b_cv1[c1_d_kstr] != c1_b_data[c1_d_kstr]) {
        c1_exitg1 = 1;
      } else {
        c1_c_kstr++;
      }
    } else {
      c1_b_bool = true;
      c1_exitg1 = 1;
    }
  } while (c1_exitg1 == 0);

  c1_b_x[1] = c1_b_bool;
  for (c1_i4 = 0; c1_i4 < 9; c1_i4++) {
    c1_b_data[c1_i4] = c1_b_b[0].f1.data[c1_i4];
  }

  c1_c_bool = false;
  c1_e_kstr = 1;
  do {
    c1_exitg1 = 0;
    if (c1_e_kstr - 1 < 9) {
      c1_f_kstr = c1_e_kstr - 1;
      if (c1_b_cv2[c1_f_kstr] != c1_b_data[c1_f_kstr]) {
        c1_exitg1 = 1;
      } else {
        c1_e_kstr++;
      }
    } else {
      c1_c_bool = true;
      c1_exitg1 = 1;
    }
  } while (c1_exitg1 == 0);

  c1_b_x[2] = c1_c_bool;
  c1_b_x[3] = false;
  c1_b_idx = 0;
  c1_ii = 1;
  c1_exitg2 = false;
  while ((!c1_exitg2) && (c1_ii - 1 < 4)) {
    c1_b_ii = c1_ii;
    if (c1_b_x[c1_b_ii - 1]) {
      c1_b_idx++;
      c1_ii_data[c1_b_idx - 1] = c1_b_ii;
      if (c1_b_idx >= 4) {
        c1_exitg2 = true;
      } else {
        c1_ii++;
      }
    } else {
      c1_ii++;
    }
  }

  c1_c_b = (c1_b_idx < 1);
  if (c1_c_b) {
    c1_i5 = 0;
  } else {
    c1_i5 = c1_b_idx;
  }

  c1_ii_size[1] = c1_i5;
  c1_idxTemp_size[1] = c1_ii_size[1];
  c1_loop_ub = c1_ii_size[1] - 1;
  for (c1_i6 = 0; c1_i6 <= c1_loop_ub; c1_i6++) {
    c1_idxTemp_data[c1_i6] = (real_T)c1_ii_data[c1_i6];
  }

  c1_i7 = 1;
  if ((c1_i7 < 1) || (c1_i7 > c1_idxTemp_size[1])) {
    emlrtDynamicBoundsCheckR2012b(c1_i7, 1, c1_idxTemp_size[1], &c1_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  *c1_idx = c1_idxTemp_data[0];
}

static void c1_plannerAStarGrid_updateMap(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj)
{
  c1_binaryOccupancyMap *c1_c_obj;
  c1_binaryOccupancyMap *c1_d_obj;
  c1_binaryOccupancyMap *c1_val;
  c1_plannerAStarGrid *c1_b_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  real_T c1_e_obj[2];
  real_T c1_b_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_k;
  boolean_T c1_b_x[2];
  boolean_T c1_x_data[2];
  boolean_T c1_c_y;
  boolean_T c1_exitg1;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_vb_emlrtRSI;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_b_obj = c1_obj;
  c1_val = c1_b_obj->Map;
  c1_st.site = &c1_vb_emlrtRSI;
  c1_c_obj = c1_val;
  c1_b_st.site = &c1_wb_emlrtRSI;
  c1_d_obj = c1_c_obj;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_b_x[c1_i] = (c1_d_obj->Index.Head[c1_i] == 1.0);
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_x_data[c1_i1] = c1_b_x[c1_i1];
  }

  c1_c_y = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 2)) {
    c1_b_k = (real_T)c1_k + 1.0;
    if (!c1_x_data[(int32_T)c1_b_k - 1]) {
      c1_c_y = false;
      c1_exitg1 = true;
    } else {
      c1_k++;
    }
  }

  if (c1_c_y) {
    for (c1_i3 = 0; c1_i3 < 16000000; c1_i3++) {
      chartInstance->c1_b_mat[c1_i3] = c1_d_obj->Buffer.Buffer[c1_i3];
    }
  } else {
    for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
      chartInstance->c1_b_mat[c1_i2] = c1_d_obj->Buffer.Buffer[c1_i2];
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_e_obj[c1_i4] = -(c1_d_obj->Index.Head[c1_i4] - 1.0);
    }

    c1_c_st.site = &c1_xb_emlrtRSI;
    c1_b_circshift(chartInstance, &c1_c_st, chartInstance->c1_b_mat, c1_e_obj);
    if (!c1_d_obj->HasParent) {
      for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
        c1_d_obj->Buffer.Buffer[c1_i6] = chartInstance->c1_b_mat[c1_i6];
      }

      for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
        c1_d_obj->Index.Head[c1_i7] = 1.0;
      }
    }
  }

  for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
    c1_obj->OccupancyMatrix[c1_i5] = (real_T)chartInstance->c1_b_mat[c1_i5];
  }
}

static void c1_circshift(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, boolean_T c1_a[16000000], real_T c1_p[2], boolean_T c1_b_a
  [16000000])
{
  real_T c1_b_p[2];
  int32_T c1_i;
  int32_T c1_i1;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    c1_b_a[c1_i] = c1_a[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_b_p[c1_i1] = c1_p[c1_i1];
  }

  c1_b_circshift(chartInstance, c1_sp, c1_b_a, c1_b_p);
}

static void c1_check_forloop_overflow_error(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp)
{
  static char_T c1_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c1_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  (void)chartInstance;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c1_sp, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14, sf_mex_call
              (c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c1_sp, NULL,
    "message", 1U, 2U, 14, c1_d_y, 14, c1_e_y)));
}

static void c1_plannerAStarGrid_plan(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj, real_T c1_start[2],
  real_T c1_goal[2], c1_emxArray_real_T *c1_path)
{
  static char_T c1_b_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c1_b_cv10[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c1_b_cv4[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c1_b_cv7[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c1_cv12[46] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l', 'g',
    's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r', 'g',
    'r', 'i', 'd', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'G', 'r', 'i',
    'd', 'I', 'n', 'p', 'u', 't' };

  static char_T c1_b_cv[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'l', 'a',
    'n', 'n', 'e', 'r', 'A', 'S', 't', 'a', 'r', 'G', 'r', 'i', 'd', ':', 'e',
    'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c1_b_cv3[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'l',
    'a', 'n', 'n', 'e', 'r', 'A', 'S', 't', 'a', 'r', 'G', 'r', 'i', 'd', ':',
    'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c1_b_cv6[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'l',
    'a', 'n', 'n', 'e', 'r', 'A', 'S', 't', 'a', 'r', 'G', 'r', 'i', 'd', ':',
    'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c1_b_cv9[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'l',
    'a', 'n', 'n', 'e', 'r', 'A', 'S', 't', 'a', 'r', 'G', 'r', 'i', 'd', ':',
    'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c1_b_cv2[5] = { 'S', 't', 'a', 'r', 't' };

  static char_T c1_b_cv5[5] = { 'S', 't', 'a', 'r', 't' };

  static char_T c1_cv13[5] = { 'S', 't', 'a', 'r', 't' };

  static char_T c1_b_cv8[4] = { 'G', 'o', 'a', 'l' };

  static char_T c1_cv11[4] = { 'G', 'o', 'a', 'l' };

  static char_T c1_cv14[4] = { 'G', 'o', 'a', 'l' };

  c1_binaryOccupancyMap *c1_b_val;
  c1_binaryOccupancyMap *c1_val;
  c1_plannerAStarGrid *c1_b_obj;
  c1_plannerAStarGrid *c1_c_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_l_y = NULL;
  const mxArray *c1_m_y = NULL;
  const mxArray *c1_n_y = NULL;
  const mxArray *c1_p_y = NULL;
  const mxArray *c1_q_y = NULL;
  const mxArray *c1_r_y = NULL;
  const mxArray *c1_t_y = NULL;
  const mxArray *c1_u_y = NULL;
  const mxArray *c1_v_y = NULL;
  const mxArray *c1_w_y = NULL;
  const mxArray *c1_x_y = NULL;
  real_T c1_b_goal[2];
  real_T c1_b_start[2];
  real_T c1_goalgrid[2];
  real_T c1_startgrid[2];
  real_T c1_b_k;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_d_k;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_k;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_h_k;
  real_T c1_h_x;
  real_T c1_i_x;
  real_T c1_j_x;
  real_T c1_k_x;
  real_T c1_l_k;
  real_T c1_l_x;
  real_T c1_n_x;
  real_T c1_o_x;
  real_T c1_p_k;
  real_T c1_p_x;
  real_T c1_q_x;
  real_T c1_r_x;
  int32_T c1_c_k;
  int32_T c1_e_k;
  int32_T c1_g_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i_k;
  int32_T c1_j_k;
  int32_T c1_k;
  int32_T c1_k_k;
  int32_T c1_m_k;
  int32_T c1_n_k;
  int32_T c1_o_k;
  boolean_T c1_m_x[2];
  boolean_T c1_x_data[2];
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_b;
  boolean_T c1_c_p;
  boolean_T c1_d_b;
  boolean_T c1_d_p;
  boolean_T c1_e_b;
  boolean_T c1_e_p;
  boolean_T c1_exitg1;
  boolean_T c1_f_b;
  boolean_T c1_f_p;
  boolean_T c1_g_b;
  boolean_T c1_h_b;
  boolean_T c1_i_b;
  boolean_T c1_j_b;
  boolean_T c1_k_b;
  boolean_T c1_o_y;
  boolean_T c1_p;
  boolean_T c1_s_y;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_st.site = &c1_jc_emlrtRSI;
  c1_b_st.site = &c1_pc_emlrtRSI;
  c1_p = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 2)) {
    c1_b_k = (real_T)c1_k + 1.0;
    c1_b_x = c1_start[(int32_T)c1_b_k - 1];
    c1_c_x = c1_b_x;
    c1_c_b = muDoubleScalarIsNaN(c1_c_x);
    c1_b_p = !c1_c_b;
    if (c1_b_p) {
      c1_k++;
    } else {
      c1_p = false;
      c1_exitg1 = true;
    }
  }

  if (c1_p) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_b_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c1_b_st, &c1_g_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_d_y, 14, c1_e_y)));
  }

  c1_b_st.site = &c1_pc_emlrtRSI;
  c1_c_p = true;
  c1_c_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_c_k < 2)) {
    c1_d_k = (real_T)c1_c_k + 1.0;
    c1_d_x = c1_start[(int32_T)c1_d_k - 1];
    c1_e_x = c1_d_x;
    c1_d_b = muDoubleScalarIsInf(c1_e_x);
    c1_b2 = !c1_d_b;
    c1_f_x = c1_d_x;
    c1_e_b = muDoubleScalarIsNaN(c1_f_x);
    c1_b3 = !c1_e_b;
    c1_f_b = (c1_b2 && c1_b3);
    if (c1_f_b) {
      c1_c_k++;
    } else {
      c1_c_p = false;
      c1_exitg1 = true;
    }
  }

  if (c1_c_p) {
    c1_b1 = true;
  } else {
    c1_b1 = false;
  }

  if (!c1_b1) {
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_b_cv3, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_b_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_b_cv5, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c1_b_st, &c1_h_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_g_y, 14, c1_h_y)));
  }

  c1_st.site = &c1_kc_emlrtRSI;
  c1_b_st.site = &c1_pc_emlrtRSI;
  c1_d_p = true;
  c1_e_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_e_k < 2)) {
    c1_f_k = (real_T)c1_e_k + 1.0;
    c1_g_x = c1_goal[(int32_T)c1_f_k - 1];
    c1_h_x = c1_g_x;
    c1_g_b = muDoubleScalarIsNaN(c1_h_x);
    c1_e_p = !c1_g_b;
    if (c1_e_p) {
      c1_e_k++;
    } else {
      c1_d_p = false;
      c1_exitg1 = true;
    }
  }

  if (c1_d_p) {
    c1_b4 = true;
  } else {
    c1_b4 = false;
  }

  if (!c1_b4) {
    c1_i_y = NULL;
    sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_b_cv6, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c1_j_y = NULL;
    sf_mex_assign(&c1_j_y, sf_mex_create("y", c1_b_cv7, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_k_y = NULL;
    sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_b_cv8, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c1_b_st, &c1_g_emlrtMCI, "error", 0U, 2U, 14, c1_i_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_j_y, 14, c1_k_y)));
  }

  c1_b_st.site = &c1_pc_emlrtRSI;
  c1_f_p = true;
  c1_g_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_g_k < 2)) {
    c1_h_k = (real_T)c1_g_k + 1.0;
    c1_i_x = c1_goal[(int32_T)c1_h_k - 1];
    c1_j_x = c1_i_x;
    c1_h_b = muDoubleScalarIsInf(c1_j_x);
    c1_b6 = !c1_h_b;
    c1_k_x = c1_i_x;
    c1_i_b = muDoubleScalarIsNaN(c1_k_x);
    c1_b7 = !c1_i_b;
    c1_j_b = (c1_b6 && c1_b7);
    if (c1_j_b) {
      c1_g_k++;
    } else {
      c1_f_p = false;
      c1_exitg1 = true;
    }
  }

  if (c1_f_p) {
    c1_b5 = true;
  } else {
    c1_b5 = false;
  }

  if (!c1_b5) {
    c1_l_y = NULL;
    sf_mex_assign(&c1_l_y, sf_mex_create("y", c1_b_cv9, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c1_m_y = NULL;
    sf_mex_assign(&c1_m_y, sf_mex_create("y", c1_b_cv10, 10, 0U, 1U, 0U, 2, 1,
      46), false);
    c1_n_y = NULL;
    sf_mex_assign(&c1_n_y, sf_mex_create("y", c1_cv11, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c1_b_st, &c1_h_emlrtMCI, "error", 0U, 2U, 14, c1_l_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_m_y, 14, c1_n_y)));
  }

  c1_obj->IsGrid = 0.0;
  c1_obj->IsGrid = 1.0;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_startgrid[c1_i] = c1_start[c1_i];
  }

  for (c1_i_k = 0; c1_i_k < 2; c1_i_k++) {
    c1_j_k = c1_i_k;
    c1_l_x = c1_startgrid[c1_j_k];
    c1_n_x = c1_l_x;
    c1_n_x = muDoubleScalarFloor(c1_n_x);
    c1_startgrid[c1_j_k] = c1_n_x;
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_m_x[c1_i1] = (c1_start[c1_i1] == c1_startgrid[c1_i1]);
  }

  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_x_data[c1_i2] = c1_m_x[c1_i2];
  }

  c1_o_y = true;
  c1_k_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k_k < 2)) {
    c1_l_k = (real_T)c1_k_k + 1.0;
    if (!c1_x_data[(int32_T)c1_l_k - 1]) {
      c1_o_y = false;
      c1_exitg1 = true;
    } else {
      c1_k_k++;
    }
  }

  if (!c1_o_y) {
    c1_p_y = NULL;
    sf_mex_assign(&c1_p_y, sf_mex_create("y", c1_cv12, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_q_y = NULL;
    sf_mex_assign(&c1_q_y, sf_mex_create("y", c1_cv12, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_r_y = NULL;
    sf_mex_assign(&c1_r_y, sf_mex_create("y", c1_cv13, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(c1_sp, &c1_e_emlrtMCI, "error", 0U, 2U, 14, c1_p_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 2U, 14, c1_q_y, 14, c1_r_y)));
  }

  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    c1_startgrid[c1_i3] = c1_goal[c1_i3];
  }

  for (c1_m_k = 0; c1_m_k < 2; c1_m_k++) {
    c1_n_k = c1_m_k;
    c1_o_x = c1_startgrid[c1_n_k];
    c1_p_x = c1_o_x;
    c1_p_x = muDoubleScalarFloor(c1_p_x);
    c1_startgrid[c1_n_k] = c1_p_x;
  }

  for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
    c1_m_x[c1_i4] = (c1_goal[c1_i4] == c1_startgrid[c1_i4]);
  }

  for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
    c1_x_data[c1_i5] = c1_m_x[c1_i5];
  }

  c1_s_y = true;
  c1_o_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_o_k < 2)) {
    c1_p_k = (real_T)c1_o_k + 1.0;
    if (!c1_x_data[(int32_T)c1_p_k - 1]) {
      c1_s_y = false;
      c1_exitg1 = true;
    } else {
      c1_o_k++;
    }
  }

  if (!c1_s_y) {
    c1_t_y = NULL;
    sf_mex_assign(&c1_t_y, sf_mex_create("y", c1_cv12, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_u_y = NULL;
    sf_mex_assign(&c1_u_y, sf_mex_create("y", c1_cv12, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_v_y = NULL;
    sf_mex_assign(&c1_v_y, sf_mex_create("y", c1_cv14, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c1_sp, &c1_f_emlrtMCI, "error", 0U, 2U, 14, c1_t_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 2U, 14, c1_u_y, 14, c1_v_y)));
  }

  c1_st.site = &c1_lc_emlrtRSI;
  c1_q_x = c1_obj->IsGrid;
  c1_r_x = c1_q_x;
  c1_k_b = muDoubleScalarIsNaN(c1_r_x);
  if (c1_k_b) {
    c1_w_y = NULL;
    sf_mex_assign(&c1_w_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    c1_x_y = NULL;
    sf_mex_assign(&c1_x_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c1_st, &c1_i_emlrtMCI, "error", 0U, 2U, 14, c1_w_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 1U, 14, c1_x_y)));
  }

  if (!(c1_obj->IsGrid != 0.0)) {
    c1_st.site = &c1_mc_emlrtRSI;
    c1_b_obj = c1_obj;
    c1_val = c1_b_obj->Map;
    c1_st.site = &c1_mc_emlrtRSI;
    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_b_start[c1_i8] = c1_start[c1_i8];
    }

    c1_MapInterface_world2grid(chartInstance, c1_val, c1_b_start, c1_startgrid);
    c1_st.site = &c1_nc_emlrtRSI;
    c1_c_obj = c1_obj;
    c1_b_val = c1_c_obj->Map;
    c1_st.site = &c1_nc_emlrtRSI;
    for (c1_i9 = 0; c1_i9 < 2; c1_i9++) {
      c1_b_goal[c1_i9] = c1_goal[c1_i9];
    }

    c1_MapInterface_world2grid(chartInstance, c1_b_val, c1_b_goal, c1_goalgrid);
  } else {
    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_startgrid[c1_i6] = c1_start[c1_i6];
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_goalgrid[c1_i7] = c1_goal[c1_i7];
    }
  }

  c1_st.site = &c1_oc_emlrtRSI;
  c1_plannerAStarGrid_planOM(chartInstance, &c1_st, c1_obj, c1_startgrid,
    c1_goalgrid, c1_path, &chartInstance->c1_debugInfo);
}

static void c1_plannerAStarGrid_planOM(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj, real_T
  c1_StartInGrid[2], real_T c1_GoalInGrid[2], c1_emxArray_real_T *c1_pathOut,
  c1_s5OFbBsTtftXcO0wOIk58PB *c1_b_debugInfo)
{
  static char_T c1_b_cv[12] = { 'N', 'u', 'm', 'P', 'a', 't', 'h', 'N', 'o', 'd',
    'e', 's' };

  c1_binaryOccupancyMap *c1_c_map;
  c1_emxArray_int32_T *c1_r;
  c1_emxArray_real_T *c1_b_pose;
  c1_emxArray_real_T *c1_c_pose;
  c1_emxArray_real_T *c1_e_val;
  c1_emxArray_real_T *c1_nodesExIn;
  c1_emxArray_real_T *c1_path;
  c1_emxArray_real_T *c1_pose;
  c1_emxArray_real_T *c1_r1;
  c1_nav_algs_internal_plannerAStarGrid *c1_f_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_g_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_h_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_i_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_l_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_m_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_n_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_o_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_p_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_q_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_r_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_s_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_t_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_u_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_v_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_w_obj;
  c1_plannerAStarGrid *c1_b_obj;
  c1_plannerAStarGrid *c1_c_obj;
  c1_plannerAStarGrid *c1_d_obj;
  c1_plannerAStarGrid *c1_e_obj;
  c1_plannerAStarGrid *c1_x_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_l_y = NULL;
  const mxArray *c1_m_y = NULL;
  const mxArray *c1_n_y = NULL;
  const mxArray *c1_o_y = NULL;
  real_T c1_b_GoalInGrid[2];
  real_T c1_b_StartInGrid[2];
  real_T c1_j_obj[2];
  real_T c1_k_obj[2];
  real_T c1_H;
  real_T c1_b_H;
  real_T c1_b_distMethodVal;
  real_T c1_b_numNodes;
  real_T c1_b_path;
  real_T c1_b_u;
  real_T c1_b_val;
  real_T c1_b_x;
  real_T c1_c_val;
  real_T c1_c_x;
  real_T c1_cost;
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d10;
  real_T c1_d11;
  real_T c1_d12;
  real_T c1_d13;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  real_T c1_d8;
  real_T c1_d9;
  real_T c1_d_k;
  real_T c1_d_val;
  real_T c1_d_x;
  real_T c1_distMethodVal;
  real_T c1_e_x;
  real_T c1_g_x;
  real_T c1_h_x;
  real_T c1_numNodes;
  real_T c1_th;
  real_T c1_u;
  real_T c1_val;
  real_T c1_value;
  int32_T c1_iv2[2];
  int32_T c1_iv3[2];
  int32_T c1_iv4[2];
  int32_T c1_iv5[2];
  int32_T c1_iv[1];
  int32_T c1_iv1[1];
  int32_T c1_b_i;
  int32_T c1_b_k;
  int32_T c1_b_loop_ub;
  int32_T c1_c_k;
  int32_T c1_c_loop_ub;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_end;
  int32_T c1_f_loop_ub;
  int32_T c1_g_loop_ub;
  int32_T c1_h_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i100;
  int32_T c1_i101;
  int32_T c1_i102;
  int32_T c1_i103;
  int32_T c1_i104;
  int32_T c1_i105;
  int32_T c1_i106;
  int32_T c1_i107;
  int32_T c1_i108;
  int32_T c1_i109;
  int32_T c1_i11;
  int32_T c1_i110;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i40;
  int32_T c1_i41;
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_i46;
  int32_T c1_i47;
  int32_T c1_i48;
  int32_T c1_i49;
  int32_T c1_i5;
  int32_T c1_i50;
  int32_T c1_i51;
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i54;
  int32_T c1_i55;
  int32_T c1_i56;
  int32_T c1_i57;
  int32_T c1_i58;
  int32_T c1_i59;
  int32_T c1_i6;
  int32_T c1_i60;
  int32_T c1_i61;
  int32_T c1_i62;
  int32_T c1_i63;
  int32_T c1_i64;
  int32_T c1_i65;
  int32_T c1_i66;
  int32_T c1_i67;
  int32_T c1_i68;
  int32_T c1_i69;
  int32_T c1_i7;
  int32_T c1_i70;
  int32_T c1_i71;
  int32_T c1_i72;
  int32_T c1_i73;
  int32_T c1_i74;
  int32_T c1_i75;
  int32_T c1_i76;
  int32_T c1_i77;
  int32_T c1_i78;
  int32_T c1_i79;
  int32_T c1_i8;
  int32_T c1_i80;
  int32_T c1_i81;
  int32_T c1_i82;
  int32_T c1_i83;
  int32_T c1_i84;
  int32_T c1_i85;
  int32_T c1_i86;
  int32_T c1_i87;
  int32_T c1_i88;
  int32_T c1_i89;
  int32_T c1_i9;
  int32_T c1_i90;
  int32_T c1_i91;
  int32_T c1_i92;
  int32_T c1_i93;
  int32_T c1_i94;
  int32_T c1_i95;
  int32_T c1_i96;
  int32_T c1_i97;
  int32_T c1_i98;
  int32_T c1_i99;
  int32_T c1_i_loop_ub;
  int32_T c1_j_loop_ub;
  int32_T c1_k;
  int32_T c1_k_loop_ub;
  int32_T c1_l_loop_ub;
  int32_T c1_loop_ub;
  int32_T c1_m_loop_ub;
  int32_T c1_n_loop_ub;
  int32_T c1_o_loop_ub;
  int32_T c1_p_loop_ub;
  int32_T c1_q_loop_ub;
  int32_T c1_r_loop_ub;
  int32_T c1_s_loop_ub;
  int32_T c1_t_loop_ub;
  int32_T c1_u_loop_ub;
  int32_T c1_v_loop_ub;
  int32_T c1_w_loop_ub;
  int32_T c1_x_loop_ub;
  int32_T c1_y_loop_ub;
  boolean_T c1_f_x[2];
  boolean_T c1_x_data[2];
  boolean_T c1_b1;
  boolean_T c1_b10;
  boolean_T c1_b11;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_b8;
  boolean_T c1_b9;
  boolean_T c1_b_b;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  boolean_T c1_e_y;
  boolean_T c1_exitg1;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_st.site = &c1_qd_emlrtRSI;
  c1_b_obj = c1_obj;
  c1_c_map = c1_b_obj->Map;
  c1_st.site = &c1_pd_emlrtRSI;
  c1_plannerAStarGrid_updateMap(chartInstance, &c1_st, c1_obj);
  c1_st.site = &c1_od_emlrtRSI;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_b_StartInGrid[c1_i] = c1_StartInGrid[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_b_GoalInGrid[c1_i1] = c1_GoalInGrid[c1_i1];
  }

  c1_plannerAStarGrid_validateStartGoal(chartInstance, &c1_st, c1_obj, c1_c_map,
    c1_b_StartInGrid, c1_b_GoalInGrid);
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_obj->StartInGrid[c1_i2] = c1_StartInGrid[c1_i2];
  }

  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    c1_obj->GoalInGrid[c1_i3] = c1_GoalInGrid[c1_i3];
  }

  for (c1_i4 = 0; c1_i4 < 16000000; c1_i4++) {
    chartInstance->c1_m[c1_i4] = c1_obj->OccupancyMatrix[c1_i4];
  }

  for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
    chartInstance->c1_m[c1_i5] *= 10000.0;
  }

  for (c1_k = 0; c1_k < 16000000; c1_k++) {
    c1_b_k = c1_k;
    c1_b_x = chartInstance->c1_m[c1_b_k];
    c1_c_x = c1_b_x;
    c1_c_x = muDoubleScalarRound(c1_c_x);
    chartInstance->c1_m[c1_b_k] = c1_c_x;
  }

  for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
    chartInstance->c1_m[c1_i6] /= 10000.0;
  }

  c1_th = c1_obj->OccupiedThreshold;
  c1_st.site = &c1_nd_emlrtRSI;
  c1_st.site = &c1_md_emlrtRSI;
  c1_st.site = &c1_md_emlrtRSI;
  c1_st.site = &c1_ld_emlrtRSI;
  c1_b_plannerAStarGrid_plannerAStarGrid(chartInstance,
    &chartInstance->c1_astarInternal, chartInstance->c1_m, c1_th);
  if (c1_obj->UseCustomH == 0.0) {
    c1_st.site = &c1_kd_emlrtRSI;
    c1_c_obj = c1_obj;
    c1_val = c1_c_obj->HCost;
    c1_st.site = &c1_kd_emlrtRSI;
    c1_f_obj = &chartInstance->c1_astarInternal;
    c1_distMethodVal = c1_val;
    c1_f_obj->HCostMethod = c1_distMethodVal;
    c1_f_obj->UseCustomH = 0.0;
  }

  if (c1_obj->UseCustomG == 0.0) {
    c1_st.site = &c1_jd_emlrtRSI;
    c1_d_obj = c1_obj;
    c1_b_val = c1_d_obj->GCost;
    c1_st.site = &c1_jd_emlrtRSI;
    c1_g_obj = &chartInstance->c1_astarInternal;
    c1_b_distMethodVal = c1_b_val;
    c1_g_obj->GCostMethod = c1_b_distMethodVal;
    c1_g_obj->UseCustomG = 0.0;
  }

  c1_st.site = &c1_id_emlrtRSI;
  c1_e_obj = c1_obj;
  c1_b_st.site = &c1_oe_emlrtRSI;
  c1_d_x = c1_e_obj->TieBreaker;
  c1_e_x = c1_d_x;
  c1_b_b = muDoubleScalarIsNaN(c1_e_x);
  if (c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c1_b_st, &c1_i_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
  }

  if (c1_e_obj->TieBreaker != 0.0) {
    c1_value = 1.07;
  } else {
    c1_value = 1.0;
  }

  c1_st.site = &c1_id_emlrtRSI;
  c1_h_obj = &chartInstance->c1_astarInternal;
  c1_c_val = c1_value;
  c1_h_obj->TieBreaker = c1_c_val;
  c1_st.site = &c1_hd_emlrtRSI;
  c1_i_obj = &chartInstance->c1_astarInternal;
  c1_d_val = c1_obj->DiagonalSearch;
  c1_i_obj->DiagonalSearchFlag = c1_d_val;
  c1_st.site = &c1_gd_emlrtRSI;
  for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
    c1_j_obj[c1_i7] = c1_obj->StartInGrid[c1_i7];
  }

  for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
    c1_k_obj[c1_i8] = c1_obj->GoalInGrid[c1_i8];
  }

  c1_b_plannerAStarGrid_plan(chartInstance, &c1_st,
    &chartInstance->c1_astarInternal, c1_j_obj, c1_k_obj);
  c1_st.site = &c1_fd_emlrtRSI;
  c1_l_obj = &chartInstance->c1_astarInternal;
  c1_b_st.site = &c1_ng_emlrtRSI;
  c1_m_obj = c1_l_obj;
  c1_d = c1_m_obj->NumPathPoints;
  c1_c_b = (c1_d < 1.0);
  if (c1_c_b) {
    c1_i9 = -1;
  } else {
    if (c1_d != (real_T)(int32_T)muDoubleScalarFloor(c1_d)) {
      emlrtIntegerCheckR2012b(c1_d, &c1_i_emlrtDCI, &c1_b_st);
    }

    c1_i10 = (int32_T)c1_d;
    if ((c1_i10 < 1) || (c1_i10 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i10, 1, 16000000, &c1_k_emlrtBCI,
        &c1_b_st);
    }

    c1_i9 = c1_i10 - 1;
  }

  c1_emxInit_real_T(chartInstance, &c1_b_st, &c1_path, 1, &c1_h_emlrtRTEI);
  c1_i11 = c1_path->size[0];
  c1_path->size[0] = c1_i9 + 1;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_path, c1_i11,
    &c1_h_emlrtRTEI);
  c1_loop_ub = c1_i9;
  for (c1_i12 = 0; c1_i12 <= c1_loop_ub; c1_i12++) {
    c1_path->data[c1_i12] = c1_m_obj->PathIndicesInternal[c1_i12];
  }

  c1_H = (real_T)c1_path->size[0];
  c1_obj->NumPathPoints = c1_H;
  c1_st.site = &c1_ed_emlrtRSI;
  c1_n_obj = &chartInstance->c1_astarInternal;
  c1_b_st.site = &c1_og_emlrtRSI;
  c1_o_obj = c1_n_obj;
  c1_d1 = c1_o_obj->NumNodesExplored;
  c1_b1 = (c1_d1 < 1.0);
  if (!c1_b1) {
    if (c1_d1 != (real_T)(int32_T)muDoubleScalarFloor(c1_d1)) {
      emlrtIntegerCheckR2012b(c1_d1, &c1_j_emlrtDCI, &c1_b_st);
    }

    c1_i13 = (int32_T)c1_d1;
    if ((c1_i13 < 1) || (c1_i13 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i13, 1, 16000000, &c1_l_emlrtBCI,
        &c1_b_st);
    }
  }

  c1_st.site = &c1_dd_emlrtRSI;
  c1_p_obj = &chartInstance->c1_astarInternal;
  c1_numNodes = c1_p_obj->NumNodesExplored;
  c1_obj->NumNodesExplored = c1_numNodes;
  c1_st.site = &c1_cd_emlrtRSI;
  c1_q_obj = &chartInstance->c1_astarInternal;
  c1_b_st.site = &c1_ng_emlrtRSI;
  c1_r_obj = c1_q_obj;
  c1_d2 = c1_r_obj->NumPathPoints;
  c1_b2 = (c1_d2 < 1.0);
  if (c1_b2) {
    c1_i14 = -1;
  } else {
    if (c1_d2 != (real_T)(int32_T)muDoubleScalarFloor(c1_d2)) {
      emlrtIntegerCheckR2012b(c1_d2, &c1_i_emlrtDCI, &c1_b_st);
    }

    c1_i15 = (int32_T)c1_d2;
    if ((c1_i15 < 1) || (c1_i15 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i15, 1, 16000000, &c1_k_emlrtBCI,
        &c1_b_st);
    }

    c1_i14 = c1_i15 - 1;
  }

  c1_i16 = c1_path->size[0];
  c1_path->size[0] = c1_i14 + 1;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_path, c1_i16,
    &c1_i_emlrtRTEI);
  c1_b_loop_ub = c1_i14;
  for (c1_i17 = 0; c1_i17 <= c1_b_loop_ub; c1_i17++) {
    c1_path->data[c1_i17] = c1_r_obj->PathIndicesInternal[c1_i17];
  }

  c1_b_path = (real_T)c1_path->size[0];
  c1_f_x[0] = (c1_b_path <= 1.6E+7);
  c1_f_x[1] = true;
  for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
    c1_x_data[c1_i18] = c1_f_x[c1_i18];
  }

  c1_e_y = true;
  c1_c_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_c_k < 2)) {
    c1_d_k = (real_T)c1_c_k + 1.0;
    if (!c1_x_data[(int32_T)c1_d_k - 1]) {
      c1_e_y = false;
      c1_exitg1 = true;
    } else {
      c1_c_k++;
    }
  }

  if (!c1_e_y) {
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 12),
                  false);
    c1_u = 1.6E+7;
    c1_i_y = NULL;
    sf_mex_assign(&c1_i_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
    sf_mex_call(c1_sp, &c1_j_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 3U, 14, c1_g_y, 14, c1_h_y, 14, c1_i_y)));
  }

  c1_b_H = (real_T)c1_path->size[0];
  c1_obj->NumPathPoints = c1_b_H;
  for (c1_i19 = 0; c1_i19 < 16000000; c1_i19++) {
    chartInstance->c1_m[c1_i19] = 0.0;
  }

  c1_d3 = c1_obj->NumPathPoints;
  c1_b3 = (c1_d3 < 1.0);
  if (c1_b3) {
    c1_i21 = -1;
  } else {
    c1_i20 = c1_path->size[0];
    c1_i22 = 1;
    if ((c1_i22 < 1) || (c1_i22 > c1_i20)) {
      emlrtDynamicBoundsCheckR2012b(c1_i22, 1, c1_i20, &c1_i_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i23 = c1_path->size[0];
    if (c1_d3 != (real_T)(int32_T)muDoubleScalarFloor(c1_d3)) {
      emlrtIntegerCheckR2012b(c1_d3, &c1_g_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i25 = (int32_T)c1_d3;
    if ((c1_i25 < 1) || (c1_i25 > c1_i23)) {
      emlrtDynamicBoundsCheckR2012b(c1_i25, 1, c1_i23, &c1_h_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i21 = c1_i25 - 1;
  }

  c1_d4 = c1_obj->NumPathPoints;
  c1_b4 = (c1_d4 < 1.0);
  if (c1_b4) {
    c1_i24 = -1;
  } else {
    if (c1_d4 != (real_T)(int32_T)muDoubleScalarFloor(c1_d4)) {
      emlrtIntegerCheckR2012b(c1_d4, &c1_f_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i26 = (int32_T)c1_d4;
    if ((c1_i26 < 1) || (c1_i26 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i26, 1, 16000000, &c1_g_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i24 = c1_i26 - 1;
  }

  c1_emxInit_int32_T(chartInstance, c1_sp, &c1_r, 1, &c1_cb_emlrtRTEI);
  c1_i27 = c1_r->size[0];
  c1_r->size[0] = c1_i24 + 1;
  c1_st.site = &c1_ih_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i27,
    &c1_j_emlrtRTEI);
  c1_c_loop_ub = c1_i24;
  for (c1_i28 = 0; c1_i28 <= c1_c_loop_ub; c1_i28++) {
    c1_r->data[c1_i28] = c1_i28;
  }

  c1_emxInit_real_T(chartInstance, c1_sp, &c1_e_val, 1, &c1_eb_emlrtRTEI);
  c1_i29 = c1_e_val->size[0];
  c1_e_val->size[0] = c1_i21 + 1;
  c1_st.site = &c1_ih_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_val, c1_i29,
    &c1_k_emlrtRTEI);
  c1_d_loop_ub = c1_i21;
  for (c1_i30 = 0; c1_i30 <= c1_d_loop_ub; c1_i30++) {
    c1_e_val->data[c1_i30] = c1_path->data[c1_i30];
  }

  c1_iv[0] = c1_r->size[0];
  emlrtSubAssignSizeCheckR2012b(&c1_iv[0], 1, c1_e_val->size, 1, &c1_f_emlrtECI,
    (void *)c1_sp);
  c1_e_loop_ub = c1_e_val->size[0] - 1;
  for (c1_i31 = 0; c1_i31 <= c1_e_loop_ub; c1_i31++) {
    chartInstance->c1_m[c1_r->data[c1_i31]] = c1_e_val->data[c1_i31];
  }

  for (c1_i32 = 0; c1_i32 < 16000000; c1_i32++) {
    c1_obj->Path[c1_i32] = chartInstance->c1_m[c1_i32];
  }

  c1_st.site = &c1_bd_emlrtRSI;
  c1_s_obj = &chartInstance->c1_astarInternal;
  c1_b_st.site = &c1_og_emlrtRSI;
  c1_t_obj = c1_s_obj;
  c1_d5 = c1_t_obj->NumNodesExplored;
  c1_b5 = (c1_d5 < 1.0);
  if (c1_b5) {
    c1_i33 = -1;
  } else {
    if (c1_d5 != (real_T)(int32_T)muDoubleScalarFloor(c1_d5)) {
      emlrtIntegerCheckR2012b(c1_d5, &c1_j_emlrtDCI, &c1_b_st);
    }

    c1_i34 = (int32_T)c1_d5;
    if ((c1_i34 < 1) || (c1_i34 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i34, 1, 16000000, &c1_l_emlrtBCI,
        &c1_b_st);
    }

    c1_i33 = c1_i34 - 1;
  }

  c1_emxInit_real_T(chartInstance, &c1_b_st, &c1_nodesExIn, 1, &c1_bb_emlrtRTEI);
  c1_i35 = c1_nodesExIn->size[0];
  c1_nodesExIn->size[0] = c1_i33 + 1;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_nodesExIn, c1_i35,
    &c1_l_emlrtRTEI);
  c1_f_loop_ub = c1_i33;
  for (c1_i36 = 0; c1_i36 <= c1_f_loop_ub; c1_i36++) {
    c1_nodesExIn->data[c1_i36] = c1_t_obj->NodesExploredIndicesInternal[c1_i36];
  }

  c1_st.site = &c1_ad_emlrtRSI;
  c1_u_obj = &chartInstance->c1_astarInternal;
  c1_b_numNodes = c1_u_obj->NumNodesExplored;
  c1_obj->NumNodesExplored = c1_b_numNodes;
  if (!(c1_obj->NumNodesExplored <= 1.6E+7)) {
    c1_j_y = NULL;
    sf_mex_assign(&c1_j_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c1_k_y = NULL;
    sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c1_l_y = NULL;
    sf_mex_assign(&c1_l_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 16),
                  false);
    c1_b_u = 1.6E+7;
    c1_m_y = NULL;
    sf_mex_assign(&c1_m_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0), false);
    sf_mex_call(c1_sp, &c1_k_emlrtMCI, "error", 0U, 2U, 14, c1_j_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 3U, 14, c1_k_y, 14, c1_l_y, 14, c1_m_y)));
  }

  for (c1_i37 = 0; c1_i37 < 16000000; c1_i37++) {
    chartInstance->c1_m[c1_i37] = 0.0;
  }

  c1_d6 = c1_obj->NumNodesExplored;
  c1_b6 = (c1_d6 < 1.0);
  if (c1_b6) {
    c1_i38 = -1;
  } else {
    if (c1_d6 != (real_T)(int32_T)muDoubleScalarFloor(c1_d6)) {
      emlrtIntegerCheckR2012b(c1_d6, &c1_e_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i39 = (int32_T)c1_d6;
    if ((c1_i39 < 1) || (c1_i39 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i39, 1, 16000000, &c1_f_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i38 = c1_i39 - 1;
  }

  c1_i40 = c1_r->size[0];
  c1_r->size[0] = c1_i38 + 1;
  c1_st.site = &c1_mh_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i40,
    &c1_m_emlrtRTEI);
  c1_g_loop_ub = c1_i38;
  for (c1_i41 = 0; c1_i41 <= c1_g_loop_ub; c1_i41++) {
    c1_r->data[c1_i41] = c1_i41;
  }

  c1_iv1[0] = c1_r->size[0];
  emlrtSubAssignSizeCheckR2012b(&c1_iv1[0], 1, c1_nodesExIn->size, 1,
    &c1_e_emlrtECI, (void *)c1_sp);
  c1_h_loop_ub = c1_nodesExIn->size[0] - 1;
  for (c1_i42 = 0; c1_i42 <= c1_h_loop_ub; c1_i42++) {
    chartInstance->c1_m[c1_r->data[c1_i42]] = c1_nodesExIn->data[c1_i42];
  }

  for (c1_i43 = 0; c1_i43 < 16000000; c1_i43++) {
    c1_obj->NodesExploredIndices[c1_i43] = chartInstance->c1_m[c1_i43];
  }

  c1_st.site = &c1_yc_emlrtRSI;
  c1_v_obj = &chartInstance->c1_astarInternal;
  for (c1_i44 = 0; c1_i44 < 16000000; c1_i44++) {
    chartInstance->c1_m[c1_i44] = c1_v_obj->GCostMatrix[c1_i44];
  }

  c1_end = 16000000;
  for (c1_b_i = 0; c1_b_i < c1_end; c1_b_i++) {
    if (chartInstance->c1_m[c1_b_i] == -1.0) {
      chartInstance->c1_m[c1_b_i] = rtInf;
    }
  }

  for (c1_i45 = 0; c1_i45 < 16000000; c1_i45++) {
    c1_obj->GCostMatrix[c1_i45] = chartInstance->c1_m[c1_i45];
  }

  c1_st.site = &c1_xc_emlrtRSI;
  c1_w_obj = &chartInstance->c1_astarInternal;
  c1_cost = c1_w_obj->PathCost;
  c1_obj->PathCost = c1_cost;
  c1_b_debugInfo->PathCost = c1_obj->PathCost;
  c1_b_debugInfo->NumNodesExplored = c1_obj->NumNodesExplored;
  for (c1_i46 = 0; c1_i46 < 16000000; c1_i46++) {
    c1_b_debugInfo->GCostMatrix[c1_i46] = c1_obj->GCostMatrix[c1_i46];
  }

  for (c1_i47 = 0; c1_i47 < 32000000; c1_i47++) {
    c1_obj->PathXY[c1_i47] = rtNaN;
  }

  for (c1_i48 = 0; c1_i48 < 32000000; c1_i48++) {
    c1_obj->PathInGrid[c1_i48] = rtNaN;
  }

  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_pose, 2, &c1_p_emlrtRTEI);
  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_r1, 2, &c1_db_emlrtRTEI);
  if (c1_path->size[0] == 0) {
    c1_st.site = &c1_wc_emlrtRSI;
    c1_warning(chartInstance, &c1_st);
    c1_obj->PathCost = rtInf;
    c1_pathOut->size[0] = 0;
    c1_pathOut->size[1] = 0;
    c1_b_debugInfo->PathCost = c1_obj->PathCost;
  } else {
    c1_st.site = &c1_vc_emlrtRSI;
    c1_x_obj = c1_obj;
    c1_d7 = c1_x_obj->NumPathPoints;
    c1_b7 = (c1_d7 < 1.0);
    if (c1_b7) {
      c1_i49 = -1;
    } else {
      if (c1_d7 != (real_T)(int32_T)muDoubleScalarFloor(c1_d7)) {
        emlrtIntegerCheckR2012b(c1_d7, &c1_h_emlrtDCI, &c1_st);
      }

      c1_i50 = (int32_T)c1_d7;
      if ((c1_i50 < 1) || (c1_i50 > 16000000)) {
        emlrtDynamicBoundsCheckR2012b(c1_i50, 1, 16000000, &c1_j_emlrtBCI,
          &c1_st);
      }

      c1_i49 = c1_i50 - 1;
    }

    c1_i51 = c1_e_val->size[0];
    c1_e_val->size[0] = c1_i49 + 1;
    c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_val, c1_i51,
      &c1_n_emlrtRTEI);
    c1_i_loop_ub = c1_i49;
    for (c1_i53 = 0; c1_i53 <= c1_i_loop_ub; c1_i53++) {
      c1_e_val->data[c1_i53] = c1_x_obj->Path[c1_i53];
    }

    c1_i54 = c1_pose->size[0] * c1_pose->size[1];
    c1_pose->size[0] = c1_e_val->size[0];
    c1_pose->size[1] = 3;
    c1_st.site = &c1_vc_emlrtRSI;
    c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_pose, c1_i54,
      &c1_p_emlrtRTEI);
    for (c1_i58 = 0; c1_i58 < 3; c1_i58++) {
      c1_k_loop_ub = c1_e_val->size[0] - 1;
      for (c1_i61 = 0; c1_i61 <= c1_k_loop_ub; c1_i61++) {
        c1_d11 = c1_e_val->data[c1_i61];
        if (c1_d11 != (real_T)(int32_T)muDoubleScalarFloor(c1_d11)) {
          emlrtIntegerCheckR2012b(c1_d11, &c1_k_emlrtDCI, (emlrtConstCTX)c1_sp);
        }

        c1_i65 = (int32_T)c1_d11;
        if ((c1_i65 < 1) || (c1_i65 > 16000000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i65, 1, 16000000, &c1_m_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        c1_pose->data[c1_i61 + c1_pose->size[0] * c1_i58] = c1_obj->IdPose
          [(c1_i65 + 16000000 * c1_i58) - 1];
      }
    }

    for (c1_i60 = 0; c1_i60 < 32000000; c1_i60++) {
      chartInstance->c1_pathXYTemp[c1_i60] = rtNaN;
    }

    c1_d10 = c1_obj->NumPathPoints;
    c1_b9 = (c1_d10 < 1.0);
    if (c1_b9) {
      c1_i64 = -1;
    } else {
      if (c1_d10 != (real_T)(int32_T)muDoubleScalarFloor(c1_d10)) {
        emlrtIntegerCheckR2012b(c1_d10, &c1_d_emlrtDCI, (emlrtConstCTX)c1_sp);
      }

      c1_i68 = (int32_T)c1_d10;
      if ((c1_i68 < 1) || (c1_i68 > 16000000)) {
        emlrtDynamicBoundsCheckR2012b(c1_i68, 1, 16000000, &c1_e_emlrtBCI,
          (emlrtConstCTX)c1_sp);
      }

      c1_i64 = c1_i68 - 1;
    }

    c1_i69 = c1_r->size[0];
    c1_r->size[0] = c1_i64 + 1;
    c1_st.site = &c1_uc_emlrtRSI;
    c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i69,
      &c1_r_emlrtRTEI);
    c1_m_loop_ub = c1_i64;
    for (c1_i71 = 0; c1_i71 <= c1_m_loop_ub; c1_i71++) {
      c1_r->data[c1_i71] = c1_i71;
    }

    c1_emxInit_real_T1(chartInstance, c1_sp, &c1_b_pose, 2, &c1_t_emlrtRTEI);
    c1_i73 = c1_b_pose->size[0] * c1_b_pose->size[1];
    c1_b_pose->size[0] = c1_pose->size[0];
    c1_b_pose->size[1] = 2;
    c1_st.site = &c1_uc_emlrtRSI;
    c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_b_pose, c1_i73,
      &c1_t_emlrtRTEI);
    for (c1_i75 = 0; c1_i75 < 2; c1_i75++) {
      c1_o_loop_ub = c1_pose->size[0] - 1;
      for (c1_i77 = 0; c1_i77 <= c1_o_loop_ub; c1_i77++) {
        c1_b_pose->data[c1_i77 + c1_b_pose->size[0] * c1_i75] = c1_pose->
          data[c1_i77 + c1_pose->size[0] * c1_i75];
      }
    }

    c1_st.site = &c1_uc_emlrtRSI;
    c1_MapInterface_grid2world(chartInstance, &c1_st, c1_c_map, c1_b_pose, c1_r1);
    c1_emxFree_real_T(chartInstance, &c1_b_pose);
    c1_iv3[0] = c1_r->size[0];
    c1_iv3[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c1_iv3[0], 2, c1_r1->size, 2, &c1_d_emlrtECI,
      (void *)c1_sp);
    for (c1_i82 = 0; c1_i82 < 2; c1_i82++) {
      c1_q_loop_ub = c1_r1->size[0] - 1;
      for (c1_i85 = 0; c1_i85 <= c1_q_loop_ub; c1_i85++) {
        chartInstance->c1_pathXYTemp[c1_r->data[c1_i85] + 16000000 * c1_i82] =
          c1_r1->data[c1_i85 + c1_r1->size[0] * c1_i82];
      }
    }

    for (c1_i84 = 0; c1_i84 < 32000000; c1_i84++) {
      c1_obj->PathXY[c1_i84] = chartInstance->c1_pathXYTemp[c1_i84];
    }

    for (c1_i86 = 0; c1_i86 < 32000000; c1_i86++) {
      chartInstance->c1_pathXYTemp[c1_i86] = rtNaN;
    }

    c1_d13 = c1_obj->NumPathPoints;
    c1_b11 = (c1_d13 < 1.0);
    if (c1_b11) {
      c1_i90 = -1;
    } else {
      if (c1_d13 != (real_T)(int32_T)muDoubleScalarFloor(c1_d13)) {
        emlrtIntegerCheckR2012b(c1_d13, &c1_c_emlrtDCI, (emlrtConstCTX)c1_sp);
      }

      c1_i91 = (int32_T)c1_d13;
      if ((c1_i91 < 1) || (c1_i91 > 16000000)) {
        emlrtDynamicBoundsCheckR2012b(c1_i91, 1, 16000000, &c1_d_emlrtBCI,
          (emlrtConstCTX)c1_sp);
      }

      c1_i90 = c1_i91 - 1;
    }

    c1_i92 = c1_r->size[0];
    c1_r->size[0] = c1_i90 + 1;
    c1_st.site = &c1_kh_emlrtRSI;
    c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i92,
      &c1_u_emlrtRTEI);
    c1_s_loop_ub = c1_i90;
    for (c1_i94 = 0; c1_i94 <= c1_s_loop_ub; c1_i94++) {
      c1_r->data[c1_i94] = c1_i94;
    }

    c1_i96 = c1_r1->size[0] * c1_r1->size[1];
    c1_r1->size[0] = c1_pose->size[0];
    c1_r1->size[1] = 2;
    c1_st.site = &c1_kh_emlrtRSI;
    c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_r1, c1_i96,
      &c1_w_emlrtRTEI);
    for (c1_i98 = 0; c1_i98 < 2; c1_i98++) {
      c1_u_loop_ub = c1_pose->size[0] - 1;
      for (c1_i100 = 0; c1_i100 <= c1_u_loop_ub; c1_i100++) {
        c1_r1->data[c1_i100 + c1_r1->size[0] * c1_i98] = c1_pose->data[c1_i100 +
          c1_pose->size[0] * c1_i98];
      }
    }

    c1_iv4[0] = c1_r->size[0];
    c1_iv4[1] = 2;
    emlrtSubAssignSizeCheckR2012b(&c1_iv4[0], 2, c1_r1->size, 2, &c1_c_emlrtECI,
      (void *)c1_sp);
    for (c1_i101 = 0; c1_i101 < 2; c1_i101++) {
      c1_v_loop_ub = c1_r1->size[0] - 1;
      for (c1_i104 = 0; c1_i104 <= c1_v_loop_ub; c1_i104++) {
        chartInstance->c1_pathXYTemp[c1_r->data[c1_i104] + 16000000 * c1_i101] =
          c1_r1->data[c1_i104 + c1_r1->size[0] * c1_i101];
      }
    }

    for (c1_i102 = 0; c1_i102 < 32000000; c1_i102++) {
      c1_obj->PathInGrid[c1_i102] = chartInstance->c1_pathXYTemp[c1_i102];
    }

    c1_st.site = &c1_tc_emlrtRSI;
    c1_g_x = c1_obj->IsGrid;
    c1_h_x = c1_g_x;
    c1_d_b = muDoubleScalarIsNaN(c1_h_x);
    if (c1_d_b) {
      c1_n_y = NULL;
      sf_mex_assign(&c1_n_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c1_o_y = NULL;
      sf_mex_assign(&c1_o_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c1_st, &c1_i_emlrtMCI, "error", 0U, 2U, 14, c1_n_y, 14,
                  sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c1_st, NULL, "message", 1U, 1U, 14, c1_o_y)));
    }

    if (c1_obj->IsGrid != 0.0) {
      c1_st.site = &c1_sc_emlrtRSI;
      c1_plannerAStarGrid_get_PathInGrid(chartInstance, &c1_st, c1_obj, c1_r1);
      c1_i108 = c1_pathOut->size[0] * c1_pathOut->size[1];
      c1_pathOut->size[0] = c1_r1->size[0];
      c1_pathOut->size[1] = 2;
      c1_st.site = &c1_sc_emlrtRSI;
      c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_pathOut, c1_i108,
        &c1_ab_emlrtRTEI);
      c1_y_loop_ub = (c1_r1->size[0] << 1) - 1;
      for (c1_i110 = 0; c1_i110 <= c1_y_loop_ub; c1_i110++) {
        c1_pathOut->data[c1_i110] = c1_r1->data[c1_i110];
      }
    } else {
      c1_st.site = &c1_rc_emlrtRSI;
      c1_plannerAStarGrid_get_PathXY(chartInstance, &c1_st, c1_obj, c1_r1);
      c1_i107 = c1_pathOut->size[0] * c1_pathOut->size[1];
      c1_pathOut->size[0] = c1_r1->size[0];
      c1_pathOut->size[1] = 2;
      c1_st.site = &c1_rc_emlrtRSI;
      c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_pathOut, c1_i107,
        &c1_y_emlrtRTEI);
      c1_x_loop_ub = (c1_r1->size[0] << 1) - 1;
      for (c1_i109 = 0; c1_i109 <= c1_x_loop_ub; c1_i109++) {
        c1_pathOut->data[c1_i109] = c1_r1->data[c1_i109];
      }
    }
  }

  c1_emxFree_real_T(chartInstance, &c1_e_val);
  c1_emxFree_real_T(chartInstance, &c1_path);
  c1_i52 = c1_pose->size[0] * c1_pose->size[1];
  c1_pose->size[0] = c1_nodesExIn->size[0];
  c1_pose->size[1] = 3;
  c1_st.site = &c1_sh_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_pose, c1_i52,
    &c1_o_emlrtRTEI);
  for (c1_i55 = 0; c1_i55 < 3; c1_i55++) {
    c1_j_loop_ub = c1_nodesExIn->size[0] - 1;
    for (c1_i57 = 0; c1_i57 <= c1_j_loop_ub; c1_i57++) {
      c1_d8 = c1_nodesExIn->data[c1_i57];
      if (c1_d8 != (real_T)(int32_T)muDoubleScalarFloor(c1_d8)) {
        emlrtIntegerCheckR2012b(c1_d8, &c1_l_emlrtDCI, (emlrtConstCTX)c1_sp);
      }

      c1_i62 = (int32_T)c1_d8;
      if ((c1_i62 < 1) || (c1_i62 > 16000000)) {
        emlrtDynamicBoundsCheckR2012b(c1_i62, 1, 16000000, &c1_n_emlrtBCI,
          (emlrtConstCTX)c1_sp);
      }

      c1_pose->data[c1_i57 + c1_pose->size[0] * c1_i55] = c1_obj->IdPose[(c1_i62
        + 16000000 * c1_i55) - 1];
    }
  }

  c1_emxFree_real_T(chartInstance, &c1_nodesExIn);
  for (c1_i56 = 0; c1_i56 < 32000000; c1_i56++) {
    c1_obj->NodesExploredInGrid[c1_i56] = rtNaN;
  }

  for (c1_i59 = 0; c1_i59 < 32000000; c1_i59++) {
    chartInstance->c1_pathXYTemp[c1_i59] = 0.0;
  }

  c1_d9 = c1_obj->NumNodesExplored;
  c1_b8 = (c1_d9 < 1.0);
  if (c1_b8) {
    c1_i63 = -1;
  } else {
    if (c1_d9 != (real_T)(int32_T)muDoubleScalarFloor(c1_d9)) {
      emlrtIntegerCheckR2012b(c1_d9, &c1_b_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i66 = (int32_T)c1_d9;
    if ((c1_i66 < 1) || (c1_i66 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i66, 1, 16000000, &c1_c_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i63 = c1_i66 - 1;
  }

  c1_i67 = c1_r->size[0];
  c1_r->size[0] = c1_i63 + 1;
  c1_st.site = &c1_lh_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i67,
    &c1_q_emlrtRTEI);
  c1_l_loop_ub = c1_i63;
  for (c1_i70 = 0; c1_i70 <= c1_l_loop_ub; c1_i70++) {
    c1_r->data[c1_i70] = c1_i70;
  }

  c1_i72 = c1_r1->size[0] * c1_r1->size[1];
  c1_r1->size[0] = c1_pose->size[0];
  c1_r1->size[1] = 2;
  c1_st.site = &c1_lh_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_r1, c1_i72,
    &c1_s_emlrtRTEI);
  for (c1_i74 = 0; c1_i74 < 2; c1_i74++) {
    c1_n_loop_ub = c1_pose->size[0] - 1;
    for (c1_i76 = 0; c1_i76 <= c1_n_loop_ub; c1_i76++) {
      c1_r1->data[c1_i76 + c1_r1->size[0] * c1_i74] = c1_pose->data[c1_i76 +
        c1_pose->size[0] * c1_i74];
    }
  }

  c1_iv2[0] = c1_r->size[0];
  c1_iv2[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&c1_iv2[0], 2, c1_r1->size, 2, &c1_b_emlrtECI,
    (void *)c1_sp);
  for (c1_i78 = 0; c1_i78 < 2; c1_i78++) {
    c1_p_loop_ub = c1_r1->size[0] - 1;
    for (c1_i80 = 0; c1_i80 <= c1_p_loop_ub; c1_i80++) {
      chartInstance->c1_pathXYTemp[c1_r->data[c1_i80] + 16000000 * c1_i78] =
        c1_r1->data[c1_i80 + c1_r1->size[0] * c1_i78];
    }
  }

  for (c1_i79 = 0; c1_i79 < 32000000; c1_i79++) {
    c1_obj->NodesExploredInGrid[c1_i79] = chartInstance->c1_pathXYTemp[c1_i79];
  }

  for (c1_i81 = 0; c1_i81 < 32000000; c1_i81++) {
    c1_obj->NodesExploredXY[c1_i81] = rtNaN;
  }

  for (c1_i83 = 0; c1_i83 < 32000000; c1_i83++) {
    chartInstance->c1_pathXYTemp[c1_i83] = 0.0;
  }

  c1_d12 = c1_obj->NumNodesExplored;
  c1_b10 = (c1_d12 < 1.0);
  if (c1_b10) {
    c1_i87 = -1;
  } else {
    if (c1_d12 != (real_T)(int32_T)muDoubleScalarFloor(c1_d12)) {
      emlrtIntegerCheckR2012b(c1_d12, &c1_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i88 = (int32_T)c1_d12;
    if ((c1_i88 < 1) || (c1_i88 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i88, 1, 16000000, &c1_b_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i87 = c1_i88 - 1;
  }

  c1_i89 = c1_r->size[0];
  c1_r->size[0] = c1_i87 + 1;
  c1_st.site = &c1_qc_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i89,
    &c1_v_emlrtRTEI);
  c1_r_loop_ub = c1_i87;
  for (c1_i93 = 0; c1_i93 <= c1_r_loop_ub; c1_i93++) {
    c1_r->data[c1_i93] = c1_i93;
  }

  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_c_pose, 2, &c1_x_emlrtRTEI);
  c1_i95 = c1_c_pose->size[0] * c1_c_pose->size[1];
  c1_c_pose->size[0] = c1_pose->size[0];
  c1_c_pose->size[1] = 2;
  c1_st.site = &c1_qc_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_c_pose, c1_i95,
    &c1_x_emlrtRTEI);
  for (c1_i97 = 0; c1_i97 < 2; c1_i97++) {
    c1_t_loop_ub = c1_pose->size[0] - 1;
    for (c1_i99 = 0; c1_i99 <= c1_t_loop_ub; c1_i99++) {
      c1_c_pose->data[c1_i99 + c1_c_pose->size[0] * c1_i97] = c1_pose->
        data[c1_i99 + c1_pose->size[0] * c1_i97];
    }
  }

  c1_emxFree_real_T(chartInstance, &c1_pose);
  c1_st.site = &c1_qc_emlrtRSI;
  c1_MapInterface_grid2world(chartInstance, &c1_st, c1_c_map, c1_c_pose, c1_r1);
  c1_emxFree_real_T(chartInstance, &c1_c_pose);
  c1_iv5[0] = c1_r->size[0];
  c1_iv5[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&c1_iv5[0], 2, c1_r1->size, 2, &c1_emlrtECI,
    (void *)c1_sp);
  for (c1_i103 = 0; c1_i103 < 2; c1_i103++) {
    c1_w_loop_ub = c1_r1->size[0] - 1;
    for (c1_i105 = 0; c1_i105 <= c1_w_loop_ub; c1_i105++) {
      chartInstance->c1_pathXYTemp[c1_r->data[c1_i105] + 16000000 * c1_i103] =
        c1_r1->data[c1_i105 + c1_r1->size[0] * c1_i103];
    }
  }

  c1_emxFree_real_T(chartInstance, &c1_r1);
  c1_emxFree_int32_T(chartInstance, &c1_r);
  for (c1_i106 = 0; c1_i106 < 32000000; c1_i106++) {
    c1_obj->NodesExploredXY[c1_i106] = chartInstance->c1_pathXYTemp[c1_i106];
  }
}

static void c1_plannerAStarGrid_validateStartGoal(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj,
  c1_binaryOccupancyMap *c1_c_map, real_T c1_StartInGrid[2], real_T
  c1_GoalInGrid[2])
{
  static char_T c1_b_cv4[46] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l',
    'g', 's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r',
    'g', 'r', 'i', 'd', ':', 'C', 'o', 'o', 'r', 'd', 'i', 'n', 'a', 't', 'e',
    'O', 'u', 't', 's', 'i', 'd', 'e' };

  static char_T c1_b_cv6[45] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l',
    'g', 's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r',
    'g', 'r', 'i', 'd', ':', 'O', 'c', 'c', 'u', 'p', 'i', 'e', 'd', 'L', 'o',
    'c', 'a', 't', 'i', 'o', 'n' };

  static char_T c1_b_cv[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'l', 'a',
    'n', 'O', 'M', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I', 'n', 't',
    'e', 'g', 'e', 'r' };

  static char_T c1_b_cv5[11] = { 'X', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i',
    'o', 'n' };

  static char_T c1_b_cv7[11] = { 'Y', ' ', 'd', 'i', 'r', 'e', 'c', 't', 'i',
    'o', 'n' };

  static char_T c1_b_cv1[9] = { 's', 't', 'a', 'r', 't', 'G', 'o', 'a', 'l' };

  static char_T c1_b_cv3[7] = { 'c', 'o', 'l', 'u', 'm', 'n', 's' };

  static char_T c1_rfmt[7] = { '%', '2', '3', '.', '1', '5', 'e' };

  static char_T c1_b_cv8[5] = { 's', 't', 'a', 'r', 't' };

  static char_T c1_b_cv2[4] = { 'r', 'o', 'w', 's' };

  static char_T c1_b_cv9[4] = { 'g', 'o', 'a', 'l' };

  c1_binaryOccupancyMap *c1_b_obj;
  c1_binaryOccupancyMap *c1_e_obj;
  c1_matlabshared_autonomous_internal_SharedMapProperties *c1_c_obj;
  c1_matlabshared_autonomous_internal_SharedMapProperties *c1_f_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_ab_y = NULL;
  const mxArray *c1_bb_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_cb_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_db_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_eb_y = NULL;
  const mxArray *c1_fb_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_l_y = NULL;
  const mxArray *c1_m_y = NULL;
  const mxArray *c1_n_y = NULL;
  const mxArray *c1_o_y = NULL;
  const mxArray *c1_p_y = NULL;
  const mxArray *c1_q_y = NULL;
  const mxArray *c1_r_y = NULL;
  const mxArray *c1_s_y = NULL;
  const mxArray *c1_t_y = NULL;
  const mxArray *c1_u_y = NULL;
  const mxArray *c1_v_y = NULL;
  const mxArray *c1_w_y = NULL;
  const mxArray *c1_x_y = NULL;
  const mxArray *c1_y_y = NULL;
  real_T c1_pos[4];
  real_T c1_mapSizeX[2];
  real_T c1_mapSizeY[2];
  real_T c1_b_k;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_d_k;
  real_T c1_d_obj;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_f_y;
  real_T c1_g_obj;
  real_T c1_g_x;
  real_T c1_goalNode;
  real_T c1_h_x;
  real_T c1_i_x;
  real_T c1_j_x;
  real_T c1_k_x;
  real_T c1_l_x;
  real_T c1_m_x;
  real_T c1_n_x;
  real_T c1_o_x;
  real_T c1_p_x;
  real_T c1_q_x;
  real_T c1_startNode;
  int32_T c1_strX_size[2];
  int32_T c1_strY_size[2];
  int32_T c1_c_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_k;
  char_T c1_str[23];
  char_T c1_strX_data[11];
  char_T c1_strY_data[11];
  boolean_T c1_b_bv[2];
  boolean_T c1_validIdx[2];
  boolean_T c1_x_data[2];
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_b;
  boolean_T c1_c_p;
  boolean_T c1_d_b;
  boolean_T c1_e_b;
  boolean_T c1_exitg1;
  boolean_T c1_f_b;
  boolean_T c1_g_y;
  boolean_T c1_isGoalOccupied;
  boolean_T c1_isStartOccupied;
  boolean_T c1_p;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_st.site = &c1_rd_emlrtRSI;
  c1_i = 0;
  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_pos[c1_i] = c1_StartInGrid[c1_i1];
    c1_i += 2;
  }

  c1_i2 = 0;
  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    c1_pos[c1_i2 + 1] = c1_GoalInGrid[c1_i3];
    c1_i2 += 2;
  }

  c1_b_st.site = &c1_ae_emlrtRSI;
  c1_c_st.site = &c1_pc_emlrtRSI;
  c1_p = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 4)) {
    c1_b_k = (real_T)c1_k + 1.0;
    c1_b_x = c1_pos[(int32_T)c1_b_k - 1];
    c1_c_x = c1_b_x;
    c1_d_x = c1_c_x;
    c1_c_b = muDoubleScalarIsInf(c1_d_x);
    c1_b1 = !c1_c_b;
    c1_e_x = c1_c_x;
    c1_d_b = muDoubleScalarIsNaN(c1_e_x);
    c1_b2 = !c1_d_b;
    c1_e_b = (c1_b1 && c1_b2);
    if (c1_e_b) {
      c1_f_x = c1_b_x;
      c1_g_x = c1_f_x;
      c1_f_y = c1_g_x;
      c1_f_y = muDoubleScalarFloor(c1_f_y);
      if (c1_f_y == c1_b_x) {
        c1_b_p = true;
      } else {
        c1_b_p = false;
      }
    } else {
      c1_b_p = false;
    }

    c1_c_p = c1_b_p;
    if (c1_c_p) {
      c1_k++;
    } else {
      c1_p = false;
      c1_exitg1 = true;
    }
  }

  if (c1_p) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c1_c_st, &c1_o_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 2U, 14, c1_d_y, 14, c1_e_y)));
  }

  for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
    c1_validIdx[c1_i4] = (c1_pos[c1_i4] <= 4000.0);
  }

  for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
    c1_b_bv[c1_i5] = (c1_pos[c1_i5 + 2] <= 4000.0);
  }

  for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
    c1_validIdx[c1_i6] = (c1_validIdx[c1_i6] && c1_b_bv[c1_i6]);
  }

  for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
    c1_b_bv[c1_i7] = (c1_pos[c1_i7] >= 1.0);
  }

  for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
    c1_validIdx[c1_i8] = (c1_validIdx[c1_i8] && c1_b_bv[c1_i8]);
  }

  for (c1_i9 = 0; c1_i9 < 2; c1_i9++) {
    c1_b_bv[c1_i9] = (c1_pos[c1_i9 + 2] >= 1.0);
  }

  for (c1_i10 = 0; c1_i10 < 2; c1_i10++) {
    c1_validIdx[c1_i10] = (c1_validIdx[c1_i10] && c1_b_bv[c1_i10]);
  }

  for (c1_i11 = 0; c1_i11 < 2; c1_i11++) {
    c1_validIdx[c1_i11] = !c1_validIdx[c1_i11];
  }

  for (c1_i12 = 0; c1_i12 < 2; c1_i12++) {
    c1_x_data[c1_i12] = c1_validIdx[c1_i12];
  }

  c1_g_y = false;
  c1_c_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_c_k < 2)) {
    c1_d_k = (real_T)c1_c_k + 1.0;
    if (!c1_x_data[(int32_T)c1_d_k - 1]) {
      c1_b3 = true;
    } else {
      c1_b3 = false;
    }

    if (!c1_b3) {
      c1_g_y = true;
      c1_exitg1 = true;
    } else {
      c1_c_k++;
    }
  }

  if (c1_g_y) {
    c1_st.site = &c1_sd_emlrtRSI;
    c1_h_x = c1_obj->IsGrid;
    c1_i_x = c1_h_x;
    c1_f_b = muDoubleScalarIsNaN(c1_i_x);
    if (c1_f_b) {
      c1_h_y = NULL;
      sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c1_i_y = NULL;
      sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c1_st, &c1_i_emlrtMCI, "error", 0U, 2U, 14, c1_h_y, 14,
                  sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c1_st, NULL, "message", 1U, 1U, 14, c1_i_y)));
    }

    if (!(c1_obj->IsGrid != 0.0)) {
      c1_st.site = &c1_td_emlrtRSI;
      c1_b_obj = c1_c_map;
      c1_b_st.site = &c1_be_emlrtRSI;
      c1_c_obj = &c1_b_obj->SharedProperties;
      c1_d_obj = c1_c_obj->LocalOriginInWorld[0] + c1_c_obj->GridOriginInLocal[0];
      for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
        c1_mapSizeX[c1_i18] = c1_d_obj + 40.0 * (real_T)c1_i18;
      }

      c1_st.site = &c1_ud_emlrtRSI;
      c1_e_obj = c1_c_map;
      c1_b_st.site = &c1_ce_emlrtRSI;
      c1_f_obj = &c1_e_obj->SharedProperties;
      c1_g_obj = c1_f_obj->LocalOriginInWorld[1] + c1_f_obj->GridOriginInLocal[1];
      for (c1_i22 = 0; c1_i22 < 2; c1_i22++) {
        c1_mapSizeY[c1_i22] = c1_g_obj + 40.0 * (real_T)c1_i22;
      }

      c1_strX_size[1] = 11;
      for (c1_i23 = 0; c1_i23 < 11; c1_i23++) {
        c1_strX_data[c1_i23] = c1_b_cv5[c1_i23];
      }

      c1_strY_size[1] = 11;
      for (c1_i24 = 0; c1_i24 < 11; c1_i24++) {
        c1_strY_data[c1_i24] = c1_b_cv7[c1_i24];
      }
    } else {
      for (c1_i14 = 0; c1_i14 < 2; c1_i14++) {
        c1_mapSizeX[c1_i14] = 1.0 + 3999.0 * (real_T)c1_i14;
      }

      for (c1_i16 = 0; c1_i16 < 2; c1_i16++) {
        c1_mapSizeY[c1_i16] = 1.0 + 3999.0 * (real_T)c1_i16;
      }

      c1_strX_size[1] = 4;
      for (c1_i17 = 0; c1_i17 < 4; c1_i17++) {
        c1_strX_data[c1_i17] = c1_b_cv2[c1_i17];
      }

      c1_strY_size[1] = 7;
      for (c1_i20 = 0; c1_i20 < 7; c1_i20++) {
        c1_strY_data[c1_i20] = c1_b_cv3[c1_i20];
      }
    }

    c1_j_y = NULL;
    sf_mex_assign(&c1_j_y, sf_mex_create("y", c1_b_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_k_y = NULL;
    sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_b_cv4, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c1_st.site = &c1_vd_emlrtRSI;
    c1_j_x = c1_mapSizeX[0];
    c1_b_st.site = &c1_de_emlrtRSI;
    c1_k_x = c1_j_x;
    c1_m_y = NULL;
    sf_mex_assign(&c1_m_y, sf_mex_create("y", c1_rfmt, 10, 0U, 1U, 0U, 2, 1, 7),
                  false);
    c1_o_y = NULL;
    sf_mex_assign(&c1_o_y, sf_mex_create("y", &c1_k_x, 0, 0U, 0U, 0U, 0), false);
    c1_c_st.site = &c1_ee_emlrtRSI;
    c1_emlrt_marshallIn(chartInstance, c1_sprintf(chartInstance, &c1_c_st,
      c1_m_y, c1_o_y), "<output of sprintf>", c1_str);
    c1_s_y = NULL;
    sf_mex_assign(&c1_s_y, sf_mex_create("y", c1_str, 10, 0U, 1U, 0U, 2, 1, 23),
                  false);
    c1_st.site = &c1_vd_emlrtRSI;
    c1_l_x = c1_mapSizeX[1];
    c1_b_st.site = &c1_de_emlrtRSI;
    c1_m_x = c1_l_x;
    c1_u_y = NULL;
    sf_mex_assign(&c1_u_y, sf_mex_create("y", c1_rfmt, 10, 0U, 1U, 0U, 2, 1, 7),
                  false);
    c1_v_y = NULL;
    sf_mex_assign(&c1_v_y, sf_mex_create("y", &c1_m_x, 0, 0U, 0U, 0U, 0), false);
    c1_c_st.site = &c1_ee_emlrtRSI;
    c1_emlrt_marshallIn(chartInstance, c1_sprintf(chartInstance, &c1_c_st,
      c1_u_y, c1_v_y), "<output of sprintf>", c1_str);
    c1_w_y = NULL;
    sf_mex_assign(&c1_w_y, sf_mex_create("y", c1_str, 10, 0U, 1U, 0U, 2, 1, 23),
                  false);
    c1_x_y = NULL;
    sf_mex_assign(&c1_x_y, sf_mex_create("y", &c1_strX_data, 10, 0U, 1U, 0U, 2,
      1, c1_strX_size[1]), false);
    c1_st.site = &c1_wd_emlrtRSI;
    c1_n_x = c1_mapSizeY[0];
    c1_b_st.site = &c1_de_emlrtRSI;
    c1_o_x = c1_n_x;
    c1_y_y = NULL;
    sf_mex_assign(&c1_y_y, sf_mex_create("y", c1_rfmt, 10, 0U, 1U, 0U, 2, 1, 7),
                  false);
    c1_ab_y = NULL;
    sf_mex_assign(&c1_ab_y, sf_mex_create("y", &c1_o_x, 0, 0U, 0U, 0U, 0), false);
    c1_c_st.site = &c1_ee_emlrtRSI;
    c1_emlrt_marshallIn(chartInstance, c1_sprintf(chartInstance, &c1_c_st,
      c1_y_y, c1_ab_y), "<output of sprintf>", c1_str);
    c1_bb_y = NULL;
    sf_mex_assign(&c1_bb_y, sf_mex_create("y", c1_str, 10, 0U, 1U, 0U, 2, 1, 23),
                  false);
    c1_st.site = &c1_wd_emlrtRSI;
    c1_p_x = c1_mapSizeY[1];
    c1_b_st.site = &c1_de_emlrtRSI;
    c1_q_x = c1_p_x;
    c1_cb_y = NULL;
    sf_mex_assign(&c1_cb_y, sf_mex_create("y", c1_rfmt, 10, 0U, 1U, 0U, 2, 1, 7),
                  false);
    c1_db_y = NULL;
    sf_mex_assign(&c1_db_y, sf_mex_create("y", &c1_q_x, 0, 0U, 0U, 0U, 0), false);
    c1_c_st.site = &c1_ee_emlrtRSI;
    c1_emlrt_marshallIn(chartInstance, c1_sprintf(chartInstance, &c1_c_st,
      c1_cb_y, c1_db_y), "<output of sprintf>", c1_str);
    c1_eb_y = NULL;
    sf_mex_assign(&c1_eb_y, sf_mex_create("y", c1_str, 10, 0U, 1U, 0U, 2, 1, 23),
                  false);
    c1_fb_y = NULL;
    sf_mex_assign(&c1_fb_y, sf_mex_create("y", &c1_strY_data, 10, 0U, 1U, 0U, 2,
      1, c1_strY_size[1]), false);
    sf_mex_call(c1_sp, &c1_l_emlrtMCI, "error", 0U, 2U, 14, c1_j_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 7U, 14, c1_k_y, 14, c1_s_y, 14, c1_w_y, 14,
       c1_x_y, 14, c1_bb_y, 14, c1_eb_y, 14, c1_fb_y)));
  }

  if (c1_GoalInGrid[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_GoalInGrid[0]))
  {
    emlrtIntegerCheckR2012b(c1_GoalInGrid[0], &c1_m_emlrtDCI, (emlrtConstCTX)
      c1_sp);
  }

  c1_i13 = (int32_T)c1_GoalInGrid[0];
  if ((c1_i13 < 1) || (c1_i13 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i13, 1, 4000, &c1_o_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_GoalInGrid[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_GoalInGrid[1]))
  {
    emlrtIntegerCheckR2012b(c1_GoalInGrid[1], &c1_n_emlrtDCI, (emlrtConstCTX)
      c1_sp);
  }

  c1_i15 = (int32_T)c1_GoalInGrid[1];
  if ((c1_i15 < 1) || (c1_i15 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i15, 1, 4000, &c1_p_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_goalNode = c1_obj->PoseId[(c1_i13 + 4000 * (c1_i15 - 1)) - 1];
  if (c1_StartInGrid[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_StartInGrid[0]))
  {
    emlrtIntegerCheckR2012b(c1_StartInGrid[0], &c1_o_emlrtDCI, (emlrtConstCTX)
      c1_sp);
  }

  c1_i19 = (int32_T)c1_StartInGrid[0];
  if ((c1_i19 < 1) || (c1_i19 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i19, 1, 4000, &c1_q_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_StartInGrid[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_StartInGrid[1]))
  {
    emlrtIntegerCheckR2012b(c1_StartInGrid[1], &c1_p_emlrtDCI, (emlrtConstCTX)
      c1_sp);
  }

  c1_i21 = (int32_T)c1_StartInGrid[1];
  if ((c1_i21 < 1) || (c1_i21 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i21, 1, 4000, &c1_r_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_startNode = c1_obj->PoseId[(c1_i19 + 4000 * (c1_i21 - 1)) - 1];
  c1_st.site = &c1_xd_emlrtRSI;
  c1_isStartOccupied = (c1_plannerAStarGrid_getNodeCostOMDefault(chartInstance,
    &c1_st, c1_obj, c1_startNode) == rtInf);
  if (c1_isStartOccupied) {
    c1_l_y = NULL;
    sf_mex_assign(&c1_l_y, sf_mex_create("y", c1_b_cv6, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_n_y = NULL;
    sf_mex_assign(&c1_n_y, sf_mex_create("y", c1_b_cv6, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_q_y = NULL;
    sf_mex_assign(&c1_q_y, sf_mex_create("y", c1_b_cv8, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(c1_sp, &c1_m_emlrtMCI, "error", 0U, 2U, 14, c1_l_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 2U, 14, c1_n_y, 14, c1_q_y)));
  }

  c1_st.site = &c1_yd_emlrtRSI;
  c1_isGoalOccupied = (c1_plannerAStarGrid_getNodeCostOMDefault(chartInstance,
    &c1_st, c1_obj, c1_goalNode) == rtInf);
  if (c1_isGoalOccupied) {
    c1_p_y = NULL;
    sf_mex_assign(&c1_p_y, sf_mex_create("y", c1_b_cv6, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_r_y = NULL;
    sf_mex_assign(&c1_r_y, sf_mex_create("y", c1_b_cv6, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_t_y = NULL;
    sf_mex_assign(&c1_t_y, sf_mex_create("y", c1_b_cv9, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c1_sp, &c1_n_emlrtMCI, "error", 0U, 2U, 14, c1_p_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 2U, 14, c1_r_y, 14, c1_t_y)));
  }
}

static real_T c1_plannerAStarGrid_getNodeCostOMDefault
  (SFc1_aSPPAOAIWInstanceStruct *chartInstance, const emlrtStack *c1_sp,
   c1_plannerAStarGrid *c1_obj, real_T c1_currentNode)
{
  emlrtStack c1_st;
  real_T c1_c_dv[1];
  real_T c1_dv1[1];
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_c_y;
  real_T c1_cost;
  int32_T c1_b_tmp_size[2];
  int32_T c1_tmp_size[2];
  int32_T c1_b_tmp_data[1];
  int32_T c1_tmp_data[1];
  int32_T c1_b_end;
  int32_T c1_b_i;
  int32_T c1_b_loop_ub;
  int32_T c1_b_partialTrueCount;
  int32_T c1_b_trueCount;
  int32_T c1_c_i;
  int32_T c1_d_i;
  int32_T c1_e_i;
  int32_T c1_end;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_loop_ub;
  int32_T c1_partialTrueCount;
  int32_T c1_trueCount;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_fe_emlrtRSI;
  c1_plannerAStarGrid_updateMap(chartInstance, &c1_st, c1_obj);
  if (c1_currentNode != (real_T)(int32_T)muDoubleScalarFloor(c1_currentNode)) {
    emlrtIntegerCheckR2012b(c1_currentNode, &c1_q_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i = (int32_T)c1_currentNode;
  if ((c1_i < 1) || (c1_i > 16000000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i, 1, 16000000, &c1_s_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_cost = c1_obj->OccupancyMatrix[c1_i - 1];
  c1_b_x = c1_cost * 10000.0;
  c1_c_x = c1_b_x;
  c1_c_y = c1_c_x;
  c1_c_y = muDoubleScalarRound(c1_c_y);
  c1_cost = c1_c_y / 10000.0;
  c1_c_dv[0] = c1_cost;
  c1_end = 1;
  c1_trueCount = 0;
  for (c1_b_i = 0; c1_b_i < c1_end; c1_b_i++) {
    if (c1_cost > c1_obj->OccupiedThreshold) {
      c1_trueCount++;
    }
  }

  c1_tmp_size[1] = c1_trueCount;
  c1_partialTrueCount = 0;
  for (c1_c_i = 0; c1_c_i < c1_end; c1_c_i++) {
    if (c1_cost > c1_obj->OccupiedThreshold) {
      c1_tmp_data[c1_partialTrueCount] = c1_c_i;
      c1_partialTrueCount++;
    }
  }

  c1_loop_ub = c1_tmp_size[1] - 1;
  for (c1_i1 = 0; c1_i1 <= c1_loop_ub; c1_i1++) {
    c1_c_dv[c1_tmp_data[c1_i1]] = rtInf;
  }

  c1_cost = c1_c_dv[0];
  c1_dv1[0] = c1_cost;
  c1_b_end = 1;
  c1_b_trueCount = 0;
  for (c1_d_i = 0; c1_d_i < c1_b_end; c1_d_i++) {
    if (c1_cost <= c1_obj->OccupiedThreshold) {
      c1_b_trueCount++;
    }
  }

  c1_b_tmp_size[1] = c1_b_trueCount;
  c1_b_partialTrueCount = 0;
  for (c1_e_i = 0; c1_e_i < c1_b_end; c1_e_i++) {
    if (c1_cost <= c1_obj->OccupiedThreshold) {
      c1_b_tmp_data[c1_b_partialTrueCount] = c1_e_i;
      c1_b_partialTrueCount++;
    }
  }

  c1_b_loop_ub = c1_b_tmp_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_b_loop_ub; c1_i2++) {
    c1_dv1[c1_b_tmp_data[c1_i2]] = 0.0;
  }

  return c1_dv1[0];
}

static c1_nav_algs_internal_plannerAStarGrid
  *c1_b_plannerAStarGrid_plannerAStarGrid(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_nav_algs_internal_plannerAStarGrid *c1_obj, real_T
  c1_c_map[16000000], real_T c1_obstacleThreshold)
{
  c1_nav_algs_internal_plannerAStarGrid *c1_b_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_c_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_this;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  c1_b_obj = c1_obj;
  c1_b_obj->NumPathPoints = 0.0;
  c1_b_obj->UseCustomG = 0.0;
  c1_b_obj->UseCustomH = 0.0;
  c1_b_obj->GCostMethod = 1.0;
  c1_b_obj->HCostMethod = 1.0;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    c1_b_obj->Map[c1_i] = c1_c_map[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 32000000; c1_i1++) {
    c1_b_obj->PathInternal[c1_i1] = 0.0;
  }

  for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
    c1_b_obj->PathIndicesInternal[c1_i2] = 0.0;
  }

  for (c1_i3 = 0; c1_i3 < 16000000; c1_i3++) {
    c1_b_obj->NodesExploredIndicesInternal[c1_i3] = 0.0;
  }

  for (c1_i4 = 0; c1_i4 < 32000000; c1_i4++) {
    c1_b_obj->NodesExploredInternal[c1_i4] = 0.0;
  }

  c1_b_obj->ObstacleThreshold = c1_obstacleThreshold;
  c1_b_obj->MapResolution = 100.0;
  for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
    c1_b_obj->ParentCol[c1_i5] = 0.0;
  }

  for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
    c1_b_obj->ParentRow[c1_i6] = 0.0;
  }

  for (c1_i7 = 0; c1_i7 < 16000000; c1_i7++) {
    chartInstance->c1_b_y[c1_i7] = 1.0 + (real_T)c1_i7;
  }

  for (c1_i8 = 0; c1_i8 < 16000000; c1_i8++) {
    c1_b_obj->MapIndex[c1_i8] = chartInstance->c1_b_y[c1_i8];
  }

  for (c1_i9 = 0; c1_i9 < 16000000; c1_i9++) {
    chartInstance->c1_b_y[c1_i9] = 1.0 + (real_T)c1_i9;
  }

  c1_b_ind2sub(chartInstance, chartInstance->c1_b_y,
               chartInstance->c1_varargout_3, chartInstance->c1_b_varargout_4);
  for (c1_i10 = 0; c1_i10 < 16000000; c1_i10++) {
    chartInstance->c1_b_y[c1_i10] = (real_T)chartInstance->c1_varargout_3[c1_i10];
  }

  for (c1_i11 = 0; c1_i11 < 16000000; c1_i11++) {
    chartInstance->c1_allCol[c1_i11] = (real_T)chartInstance->
      c1_b_varargout_4[c1_i11];
  }

  for (c1_i12 = 0; c1_i12 < 16000000; c1_i12++) {
    c1_b_obj->AllNodes[c1_i12] = chartInstance->c1_b_y[c1_i12];
  }

  for (c1_i13 = 0; c1_i13 < 16000000; c1_i13++) {
    c1_b_obj->AllNodes[c1_i13 + 16000000] = chartInstance->c1_allCol[c1_i13];
  }

  return c1_b_obj;
}

static void c1_b_ind2sub(SFc1_aSPPAOAIWInstanceStruct *chartInstance, real_T
  c1_ndx[16000000], int32_T c1_varargout_1[16000000], int32_T c1_varargout_2
  [16000000])
{
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    c1_varargout_1[c1_i] = (int32_T)c1_ndx[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 16000000; c1_i1++) {
    c1_varargout_1[c1_i1]--;
  }

  for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
    chartInstance->c1_b_vk[c1_i2] = c1_div_nzp_s32(chartInstance,
      c1_varargout_1[c1_i2], 4000, 0, 0U, 0, 0);
  }

  for (c1_i3 = 0; c1_i3 < 16000000; c1_i3++) {
    c1_varargout_2[c1_i3] = chartInstance->c1_b_vk[c1_i3] + 1;
  }

  for (c1_i4 = 0; c1_i4 < 16000000; c1_i4++) {
    chartInstance->c1_b_vk[c1_i4] *= 4000;
  }

  for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
    c1_varargout_1[c1_i5] -= chartInstance->c1_b_vk[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
    c1_varargout_1[c1_i6]++;
  }
}

static void c1_b_plannerAStarGrid_plan(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_startIn[2], real_T c1_goalIn[2])
{
  static char_T c1_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  c1_emxArray_int32_T *c1_ii;
  c1_emxArray_real_T *c1_expNodes;
  c1_emxArray_real_T *c1_r;
  c1_nav_algs_internal_PriorityQueue c1_OpenList;
  c1_nav_algs_internal_PriorityQueue *c1_b_obj;
  c1_nav_algs_internal_PriorityQueue *c1_b_this;
  c1_nav_algs_internal_PriorityQueue *c1_c_obj;
  c1_nav_algs_internal_PriorityQueue *c1_d_obj;
  c1_nav_algs_internal_PriorityQueue *c1_e_obj;
  c1_nav_algs_internal_PriorityQueue *c1_f_obj;
  c1_nav_algs_internal_PriorityQueue *c1_g_obj;
  c1_nav_algs_internal_PriorityQueue *c1_h_obj;
  c1_nav_algs_internal_PriorityQueue *c1_l_obj;
  c1_nav_algs_internal_PriorityQueue *c1_this;
  c1_nav_algs_internal_plannerAStarGrid *c1_i_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_j_obj;
  c1_nav_algs_internal_plannerAStarGrid *c1_k_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_l_y = NULL;
  real_T c1_openToPush_data[40];
  real_T c1_Neighbors_data[16];
  real_T c1_MinScoreNode_data[5];
  real_T c1_nodeData[5];
  real_T c1_b_goalIn[2];
  real_T c1_b_startIn[2];
  real_T c1_CurrentCol;
  real_T c1_CurrentRow;
  real_T c1_NumNeighbors;
  real_T c1_a;
  real_T c1_b_CurrentCol;
  real_T c1_b_CurrentRow;
  real_T c1_b_j;
  real_T c1_b_p;
  real_T c1_b_x;
  real_T c1_c_i;
  real_T c1_c_x;
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  real_T c1_d8;
  real_T c1_d_i;
  real_T c1_d_x;
  real_T c1_dataDim;
  real_T c1_e_b;
  real_T c1_e_x;
  real_T c1_flag;
  real_T c1_gcost;
  real_T c1_j;
  real_T c1_nodeId;
  real_T c1_openToPushK;
  real_T c1_tentative_gScore;
  real_T c1_u;
  int32_T c1_MinScoreNode_size[2];
  int32_T c1_Neighbors_size[2];
  int32_T c1_e_ii[2];
  int32_T c1_openToPush_size[2];
  int32_T c1_d_ii[1];
  int32_T c1_b_i;
  int32_T c1_b_ii;
  int32_T c1_b_loop_ub;
  int32_T c1_b_openToPushK;
  int32_T c1_c_ii;
  int32_T c1_c_loop_ub;
  int32_T c1_c_openToPushK;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_end;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_g_loop_ub;
  int32_T c1_h_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i100;
  int32_T c1_i101;
  int32_T c1_i102;
  int32_T c1_i103;
  int32_T c1_i104;
  int32_T c1_i105;
  int32_T c1_i106;
  int32_T c1_i107;
  int32_T c1_i108;
  int32_T c1_i109;
  int32_T c1_i11;
  int32_T c1_i110;
  int32_T c1_i111;
  int32_T c1_i112;
  int32_T c1_i113;
  int32_T c1_i114;
  int32_T c1_i115;
  int32_T c1_i116;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i40;
  int32_T c1_i41;
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_i46;
  int32_T c1_i47;
  int32_T c1_i48;
  int32_T c1_i49;
  int32_T c1_i5;
  int32_T c1_i50;
  int32_T c1_i51;
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i54;
  int32_T c1_i55;
  int32_T c1_i56;
  int32_T c1_i57;
  int32_T c1_i58;
  int32_T c1_i59;
  int32_T c1_i6;
  int32_T c1_i60;
  int32_T c1_i61;
  int32_T c1_i62;
  int32_T c1_i63;
  int32_T c1_i64;
  int32_T c1_i65;
  int32_T c1_i66;
  int32_T c1_i67;
  int32_T c1_i68;
  int32_T c1_i69;
  int32_T c1_i7;
  int32_T c1_i70;
  int32_T c1_i71;
  int32_T c1_i72;
  int32_T c1_i73;
  int32_T c1_i74;
  int32_T c1_i75;
  int32_T c1_i76;
  int32_T c1_i77;
  int32_T c1_i78;
  int32_T c1_i79;
  int32_T c1_i8;
  int32_T c1_i80;
  int32_T c1_i81;
  int32_T c1_i82;
  int32_T c1_i83;
  int32_T c1_i84;
  int32_T c1_i85;
  int32_T c1_i86;
  int32_T c1_i87;
  int32_T c1_i88;
  int32_T c1_i89;
  int32_T c1_i9;
  int32_T c1_i90;
  int32_T c1_i91;
  int32_T c1_i92;
  int32_T c1_i93;
  int32_T c1_i94;
  int32_T c1_i95;
  int32_T c1_i96;
  int32_T c1_i97;
  int32_T c1_i98;
  int32_T c1_i99;
  int32_T c1_idx;
  int32_T c1_loop_ub;
  int32_T c1_p;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b_b;
  boolean_T c1_b_flag;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  boolean_T c1_exitg2;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)c1_sp);
  c1_emxInit_real_T(chartInstance, c1_sp, &c1_expNodes, 1, &c1_nb_emlrtRTEI);
  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_r, 2, &c1_sb_emlrtRTEI);
  c1_emxInit_int32_T(chartInstance, c1_sp, &c1_ii, 1, &c1_tb_emlrtRTEI);
  emlrtPushHeapReferenceStackR2021a((void *)c1_sp, true, &c1_OpenList, (void *)
    &c1_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c1_OpenList.matlabCodegenIsDeleted = true;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    chartInstance->c1_map[c1_i] = c1_obj->Map[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 16000000; c1_i1++) {
    chartInstance->c1_GScore[c1_i1] = rtInf;
  }

  for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
    chartInstance->c1_FScore[c1_i2] = rtInf;
  }

  for (c1_i3 = 0; c1_i3 < 16000000; c1_i3++) {
    chartInstance->c1_ExploredNodes[c1_i3] = 0;
  }

  for (c1_i4 = 0; c1_i4 < 16000000; c1_i4++) {
    chartInstance->c1_ParentCol1[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
    chartInstance->c1_ParentRow2[c1_i5] = 0.0;
  }

  for (c1_i6 = 0; c1_i6 < 16000000; c1_i6++) {
    chartInstance->c1_ClosedMAT[c1_i6] = 0;
  }

  c1_end = 16000000;
  for (c1_b_i = 0; c1_b_i < c1_end; c1_b_i++) {
    if (chartInstance->c1_map[c1_b_i] == 1.0) {
      chartInstance->c1_ClosedMAT[c1_b_i] = 1;
    }
  }

  c1_st.site = &c1_pe_emlrtRSI;
  c1_b_obj = &c1_OpenList;
  c1_c_obj = c1_b_obj;
  c1_b_st.site = &c1_gf_emlrtRSI;
  c1_this = c1_c_obj;
  c1_c_obj = c1_this;
  c1_b_st.site = &c1_gf_emlrtRSI;
  c1_d_obj = c1_c_obj;
  c1_c_obj = c1_d_obj;
  c1_c_st.site = &c1_gb_emlrtRSI;
  c1_b_this = c1_c_obj;
  c1_c_obj = c1_b_this;
  c1_c_obj->PQInternal = NULL;
  c1_c_obj->PQInternal = priorityqueuecodegen_constructPQ(5.0, 2.0);
  c1_c_obj->matlabCodegenIsDeleted = false;
  c1_st.site = &c1_qe_emlrtRSI;
  for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
    c1_b_goalIn[c1_i7] = c1_goalIn[c1_i7];
  }

  c1_plannerAStarGrid_getHeuristicMatrix(chartInstance, &c1_st, c1_obj,
    c1_b_goalIn, chartInstance->c1_map);
  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_w_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i8 = (int32_T)c1_startIn[0];
  if ((c1_i8 < 1) || (c1_i8 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i8, 1, 4000, &c1_tb_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_x_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i9 = (int32_T)c1_startIn[1];
  if ((c1_i9 < 1) || (c1_i9 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i9, 1, 4000, &c1_ub_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_y_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i10 = (int32_T)c1_startIn[0];
  if ((c1_i10 < 1) || (c1_i10 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i10, 1, 4000, &c1_vb_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_ab_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i11 = (int32_T)c1_startIn[1];
  if ((c1_i11 < 1) || (c1_i11 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i11, 1, 4000, &c1_wb_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  chartInstance->c1_FScore[(c1_i10 + 4000 * (c1_i11 - 1)) - 1] =
    chartInstance->c1_map[(c1_i8 + 4000 * (c1_i9 - 1)) - 1];
  c1_st.site = &c1_re_emlrtRSI;
  c1_e_obj = &c1_OpenList;
  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_bb_emlrtDCI, &c1_st);
  }

  c1_i12 = (int32_T)c1_startIn[0];
  if ((c1_i12 < 1) || (c1_i12 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i12, 1, 4000, &c1_xb_emlrtBCI, &c1_st);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_bb_emlrtDCI, &c1_st);
  }

  c1_i13 = (int32_T)c1_startIn[1];
  if ((c1_i13 < 1) || (c1_i13 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i13, 1, 4000, &c1_xb_emlrtBCI, &c1_st);
  }

  c1_nodeData[0] = c1_obj->MapIndex[(c1_i12 + 4000 * (c1_i13 - 1)) - 1];
  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_cb_emlrtDCI, &c1_st);
  }

  c1_i14 = (int32_T)c1_startIn[0];
  if ((c1_i14 < 1) || (c1_i14 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i14, 1, 4000, &c1_yb_emlrtBCI, &c1_st);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_cb_emlrtDCI, &c1_st);
  }

  c1_i15 = (int32_T)c1_startIn[1];
  if ((c1_i15 < 1) || (c1_i15 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i15, 1, 4000, &c1_yb_emlrtBCI, &c1_st);
  }

  c1_nodeData[1] = c1_obj->MapIndex[(c1_i14 + 4000 * (c1_i15 - 1)) - 1];
  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_db_emlrtDCI, &c1_st);
  }

  c1_i16 = (int32_T)c1_startIn[0];
  if ((c1_i16 < 1) || (c1_i16 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i16, 1, 4000, &c1_ac_emlrtBCI, &c1_st);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_db_emlrtDCI, &c1_st);
  }

  c1_i17 = (int32_T)c1_startIn[1];
  if ((c1_i17 < 1) || (c1_i17 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i17, 1, 4000, &c1_ac_emlrtBCI, &c1_st);
  }

  c1_nodeData[2] = chartInstance->c1_FScore[(c1_i16 + 4000 * (c1_i17 - 1)) - 1];
  c1_nodeData[3] = 0.0;
  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_eb_emlrtDCI, &c1_st);
  }

  c1_i18 = (int32_T)c1_startIn[0];
  if ((c1_i18 < 1) || (c1_i18 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i18, 1, 4000, &c1_bc_emlrtBCI, &c1_st);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_eb_emlrtDCI, &c1_st);
  }

  c1_i19 = (int32_T)c1_startIn[1];
  if ((c1_i19 < 1) || (c1_i19 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i19, 1, 4000, &c1_bc_emlrtBCI, &c1_st);
  }

  c1_nodeData[4] = chartInstance->c1_map[(c1_i18 + 4000 * (c1_i19 - 1)) - 1];
  priorityqueuecodegen_push(c1_e_obj->PQInternal, &c1_nodeData[0]);
  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_fb_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i20 = (int32_T)c1_startIn[0];
  if ((c1_i20 < 1) || (c1_i20 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i20, 1, 4000, &c1_cc_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_gb_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i21 = (int32_T)c1_startIn[1];
  if ((c1_i21 < 1) || (c1_i21 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i21, 1, 4000, &c1_dc_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  chartInstance->c1_ExploredNodes[(c1_i20 + 4000 * (c1_i21 - 1)) - 1] = 1;
  if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0])) {
    emlrtIntegerCheckR2012b(c1_startIn[0], &c1_hb_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i22 = (int32_T)c1_startIn[0];
  if ((c1_i22 < 1) || (c1_i22 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i22, 1, 4000, &c1_ec_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1])) {
    emlrtIntegerCheckR2012b(c1_startIn[1], &c1_ib_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i23 = (int32_T)c1_startIn[1];
  if ((c1_i23 < 1) || (c1_i23 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i23, 1, 4000, &c1_fc_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  chartInstance->c1_GScore[(c1_i22 + 4000 * (c1_i23 - 1)) - 1] = 0.0;
  c1_CurrentRow = 0.0;
  c1_CurrentCol = 0.0;
  c1_st.site = &c1_se_emlrtRSI;
  c1_plannerAStarGrid_getNeighbors(chartInstance, &c1_st, c1_obj,
    c1_Neighbors_data, c1_Neighbors_size, &c1_NumNeighbors);
  do {
    c1_exitg1 = 0;
    c1_st.site = &c1_te_emlrtRSI;
    c1_f_obj = &c1_OpenList;
    c1_dataDim = priorityqueuecodegen_getDataDim(c1_f_obj->PQInternal);
    if (!(c1_dataDim <= 5.0)) {
      c1_c_y = NULL;
      sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      c1_d_y = NULL;
      sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1,
        30), false);
      sf_mex_call(&c1_st, &c1_s_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                  sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c1_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
    }

    if (!(c1_dataDim >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c1_dataDim, &c1_kb_emlrtDCI, &c1_st);
    }

    c1_d = c1_dataDim;
    if (c1_d != (real_T)(int32_T)muDoubleScalarFloor(c1_d)) {
      emlrtIntegerCheckR2012b(c1_d, &c1_jb_emlrtDCI, &c1_st);
    }

    c1_MinScoreNode_size[1] = (int32_T)c1_d;
    priorityqueuecodegen_top(c1_f_obj->PQInternal, &c1_MinScoreNode_data[0],
      &c1_nodeId);
    c1_i24 = 3;
    if ((c1_i24 < 1) || (c1_i24 > c1_MinScoreNode_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c1_i24, 1, c1_MinScoreNode_size[1],
        &c1_sb_emlrtBCI, (emlrtConstCTX)c1_sp);
    }

    if (c1_MinScoreNode_data[2] == rtInf) {
      c1_exitg1 = 1;
    } else {
      c1_st.site = &c1_ue_emlrtRSI;
      c1_g_obj = &c1_OpenList;
      c1_flag = priorityqueuecodegen_isEmpty(c1_g_obj->PQInternal);
      c1_b_st.site = &c1_vf_emlrtRSI;
      c1_b_x = c1_flag;
      c1_c_x = c1_b_x;
      c1_b_b = muDoubleScalarIsNaN(c1_c_x);
      if (c1_b_b) {
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c1_f_y = NULL;
        sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c1_b_st, &c1_i_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                    sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_f_y)));
      }

      c1_b_flag = (c1_flag != 0.0);
      if (c1_b_flag) {
        if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0]))
        {
          emlrtIntegerCheckR2012b(c1_startIn[0], &c1_nb_emlrtDCI, (emlrtConstCTX)
            c1_sp);
        }

        c1_i28 = (int32_T)c1_startIn[0];
        if ((c1_i28 < 1) || (c1_i28 > 4000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i28, 1, 4000, &c1_ic_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1]))
        {
          emlrtIntegerCheckR2012b(c1_startIn[1], &c1_ob_emlrtDCI, (emlrtConstCTX)
            c1_sp);
        }

        c1_i32 = (int32_T)c1_startIn[1];
        if ((c1_i32 < 1) || (c1_i32 > 4000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i32, 1, 4000, &c1_jc_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        c1_obj->ParentCol[(c1_i28 + 4000 * (c1_i32 - 1)) - 1] = c1_startIn[1];
        if (c1_startIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[0]))
        {
          emlrtIntegerCheckR2012b(c1_startIn[0], &c1_qb_emlrtDCI, (emlrtConstCTX)
            c1_sp);
        }

        c1_i36 = (int32_T)c1_startIn[0];
        if ((c1_i36 < 1) || (c1_i36 > 4000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i36, 1, 4000, &c1_lc_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        if (c1_startIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_startIn[1]))
        {
          emlrtIntegerCheckR2012b(c1_startIn[1], &c1_rb_emlrtDCI, (emlrtConstCTX)
            c1_sp);
        }

        c1_i39 = (int32_T)c1_startIn[1];
        if ((c1_i39 < 1) || (c1_i39 > 4000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i39, 1, 4000, &c1_mc_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        c1_obj->ParentRow[(c1_i36 + 4000 * (c1_i39 - 1)) - 1] = c1_startIn[0];
        c1_exitg1 = 1;
      } else {
        c1_i27 = 1;
        if ((c1_i27 < 1) || (c1_i27 > c1_MinScoreNode_size[1])) {
          emlrtDynamicBoundsCheckR2012b(c1_i27, 1, c1_MinScoreNode_size[1],
            &c1_rb_emlrtBCI, (emlrtConstCTX)c1_sp);
        }

        c1_d1 = c1_MinScoreNode_data[0];
        if (c1_d1 != (real_T)(int32_T)muDoubleScalarFloor(c1_d1)) {
          emlrtIntegerCheckR2012b(c1_d1, &c1_pb_emlrtDCI, (emlrtConstCTX)c1_sp);
        }

        c1_i31 = (int32_T)c1_d1;
        if ((c1_i31 < 1) || (c1_i31 > 16000000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i31, 1, 16000000, &c1_kc_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        c1_CurrentRow = c1_obj->AllNodes[c1_i31 - 1];
        c1_i34 = 1;
        if ((c1_i34 < 1) || (c1_i34 > c1_MinScoreNode_size[1])) {
          emlrtDynamicBoundsCheckR2012b(c1_i34, 1, c1_MinScoreNode_size[1],
            &c1_qb_emlrtBCI, (emlrtConstCTX)c1_sp);
        }

        c1_d2 = c1_MinScoreNode_data[0];
        if (c1_d2 != (real_T)(int32_T)muDoubleScalarFloor(c1_d2)) {
          emlrtIntegerCheckR2012b(c1_d2, &c1_sb_emlrtDCI, (emlrtConstCTX)c1_sp);
        }

        c1_i38 = (int32_T)c1_d2;
        if ((c1_i38 < 1) || (c1_i38 > 16000000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i38, 1, 16000000, &c1_nc_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        c1_CurrentCol = c1_obj->AllNodes[c1_i38 + 15999999];
        c1_i40 = 1;
        if ((c1_i40 < 1) || (c1_i40 > c1_MinScoreNode_size[1])) {
          emlrtDynamicBoundsCheckR2012b(c1_i40, 1, c1_MinScoreNode_size[1],
            &c1_pb_emlrtBCI, (emlrtConstCTX)c1_sp);
        }

        if (c1_goalIn[0] != (real_T)(int32_T)muDoubleScalarFloor(c1_goalIn[0]))
        {
          emlrtIntegerCheckR2012b(c1_goalIn[0], &c1_tb_emlrtDCI, (emlrtConstCTX)
            c1_sp);
        }

        c1_i42 = (int32_T)c1_goalIn[0];
        if ((c1_i42 < 1) || (c1_i42 > 4000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i42, 1, 4000, &c1_oc_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        if (c1_goalIn[1] != (real_T)(int32_T)muDoubleScalarFloor(c1_goalIn[1]))
        {
          emlrtIntegerCheckR2012b(c1_goalIn[1], &c1_ub_emlrtDCI, (emlrtConstCTX)
            c1_sp);
        }

        c1_i44 = (int32_T)c1_goalIn[1];
        if ((c1_i44 < 1) || (c1_i44 > 4000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i44, 1, 4000, &c1_pc_emlrtBCI,
            (emlrtConstCTX)c1_sp);
        }

        if (c1_MinScoreNode_data[0] == c1_obj->MapIndex[(c1_i42 + 4000 * (c1_i44
              - 1)) - 1]) {
          for (c1_i46 = 0; c1_i46 < 16000000; c1_i46++) {
            c1_obj->ParentCol[c1_i46] = chartInstance->c1_ParentCol1[c1_i46];
          }

          for (c1_i48 = 0; c1_i48 < 16000000; c1_i48++) {
            c1_obj->ParentRow[c1_i48] = chartInstance->c1_ParentRow2[c1_i48];
          }

          c1_st.site = &c1_ve_emlrtRSI;
          for (c1_i50 = 0; c1_i50 < 2; c1_i50++) {
            c1_b_startIn[c1_i50] = c1_startIn[c1_i50];
          }

          c1_plannerAStarGrid_reconstructPath(chartInstance, &c1_st, c1_obj,
            c1_CurrentRow, c1_CurrentCol, c1_b_startIn);
          c1_exitg1 = 1;
        } else {
          c1_st.site = &c1_we_emlrtRSI;
          c1_h_obj = &c1_OpenList;
          priorityqueuecodegen_pop(c1_h_obj->PQInternal);
          if (c1_CurrentCol != (real_T)(int32_T)muDoubleScalarFloor
              (c1_CurrentCol)) {
            emlrtIntegerCheckR2012b(c1_CurrentCol, &c1_u_emlrtDCI,
              (emlrtConstCTX)c1_sp);
          }

          c1_i49 = (int32_T)c1_CurrentCol;
          if ((c1_i49 < 1) || (c1_i49 > 4000)) {
            emlrtDynamicBoundsCheckR2012b(c1_i49, 1, 4000, &c1_nb_emlrtBCI,
              (emlrtConstCTX)c1_sp);
          }

          if (c1_CurrentRow != (real_T)(int32_T)muDoubleScalarFloor
              (c1_CurrentRow)) {
            emlrtIntegerCheckR2012b(c1_CurrentRow, &c1_v_emlrtDCI,
              (emlrtConstCTX)c1_sp);
          }

          c1_i52 = (int32_T)c1_CurrentRow;
          if ((c1_i52 < 1) || (c1_i52 > 4000)) {
            emlrtDynamicBoundsCheckR2012b(c1_i52, 1, 4000, &c1_ob_emlrtBCI,
              (emlrtConstCTX)c1_sp);
          }

          chartInstance->c1_ClosedMAT[(c1_i52 + 4000 * (c1_i49 - 1)) - 1] = 1;
          c1_openToPush_size[0] = (int32_T)c1_NumNeighbors;
          c1_c_loop_ub = (int32_T)c1_NumNeighbors * 5 - 1;
          for (c1_i56 = 0; c1_i56 <= c1_c_loop_ub; c1_i56++) {
            c1_openToPush_data[c1_i56] = 0.0;
          }

          c1_openToPushK = 1.0;
          c1_i57 = (int32_T)c1_NumNeighbors - 1;
          for (c1_p = 0; c1_p <= c1_i57; c1_p++) {
            c1_b_p = (real_T)c1_p + 1.0;
            c1_i59 = (int32_T)c1_b_p;
            if ((c1_i59 < 1) || (c1_i59 > c1_Neighbors_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c1_i59, 1, c1_Neighbors_size[0],
                &c1_qc_emlrtBCI, (emlrtConstCTX)c1_sp);
            }

            c1_c_i = c1_Neighbors_data[c1_i59 - 1];
            c1_i61 = (int32_T)c1_b_p;
            if ((c1_i61 < 1) || (c1_i61 > c1_Neighbors_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c1_i61, 1, c1_Neighbors_size[0],
                &c1_rc_emlrtBCI, (emlrtConstCTX)c1_sp);
            }

            c1_j = c1_Neighbors_data[(c1_i61 + c1_Neighbors_size[0]) - 1];
            c1_st.site = &c1_xe_emlrtRSI;
            c1_i_obj = c1_obj;
            c1_b_CurrentRow = c1_CurrentRow;
            c1_b_CurrentCol = c1_CurrentCol;
            c1_d_i = c1_c_i;
            c1_b_j = c1_j;
            if ((c1_b_CurrentRow + c1_d_i < 1.0) || (c1_b_CurrentRow + c1_d_i >
                 4000.0) || (c1_b_CurrentCol + c1_b_j < 1.0) || (c1_b_CurrentCol
                 + c1_b_j > 4000.0)) {
              c1_d6 = 1.0;
            } else {
              c1_i65 = (int32_T)(c1_b_CurrentRow + c1_d_i);
              if ((c1_i65 < 1) || (c1_i65 > 4000)) {
                emlrtDynamicBoundsCheckR2012b(c1_i65, 1, 4000, &c1_sc_emlrtBCI,
                  &c1_st);
              }

              c1_i67 = (int32_T)(c1_b_CurrentCol + c1_b_j);
              if ((c1_i67 < 1) || (c1_i67 > 4000)) {
                emlrtDynamicBoundsCheckR2012b(c1_i67, 1, 4000, &c1_tc_emlrtBCI,
                  &c1_st);
              }

              if (c1_i_obj->Map[(c1_i65 + 4000 * (c1_i67 - 1)) - 1] >=
                  c1_i_obj->ObstacleThreshold) {
                c1_d6 = 1.0;
              } else {
                c1_d6 = 0.0;
              }
            }

            c1_st.site = &c1_xe_emlrtRSI;
            c1_d_x = c1_d6;
            c1_e_x = c1_d_x;
            c1_d_b = muDoubleScalarIsNaN(c1_e_x);
            if (c1_d_b) {
              c1_k_y = NULL;
              sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2,
                1, 19), false);
              c1_l_y = NULL;
              sf_mex_assign(&c1_l_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2,
                1, 19), false);
              sf_mex_call(&c1_st, &c1_i_emlrtMCI, "error", 0U, 2U, 14, c1_k_y,
                          14, sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14,
                sf_mex_call(&c1_st, NULL, "message", 1U, 1U, 14, c1_l_y)));
            }

            if (!(c1_d6 != 0.0)) {
              c1_i71 = (int32_T)(c1_CurrentRow + c1_c_i);
              if ((c1_i71 < 1) || (c1_i71 > 4000)) {
                emlrtDynamicBoundsCheckR2012b(c1_i71, 1, 4000, &c1_vc_emlrtBCI,
                  (emlrtConstCTX)c1_sp);
              }

              c1_i73 = (int32_T)(c1_CurrentCol + c1_j);
              if ((c1_i73 < 1) || (c1_i73 > 4000)) {
                emlrtDynamicBoundsCheckR2012b(c1_i73, 1, 4000, &c1_wc_emlrtBCI,
                  (emlrtConstCTX)c1_sp);
              }

              if (!((real_T)chartInstance->c1_ClosedMAT[(c1_i71 + 4000 * (c1_i73
                     - 1)) - 1] != 0.0)) {
                c1_st.site = &c1_ye_emlrtRSI;
                c1_st.site = &c1_af_emlrtRSI;
                c1_gcost = c1_plannerAStarGrid_gcostValue(chartInstance, &c1_st,
                  c1_obj, c1_CurrentRow, c1_CurrentCol, c1_c_i, c1_j);
                c1_tentative_gScore = chartInstance->c1_GScore[((int32_T)
                  c1_CurrentRow + 4000 * ((int32_T)c1_CurrentCol - 1)) - 1] +
                  c1_gcost;
                c1_i77 = (int32_T)(c1_CurrentRow + c1_c_i);
                if ((c1_i77 < 1) || (c1_i77 > 4000)) {
                  emlrtDynamicBoundsCheckR2012b(c1_i77, 1, 4000, &c1_xc_emlrtBCI,
                    (emlrtConstCTX)c1_sp);
                }

                c1_i80 = (int32_T)(c1_CurrentCol + c1_j);
                if ((c1_i80 < 1) || (c1_i80 > 4000)) {
                  emlrtDynamicBoundsCheckR2012b(c1_i80, 1, 4000, &c1_yc_emlrtBCI,
                    (emlrtConstCTX)c1_sp);
                }

                if (chartInstance->c1_FScore[(c1_i77 + 4000 * (c1_i80 - 1)) - 1]
                    == rtInf) {
                  c1_i82 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i82 < 1) || (c1_i82 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i82, 1, 4000,
                      &c1_w_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i85 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i85 < 1) || (c1_i85 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i85, 1, 4000,
                      &c1_x_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  chartInstance->c1_ExploredNodes[(c1_i85 + 4000 * (c1_i82 - 1))
                    - 1] = 1;
                  c1_i87 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i87 < 1) || (c1_i87 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i87, 1, 4000,
                      &c1_lb_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i89 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i89 < 1) || (c1_i89 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i89, 1, 4000,
                      &c1_mb_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  chartInstance->c1_ParentCol1[(c1_i89 + 4000 * (c1_i87 - 1)) -
                    1] = c1_CurrentCol;
                  c1_i91 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i91 < 1) || (c1_i91 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i91, 1, 4000,
                      &c1_jb_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i93 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i93 < 1) || (c1_i93 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i93, 1, 4000,
                      &c1_kb_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  chartInstance->c1_ParentRow2[(c1_i93 + 4000 * (c1_i91 - 1)) -
                    1] = c1_CurrentRow;
                  c1_i95 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i95 < 1) || (c1_i95 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i95, 1, 4000,
                      &c1_hb_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i97 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i97 < 1) || (c1_i97 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i97, 1, 4000,
                      &c1_ib_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  chartInstance->c1_GScore[(c1_i97 + 4000 * (c1_i95 - 1)) - 1] =
                    c1_tentative_gScore;
                  c1_i99 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i99 < 1) || (c1_i99 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i99, 1, 4000,
                      &c1_gd_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i101 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i101 < 1) || (c1_i101 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i101, 1, 4000,
                      &c1_hd_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i103 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i103 < 1) || (c1_i103 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i103, 1, 4000,
                      &c1_id_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i105 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i105 < 1) || (c1_i105 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i105, 1, 4000,
                      &c1_jd_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  chartInstance->c1_FScore[(c1_i103 + 4000 * (c1_i105 - 1)) - 1]
                    = c1_tentative_gScore + chartInstance->c1_map[(c1_i99 + 4000
                    * (c1_i101 - 1)) - 1];
                  c1_i106 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i106 < 1) || (c1_i106 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i106, 1, 4000,
                      &c1_kd_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i107 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i107 < 1) || (c1_i107 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i107, 1, 4000,
                      &c1_ld_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_a = c1_obj->MapIndex[(c1_i106 + 4000 * (c1_i107 - 1)) - 1];
                  c1_e_b = c1_obj->MapIndex[((int32_T)c1_CurrentRow + 4000 *
                    ((int32_T)c1_CurrentCol - 1)) - 1];
                  c1_i108 = (int32_T)c1_openToPushK;
                  if ((c1_i108 < 1) || (c1_i108 > c1_openToPush_size[0])) {
                    emlrtDynamicBoundsCheckR2012b(c1_i108, 1,
                      c1_openToPush_size[0], &c1_gb_emlrtBCI, (emlrtConstCTX)
                      c1_sp);
                  }

                  c1_b_openToPushK = c1_i108 - 1;
                  c1_openToPush_data[c1_b_openToPushK] = c1_a;
                  c1_openToPush_data[c1_b_openToPushK + c1_openToPush_size[0]] =
                    c1_e_b;
                  c1_i109 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i109 < 1) || (c1_i109 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i109, 1, 4000,
                      &c1_md_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i110 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i110 < 1) || (c1_i110 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i110, 1, 4000,
                      &c1_md_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_openToPush_data[c1_b_openToPushK + (c1_openToPush_size[0] <<
                    1)] = chartInstance->c1_FScore[(c1_i109 + 4000 * (c1_i110 -
                    1)) - 1];
                  c1_i111 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i111 < 1) || (c1_i111 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i111, 1, 4000,
                      &c1_nd_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i112 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i112 < 1) || (c1_i112 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i112, 1, 4000,
                      &c1_nd_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_openToPush_data[c1_b_openToPushK + c1_openToPush_size[0] *
                    3] = chartInstance->c1_GScore[(c1_i111 + 4000 * (c1_i112 - 1))
                    - 1];
                  c1_i113 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i113 < 1) || (c1_i113 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i113, 1, 4000,
                      &c1_od_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i114 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i114 < 1) || (c1_i114 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i114, 1, 4000,
                      &c1_od_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_openToPush_data[c1_b_openToPushK + (c1_openToPush_size[0] <<
                    2)] = chartInstance->c1_map[(c1_i113 + 4000 * (c1_i114 - 1))
                    - 1];
                  c1_st.site = &c1_bf_emlrtRSI;
                  c1_l_obj = &c1_OpenList;
                  c1_i115 = (int32_T)c1_openToPushK;
                  if ((c1_i115 < 1) || (c1_i115 > c1_openToPush_size[0])) {
                    emlrtDynamicBoundsCheckR2012b(c1_i115, 1,
                      c1_openToPush_size[0], &c1_fb_emlrtBCI, &c1_st);
                  }

                  c1_c_openToPushK = c1_i115 - 1;
                  for (c1_i116 = 0; c1_i116 < 5; c1_i116++) {
                    c1_nodeData[c1_i116] = c1_openToPush_data[c1_c_openToPushK +
                      c1_openToPush_size[0] * c1_i116];
                  }

                  priorityqueuecodegen_push(c1_l_obj->PQInternal, &c1_nodeData[0]);
                  c1_openToPushK++;
                } else {
                  c1_i81 = (int32_T)(c1_CurrentRow + c1_c_i);
                  if ((c1_i81 < 1) || (c1_i81 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i81, 1, 4000,
                      &c1_ad_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  c1_i84 = (int32_T)(c1_CurrentCol + c1_j);
                  if ((c1_i84 < 1) || (c1_i84 > 4000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i84, 1, 4000,
                      &c1_bd_emlrtBCI, (emlrtConstCTX)c1_sp);
                  }

                  if (c1_tentative_gScore >= chartInstance->c1_GScore[(c1_i81 +
                       4000 * (c1_i84 - 1)) - 1]) {
                  } else {
                    c1_i86 = (int32_T)(c1_CurrentCol + c1_j);
                    if ((c1_i86 < 1) || (c1_i86 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i86, 1, 4000,
                        &c1_db_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    c1_i88 = (int32_T)(c1_CurrentRow + c1_c_i);
                    if ((c1_i88 < 1) || (c1_i88 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i88, 1, 4000,
                        &c1_eb_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    chartInstance->c1_ParentCol1[(c1_i88 + 4000 * (c1_i86 - 1))
                      - 1] = c1_CurrentCol;
                    c1_i90 = (int32_T)(c1_CurrentCol + c1_j);
                    if ((c1_i90 < 1) || (c1_i90 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i90, 1, 4000,
                        &c1_bb_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    c1_i92 = (int32_T)(c1_CurrentRow + c1_c_i);
                    if ((c1_i92 < 1) || (c1_i92 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i92, 1, 4000,
                        &c1_cb_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    chartInstance->c1_ParentRow2[(c1_i92 + 4000 * (c1_i90 - 1))
                      - 1] = c1_CurrentRow;
                    c1_i94 = (int32_T)(c1_CurrentCol + c1_j);
                    if ((c1_i94 < 1) || (c1_i94 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i94, 1, 4000,
                        &c1_y_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    c1_i96 = (int32_T)(c1_CurrentRow + c1_c_i);
                    if ((c1_i96 < 1) || (c1_i96 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i96, 1, 4000,
                        &c1_ab_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    chartInstance->c1_GScore[(c1_i96 + 4000 * (c1_i94 - 1)) - 1]
                      = c1_tentative_gScore;
                    c1_i98 = (int32_T)(c1_CurrentRow + c1_c_i);
                    if ((c1_i98 < 1) || (c1_i98 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i98, 1, 4000,
                        &c1_cd_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    c1_i100 = (int32_T)(c1_CurrentCol + c1_j);
                    if ((c1_i100 < 1) || (c1_i100 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i100, 1, 4000,
                        &c1_dd_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    c1_i102 = (int32_T)(c1_CurrentRow + c1_c_i);
                    if ((c1_i102 < 1) || (c1_i102 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i102, 1, 4000,
                        &c1_ed_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    c1_i104 = (int32_T)(c1_CurrentCol + c1_j);
                    if ((c1_i104 < 1) || (c1_i104 > 4000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i104, 1, 4000,
                        &c1_fd_emlrtBCI, (emlrtConstCTX)c1_sp);
                    }

                    chartInstance->c1_FScore[(c1_i102 + 4000 * (c1_i104 - 1)) -
                      1] = c1_tentative_gScore + chartInstance->c1_map[(c1_i98 +
                      4000 * (c1_i100 - 1)) - 1];
                  }
                }
              }
            }
          }
        }
      }
    }
  } while (c1_exitg1 == 0);

  if (c1_CurrentRow != (real_T)(int32_T)muDoubleScalarFloor(c1_CurrentRow)) {
    emlrtIntegerCheckR2012b(c1_CurrentRow, &c1_lb_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i25 = (int32_T)c1_CurrentRow;
  if ((c1_i25 < 1) || (c1_i25 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i25, 1, 4000, &c1_gc_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  if (c1_CurrentCol != (real_T)(int32_T)muDoubleScalarFloor(c1_CurrentCol)) {
    emlrtIntegerCheckR2012b(c1_CurrentCol, &c1_mb_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i26 = (int32_T)c1_CurrentCol;
  if ((c1_i26 < 1) || (c1_i26 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i26, 1, 4000, &c1_hc_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_obj->PathCost = chartInstance->c1_GScore[(c1_i25 + 4000 * (c1_i26 - 1)) - 1];
  for (c1_i29 = 0; c1_i29 < 16000000; c1_i29++) {
    c1_obj->GCostMatrix[c1_i29] = chartInstance->c1_GScore[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 2; c1_i30++) {
    c1_obj->Start[c1_i30] = c1_startIn[c1_i30];
  }

  for (c1_i33 = 0; c1_i33 < 2; c1_i33++) {
    c1_obj->Goal[c1_i33] = c1_goalIn[c1_i33];
  }

  c1_st.site = &c1_cf_emlrtRSI;
  for (c1_i35 = 0; c1_i35 < 16000000; c1_i35++) {
    chartInstance->c1_x[c1_i35] = ((real_T)chartInstance->
      c1_ExploredNodes[c1_i35] == 1.0);
  }

  c1_b_st.site = &c1_jg_emlrtRSI;
  c1_c_st.site = &c1_kg_emlrtRSI;
  c1_idx = 0;
  c1_i37 = c1_ii->size[0];
  c1_ii->size[0] = 16000000;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_c_st, c1_ii, c1_i37,
    &c1_lb_emlrtRTEI);
  c1_b_ii = 1;
  c1_exitg2 = false;
  while ((!c1_exitg2) && (c1_b_ii - 1 < 16000000)) {
    c1_c_ii = c1_b_ii;
    if (chartInstance->c1_x[c1_c_ii - 1]) {
      c1_idx++;
      c1_ii->data[c1_idx - 1] = c1_c_ii;
      if (c1_idx >= 16000000) {
        c1_exitg2 = true;
      } else {
        c1_b_ii++;
      }
    } else {
      c1_b_ii++;
    }
  }

  c1_c_b = (c1_idx < 1);
  if (c1_c_b) {
    c1_i41 = 0;
  } else {
    c1_i41 = c1_idx;
  }

  c1_indexShapeCheck(chartInstance);
  c1_i43 = c1_ii->size[0];
  c1_ii->size[0] = c1_i41;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_c_st, c1_ii, c1_i43,
    &c1_f_emlrtRTEI);
  c1_i45 = c1_expNodes->size[0];
  c1_expNodes->size[0] = c1_ii->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_expNodes, c1_i45,
    &c1_nb_emlrtRTEI);
  c1_loop_ub = c1_ii->size[0] - 1;
  for (c1_i47 = 0; c1_i47 <= c1_loop_ub; c1_i47++) {
    c1_expNodes->data[c1_i47] = (real_T)c1_ii->data[c1_i47];
  }

  c1_obj->NumNodesExplored = (real_T)c1_expNodes->size[0];
  if (!(c1_obj->NumNodesExplored <= 1.6E+7)) {
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                  false);
    c1_i_y = NULL;
    sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 16),
                  false);
    c1_u = 1.6E+7;
    c1_j_y = NULL;
    sf_mex_assign(&c1_j_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
    sf_mex_call(c1_sp, &c1_p_emlrtMCI, "error", 0U, 2U, 14, c1_g_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 3U, 14, c1_h_y, 14, c1_i_y, 14, c1_j_y)));
  }

  c1_d3 = c1_obj->NumNodesExplored;
  c1_b1 = (c1_d3 < 1.0);
  if (c1_b1) {
    c1_i51 = -1;
  } else {
    if (c1_d3 != (real_T)(int32_T)muDoubleScalarFloor(c1_d3)) {
      emlrtIntegerCheckR2012b(c1_d3, &c1_t_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i53 = (int32_T)c1_d3;
    if ((c1_i53 < 1) || (c1_i53 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i53, 1, 16000000, &c1_v_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i51 = c1_i53 - 1;
  }

  c1_i54 = c1_ii->size[0];
  c1_ii->size[0] = c1_i51 + 1;
  c1_st.site = &c1_jh_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_ii, c1_i54,
    &c1_ob_emlrtRTEI);
  c1_b_loop_ub = c1_i51;
  for (c1_i55 = 0; c1_i55 <= c1_b_loop_ub; c1_i55++) {
    c1_ii->data[c1_i55] = c1_i55;
  }

  c1_d_ii[0] = c1_ii->size[0];
  emlrtSubAssignSizeCheckR2012b(&c1_d_ii[0], 1, c1_expNodes->size, 1,
    &c1_h_emlrtECI, (void *)c1_sp);
  c1_d_loop_ub = c1_expNodes->size[0] - 1;
  for (c1_i58 = 0; c1_i58 <= c1_d_loop_ub; c1_i58++) {
    c1_obj->NodesExploredIndicesInternal[c1_ii->data[c1_i58]] =
      c1_expNodes->data[c1_i58];
  }

  c1_d4 = c1_obj->NumNodesExplored;
  c1_b2 = (c1_d4 < 1.0);
  if (c1_b2) {
    c1_i60 = -1;
  } else {
    if (c1_d4 != (real_T)(int32_T)muDoubleScalarFloor(c1_d4)) {
      emlrtIntegerCheckR2012b(c1_d4, &c1_s_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i62 = (int32_T)c1_d4;
    if ((c1_i62 < 1) || (c1_i62 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i62, 1, 16000000, &c1_u_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i60 = c1_i62 - 1;
  }

  c1_i63 = c1_ii->size[0];
  c1_ii->size[0] = c1_i60 + 1;
  c1_st.site = &c1_df_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_ii, c1_i63,
    &c1_pb_emlrtRTEI);
  c1_e_loop_ub = c1_i60;
  for (c1_i64 = 0; c1_i64 <= c1_e_loop_ub; c1_i64++) {
    c1_ii->data[c1_i64] = c1_i64;
  }

  c1_st.site = &c1_df_emlrtRSI;
  c1_j_obj = c1_obj;
  c1_d5 = c1_j_obj->NumNodesExplored;
  c1_b3 = (c1_d5 < 1.0);
  if (c1_b3) {
    c1_i66 = -1;
  } else {
    if (c1_d5 != (real_T)(int32_T)muDoubleScalarFloor(c1_d5)) {
      emlrtIntegerCheckR2012b(c1_d5, &c1_j_emlrtDCI, &c1_st);
    }

    c1_i68 = (int32_T)c1_d5;
    if ((c1_i68 < 1) || (c1_i68 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i68, 1, 16000000, &c1_l_emlrtBCI, &c1_st);
    }

    c1_i66 = c1_i68 - 1;
  }

  c1_i69 = c1_expNodes->size[0];
  c1_expNodes->size[0] = c1_i66 + 1;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_expNodes, c1_i69,
    &c1_qb_emlrtRTEI);
  c1_f_loop_ub = c1_i66;
  for (c1_i70 = 0; c1_i70 <= c1_f_loop_ub; c1_i70++) {
    c1_expNodes->data[c1_i70] = c1_j_obj->NodesExploredIndicesInternal[c1_i70];
  }

  c1_i72 = c1_r->size[0] * c1_r->size[1];
  c1_r->size[0] = c1_expNodes->size[0];
  c1_r->size[1] = 2;
  c1_st.site = &c1_df_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_r, c1_i72,
    &c1_rb_emlrtRTEI);
  for (c1_i74 = 0; c1_i74 < 2; c1_i74++) {
    c1_g_loop_ub = c1_expNodes->size[0] - 1;
    for (c1_i75 = 0; c1_i75 <= c1_g_loop_ub; c1_i75++) {
      c1_d7 = c1_expNodes->data[c1_i75];
      if (c1_d7 != (real_T)(int32_T)muDoubleScalarFloor(c1_d7)) {
        emlrtIntegerCheckR2012b(c1_d7, &c1_vb_emlrtDCI, (emlrtConstCTX)c1_sp);
      }

      c1_i79 = (int32_T)c1_d7;
      if ((c1_i79 < 1) || (c1_i79 > 16000000)) {
        emlrtDynamicBoundsCheckR2012b(c1_i79, 1, 16000000, &c1_uc_emlrtBCI,
          (emlrtConstCTX)c1_sp);
      }

      c1_r->data[c1_i75 + c1_r->size[0] * c1_i74] = c1_obj->AllNodes[(c1_i79 +
        16000000 * c1_i74) - 1];
    }
  }

  c1_e_ii[0] = c1_ii->size[0];
  c1_e_ii[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&c1_e_ii[0], 2, c1_r->size, 2, &c1_g_emlrtECI,
    (void *)c1_sp);
  for (c1_i76 = 0; c1_i76 < 2; c1_i76++) {
    c1_h_loop_ub = c1_r->size[0] - 1;
    for (c1_i78 = 0; c1_i78 <= c1_h_loop_ub; c1_i78++) {
      c1_obj->NodesExploredInternal[c1_ii->data[c1_i78] + 16000000 * c1_i76] =
        c1_r->data[c1_i78 + c1_r->size[0] * c1_i76];
    }
  }

  c1_st.site = &c1_ef_emlrtRSI;
  c1_k_obj = c1_obj;
  c1_d8 = c1_k_obj->NumPathPoints;
  c1_b4 = (c1_d8 < 1.0);
  if (!c1_b4) {
    if (c1_d8 != (real_T)(int32_T)muDoubleScalarFloor(c1_d8)) {
      emlrtIntegerCheckR2012b(c1_d8, &c1_r_emlrtDCI, &c1_st);
    }

    c1_i83 = (int32_T)c1_d8;
    if ((c1_i83 < 1) || (c1_i83 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i83, 1, 16000000, &c1_t_emlrtBCI, &c1_st);
    }
  }

  c1_st.site = &c1_ff_emlrtRSI;
  c1_handle_matlabCodegenDestructor(chartInstance, &c1_st, &c1_OpenList);
  c1_emxFree_int32_T(chartInstance, &c1_ii);
  c1_emxFree_real_T(chartInstance, &c1_r);
  c1_emxFree_real_T(chartInstance, &c1_expNodes);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)c1_sp);
}

static void c1_plannerAStarGrid_getHeuristicMatrix(SFc1_aSPPAOAIWInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid *
  c1_obj, real_T c1_goalIn[2], real_T c1_Hn[16000000])
{
  static char_T c1_b_cv[4] = { 's', 'q', 'r', 't' };

  c1_nav_algs_internal_plannerAStarGrid *c1_b_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  real_T c1_c_obj[2];
  real_T c1_a;
  real_T c1_b_a;
  real_T c1_b_i;
  real_T c1_b_x;
  real_T c1_c_a;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T c1_d_y;
  real_T c1_e_x;
  real_T c1_e_y;
  real_T c1_f_x;
  real_T c1_f_y;
  real_T c1_hcost;
  real_T c1_j_k;
  real_T c1_type;
  real_T c1_val;
  int32_T c1_b_ia;
  int32_T c1_b_ib;
  int32_T c1_b_ic;
  int32_T c1_b_itilerow;
  int32_T c1_b_ix;
  int32_T c1_b_jcol;
  int32_T c1_b_k;
  int32_T c1_b_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_b_xj;
  int32_T c1_c_i;
  int32_T c1_c_ix;
  int32_T c1_c_k;
  int32_T c1_c_varargin_1;
  int32_T c1_c_varargin_2;
  int32_T c1_c_xj;
  int32_T c1_d_i;
  int32_T c1_d_k;
  int32_T c1_d_varargin_1;
  int32_T c1_d_xj;
  int32_T c1_e_k;
  int32_T c1_e_xj;
  int32_T c1_f_k;
  int32_T c1_f_xj;
  int32_T c1_g_k;
  int32_T c1_g_xj;
  int32_T c1_h_k;
  int32_T c1_h_xj;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i_k;
  int32_T c1_i_xj;
  int32_T c1_ia;
  int32_T c1_iacol;
  int32_T c1_ib;
  int32_T c1_ibcol;
  int32_T c1_ibmat;
  int32_T c1_ic;
  int32_T c1_itilerow;
  int32_T c1_ix;
  int32_T c1_jcol;
  int32_T c1_k;
  int32_T c1_k_k;
  int32_T c1_l_k;
  int32_T c1_varargin_3;
  int32_T c1_varargin_4;
  int32_T c1_varargin_5;
  int32_T c1_varargin_6;
  int32_T c1_xj;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_b;
  boolean_T c1_guard1 = false;
  boolean_T c1_p;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  if (c1_obj->UseCustomH == 0.0) {
    c1_a = c1_obj->TieBreaker;
    for (c1_jcol = 0; c1_jcol < 2; c1_jcol++) {
      c1_b_jcol = c1_jcol;
      c1_iacol = c1_b_jcol;
      c1_ibmat = c1_b_jcol * 16000000 - 1;
      for (c1_itilerow = 0; c1_itilerow < 16000000; c1_itilerow++) {
        c1_b_itilerow = c1_itilerow;
        c1_ibcol = c1_ibmat + c1_b_itilerow;
        chartInstance->c1_b[c1_ibcol + 1] = c1_goalIn[c1_iacol];
      }
    }

    c1_st.site = &c1_hf_emlrtRSI;
    c1_b_obj = c1_obj;
    for (c1_i1 = 0; c1_i1 < 32000000; c1_i1++) {
      chartInstance->c1_pose1[c1_i1] = c1_obj->AllNodes[c1_i1];
    }

    c1_type = c1_obj->HCostMethod;
    if (c1_type != (real_T)(int32_T)muDoubleScalarFloor(c1_type)) {
      emlrtIntegerCheckR2012b(c1_type, &c1_wb_emlrtDCI, &c1_st);
    }

    switch ((int32_T)c1_type) {
     case 2:
      for (c1_k = 0; c1_k < 2; c1_k++) {
        c1_ia = c1_k;
        c1_ib = c1_k;
        c1_ic = c1_k;
        c1_c_varargin_1 = c1_ic + 1;
        c1_b_varargin_2 = c1_ia + 1;
        c1_varargin_3 = c1_ib + 1;
        for (c1_h_k = 0; c1_h_k < 16000000; c1_h_k++) {
          c1_b_ia = c1_h_k;
          c1_b_ib = c1_h_k;
          c1_b_ic = c1_h_k;
          c1_d_varargin_1 = c1_b_ic;
          c1_c_varargin_2 = c1_c_varargin_1 - 1;
          c1_b_varargin_3 = c1_b_ia;
          c1_varargin_4 = c1_b_varargin_2 - 1;
          c1_varargin_5 = c1_b_ib;
          c1_varargin_6 = c1_varargin_3 - 1;
          chartInstance->c1_c[c1_d_varargin_1 + 16000000 * c1_c_varargin_2] =
            chartInstance->c1_pose1[c1_b_varargin_3 + 16000000 * c1_varargin_4]
            - chartInstance->c1_b[c1_varargin_5 + 16000000 * c1_varargin_6];
        }
      }

      for (c1_b_k = 0; c1_b_k < 32000000; c1_b_k++) {
        c1_e_k = c1_b_k;
        c1_d_x = chartInstance->c1_c[c1_e_k];
        c1_d_y = muDoubleScalarAbs(c1_d_x);
        chartInstance->c1_b[c1_e_k] = c1_d_y;
      }

      for (c1_xj = 0; c1_xj < 16000000; c1_xj++) {
        c1_e_xj = c1_xj;
        c1_Hn[c1_e_xj] = chartInstance->c1_b[c1_e_xj];
      }

      for (c1_d_xj = 0; c1_d_xj < 16000000; c1_d_xj++) {
        c1_e_xj = c1_d_xj;
        c1_ix = c1_e_xj;
        c1_Hn[c1_e_xj] += chartInstance->c1_b[c1_ix + 16000000];
      }
      break;

     case 3:
      c1_plannerAStarGrid_Chebyshev(chartInstance, chartInstance->c1_pose1,
        chartInstance->c1_b, c1_Hn);
      break;

     case 4:
      for (c1_i2 = 0; c1_i2 < 32000000; c1_i2++) {
        chartInstance->c1_pose1[c1_i2] -= chartInstance->c1_b[c1_i2];
      }

      for (c1_c_k = 0; c1_c_k < 32000000; c1_c_k++) {
        c1_f_k = c1_c_k;
        c1_b_a = chartInstance->c1_pose1[c1_f_k];
        c1_e_y = c1_b_a * c1_b_a;
        chartInstance->c1_b[c1_f_k] = c1_e_y;
      }

      for (c1_b_xj = 0; c1_b_xj < 16000000; c1_b_xj++) {
        c1_g_xj = c1_b_xj;
        c1_Hn[c1_g_xj] = chartInstance->c1_b[c1_g_xj];
      }

      for (c1_f_xj = 0; c1_f_xj < 16000000; c1_f_xj++) {
        c1_g_xj = c1_f_xj;
        c1_b_ix = c1_g_xj;
        c1_Hn[c1_g_xj] += chartInstance->c1_b[c1_b_ix + 16000000];
      }
      break;

     default:
      c1_b_st.site = &c1_kf_emlrtRSI;
      for (c1_i3 = 0; c1_i3 < 32000000; c1_i3++) {
        chartInstance->c1_pose1[c1_i3] -= chartInstance->c1_b[c1_i3];
      }

      for (c1_d_k = 0; c1_d_k < 32000000; c1_d_k++) {
        c1_g_k = c1_d_k;
        c1_c_a = chartInstance->c1_pose1[c1_g_k];
        c1_f_y = c1_c_a * c1_c_a;
        chartInstance->c1_b[c1_g_k] = c1_f_y;
      }

      for (c1_c_xj = 0; c1_c_xj < 16000000; c1_c_xj++) {
        c1_i_xj = c1_c_xj;
        c1_Hn[c1_i_xj] = chartInstance->c1_b[c1_i_xj];
      }

      for (c1_h_xj = 0; c1_h_xj < 16000000; c1_h_xj++) {
        c1_i_xj = c1_h_xj;
        c1_c_ix = c1_i_xj;
        c1_Hn[c1_i_xj] += chartInstance->c1_b[c1_c_ix + 16000000];
      }

      c1_c_st.site = &c1_lf_emlrtRSI;
      c1_p = false;
      for (c1_i_k = 0; c1_i_k < 16000000; c1_i_k++) {
        c1_j_k = (real_T)c1_i_k + 1.0;
        if (c1_p || (c1_Hn[(int32_T)c1_j_k - 1] < 0.0)) {
          c1_b_p = true;
        } else {
          c1_b_p = false;
        }

        c1_p = c1_b_p;
      }

      if (c1_p) {
        c1_h_y = NULL;
        sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_i_y = NULL;
        sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_j_y = NULL;
        sf_mex_assign(&c1_j_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1,
          4), false);
        sf_mex_call(&c1_c_st, &c1_q_emlrtMCI, "error", 0U, 2U, 14, c1_h_y, 14,
                    sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_c_st, NULL, "message", 1U, 2U, 14, c1_i_y, 14, c1_j_y)));
      }

      for (c1_k_k = 0; c1_k_k < 16000000; c1_k_k++) {
        c1_l_k = c1_k_k;
        c1_e_x = c1_Hn[c1_l_k];
        c1_f_x = c1_e_x;
        c1_f_x = muDoubleScalarSqrt(c1_f_x);
        c1_Hn[c1_l_k] = c1_f_x;
      }
      break;
    }

    for (c1_i4 = 0; c1_i4 < 16000000; c1_i4++) {
      c1_Hn[c1_i4] /= c1_b_obj->MapResolution;
    }

    for (c1_i5 = 0; c1_i5 < 16000000; c1_i5++) {
      c1_Hn[c1_i5] *= c1_a;
    }
  } else {
    for (c1_i = 0; c1_i < 16000000; c1_i++) {
      c1_b_i = (real_T)c1_i + 1.0;
      c1_c_i = (int32_T)c1_b_i - 1;
      for (c1_d_i = 0; c1_d_i < 2; c1_d_i++) {
        c1_c_obj[c1_d_i] = c1_obj->AllNodes[c1_c_i + 16000000 * c1_d_i];
      }

      c1_st.site = &c1_if_emlrtRSI;
      c1_hcost = c1_obj->TieBreaker * c1_plannerAStarGrid_Euclidean
        (chartInstance, &c1_st, c1_c_obj, c1_goalIn) / c1_obj->MapResolution;
      c1_st.site = &c1_jf_emlrtRSI;
      c1_val = c1_hcost;
      c1_b_x = c1_val;
      c1_b_b = muDoubleScalarIsNaN(c1_b_x);
      c1_guard1 = false;
      if (c1_b_b) {
        c1_guard1 = true;
      } else {
        c1_c_x = c1_val;
        c1_c_b = muDoubleScalarIsInf(c1_c_x);
        if (c1_c_b) {
          c1_guard1 = true;
        }
      }

      if (c1_guard1) {
        c1_c_y = NULL;
        sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv5, 10, 0U, 1U, 0U, 2, 1,
          64), false);
        c1_g_y = NULL;
        sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv5, 10, 0U, 1U, 0U, 2, 1,
          64), false);
        sf_mex_call(&c1_st, &c1_r_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                    sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_st, NULL, "message", 1U, 1U, 14, c1_g_y)));
      }

      c1_Hn[(int32_T)c1_b_i - 1] = c1_hcost;
    }
  }
}

static void c1_plannerAStarGrid_Chebyshev(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, real_T c1_b_pose1[32000000], real_T c1_pose2[32000000], real_T
  c1_dist[16000000])
{
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_c_y;
  real_T c1_d_x;
  real_T c1_d_y;
  real_T c1_e_y;
  real_T c1_ex;
  int32_T c1_b_ia;
  int32_T c1_b_ib;
  int32_T c1_b_ic;
  int32_T c1_b_k;
  int32_T c1_b_varargin_2;
  int32_T c1_b_varargin_3;
  int32_T c1_b_xj;
  int32_T c1_c_k;
  int32_T c1_c_varargin_1;
  int32_T c1_c_varargin_2;
  int32_T c1_c_xj;
  int32_T c1_d_k;
  int32_T c1_d_varargin_1;
  int32_T c1_e_k;
  int32_T c1_f_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_ia;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_ix;
  int32_T c1_k;
  int32_T c1_varargin_3;
  int32_T c1_varargin_4;
  int32_T c1_varargin_5;
  int32_T c1_varargin_6;
  int32_T c1_xj;
  for (c1_k = 0; c1_k < 2; c1_k++) {
    c1_ia = c1_k;
    c1_ib = c1_k;
    c1_ic = c1_k;
    c1_c_varargin_1 = c1_ic + 1;
    c1_b_varargin_2 = c1_ia + 1;
    c1_varargin_3 = c1_ib + 1;
    for (c1_e_k = 0; c1_e_k < 16000000; c1_e_k++) {
      c1_b_ia = c1_e_k;
      c1_b_ib = c1_e_k;
      c1_b_ic = c1_e_k;
      c1_d_varargin_1 = c1_b_ic;
      c1_c_varargin_2 = c1_c_varargin_1 - 1;
      c1_b_varargin_3 = c1_b_ia;
      c1_varargin_4 = c1_b_varargin_2 - 1;
      c1_varargin_5 = c1_b_ib;
      c1_varargin_6 = c1_varargin_3 - 1;
      chartInstance->c1_b_c[c1_d_varargin_1 + 16000000 * c1_c_varargin_2] =
        c1_b_pose1[c1_b_varargin_3 + 16000000 * c1_varargin_4] -
        c1_pose2[c1_varargin_5 + 16000000 * c1_varargin_6];
    }
  }

  for (c1_b_k = 0; c1_b_k < 32000000; c1_b_k++) {
    c1_c_k = c1_b_k;
    c1_b_x = chartInstance->c1_b_c[c1_c_k];
    c1_c_y = muDoubleScalarAbs(c1_b_x);
    chartInstance->c1_difference[c1_c_k] = c1_c_y;
  }

  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    chartInstance->c1_varargin_1[c1_i] = chartInstance->c1_difference[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 16000000; c1_i1++) {
    chartInstance->c1_varargin_2[c1_i1] = chartInstance->c1_difference[c1_i1 +
      16000000];
  }

  for (c1_d_k = 0; c1_d_k < 16000000; c1_d_k++) {
    c1_f_k = c1_d_k;
    c1_c_x = chartInstance->c1_varargin_1[c1_f_k];
    c1_d_y = chartInstance->c1_varargin_2[c1_f_k];
    c1_d_x = c1_c_x;
    c1_e_y = c1_d_y;
    c1_ex = muDoubleScalarMin(c1_d_x, c1_e_y);
    chartInstance->c1_minval[c1_f_k] = c1_ex;
  }

  for (c1_xj = 0; c1_xj < 16000000; c1_xj++) {
    c1_c_xj = c1_xj;
    c1_dist[c1_c_xj] = chartInstance->c1_difference[c1_c_xj];
  }

  for (c1_b_xj = 0; c1_b_xj < 16000000; c1_b_xj++) {
    c1_c_xj = c1_b_xj;
    c1_ix = c1_c_xj;
    c1_dist[c1_c_xj] += chartInstance->c1_difference[c1_ix + 16000000];
  }

  for (c1_i2 = 0; c1_i2 < 16000000; c1_i2++) {
    c1_dist[c1_i2] -= chartInstance->c1_minval[c1_i2];
  }
}

static real_T c1_plannerAStarGrid_Euclidean(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, real_T c1_b_pose1[2], real_T
  c1_pose2[2])
{
  static char_T c1_b_cv[4] = { 's', 'q', 'r', 't' };

  emlrtStack c1_st;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  real_T c1_a[2];
  real_T c1_d_y[2];
  real_T c1_b_a;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_c_y;
  real_T c1_dist;
  real_T c1_e_y;
  int32_T c1_b_k;
  int32_T c1_i;
  int32_T c1_k;
  boolean_T c1_b_p;
  boolean_T c1_p;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_a[c1_i] = c1_b_pose1[c1_i] - c1_pose2[c1_i];
  }

  for (c1_k = 0; c1_k < 2; c1_k++) {
    c1_b_k = c1_k;
    c1_b_a = c1_a[c1_b_k];
    c1_e_y = c1_b_a * c1_b_a;
    c1_d_y[c1_b_k] = c1_e_y;
  }

  c1_st.site = &c1_mf_emlrtRSI;
  c1_c_y = c1_sumColumnB(chartInstance, c1_d_y);
  c1_st.site = &c1_mf_emlrtRSI;
  c1_b_x = c1_c_y;
  c1_dist = c1_b_x;
  c1_c_x = c1_dist;
  if (c1_c_x < 0.0) {
    c1_p = true;
  } else {
    c1_p = false;
  }

  c1_b_p = c1_p;
  if (c1_b_p) {
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(&c1_st, &c1_q_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 2U, 14, c1_g_y, 14, c1_h_y)));
  }

  return muDoubleScalarSqrt(c1_dist);
}

static real_T c1_sumColumnB(SFc1_aSPPAOAIWInstanceStruct *chartInstance, real_T
  c1_b_x[2])
{
  real_T c1_c_y;
  int32_T c1_k;
  (void)chartInstance;
  c1_c_y = c1_b_x[0];
  for (c1_k = 0; c1_k < 1; c1_k++) {
    c1_c_y += c1_b_x[1];
  }

  return c1_c_y;
}

static void c1_plannerAStarGrid_getNeighbors(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_Neighbors_data[], int32_T c1_Neighbors_size[2], real_T
  *c1_NumNeighbors)
{
  static real_T c1_Neighbors[16] = { -1.0, 0.0, 1.0, -1.0, 1.0, -1.0, 0.0, 1.0,
    -1.0, -1.0, -1.0, 0.0, 0.0, 1.0, 1.0, 1.0 };

  static real_T c1_b_Neighbors[8] = { 0.0, -1.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.0 };

  int32_T c1_i;
  int32_T c1_i1;
  (void)chartInstance;
  if (c1_obj->DiagonalSearchFlag != (real_T)(int32_T)muDoubleScalarFloor
      (c1_obj->DiagonalSearchFlag)) {
    emlrtIntegerCheckR2012b(c1_obj->DiagonalSearchFlag, &c1_xb_emlrtDCI,
      (emlrtConstCTX)c1_sp);
  }

  if ((int32_T)c1_obj->DiagonalSearchFlag == 0) {
    c1_Neighbors_size[0] = 4;
    c1_Neighbors_size[1] = 2;
    for (c1_i1 = 0; c1_i1 < 8; c1_i1++) {
      c1_Neighbors_data[c1_i1] = c1_b_Neighbors[c1_i1];
    }

    *c1_NumNeighbors = 4.0;
  } else {
    c1_Neighbors_size[0] = 8;
    c1_Neighbors_size[1] = 2;
    for (c1_i = 0; c1_i < 16; c1_i++) {
      c1_Neighbors_data[c1_i] = c1_Neighbors[c1_i];
    }

    *c1_NumNeighbors = 8.0;
  }
}

static void c1_plannerAStarGrid_reconstructPath(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_CurrentRow, real_T c1_CurrentCol, real_T c1_startIn[2])
{
  static char_T c1_b_cv[16] = { 'P', 'a', 't', 'h', 'P', 'o', 'i', 'n', 't', 'C',
    'o', 'u', 'n', 't', 'e', 'r' };

  c1_emxArray_int32_T *c1_r;
  c1_emxArray_real_T *c1_b_x;
  c1_emxArray_real_T *c1_c_x;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  real_T c1_CurrentColDummy;
  real_T c1_b_tmp;
  real_T c1_k;
  real_T c1_tmp;
  real_T c1_u;
  int32_T c1_iv[2];
  int32_T c1_iv1[1];
  int32_T c1_b_b;
  int32_T c1_b_k;
  int32_T c1_b_loop_ub;
  int32_T c1_b_n;
  int32_T c1_b_nd2;
  int32_T c1_c_b;
  int32_T c1_c_k;
  int32_T c1_c_loop_ub;
  int32_T c1_d_b;
  int32_T c1_d_k;
  int32_T c1_d_loop_ub;
  int32_T c1_e_b;
  int32_T c1_e_k;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_k;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_j;
  int32_T c1_loop_ub;
  int32_T c1_n;
  int32_T c1_nd2;
  int32_T c1_offset;
  int32_T c1_vlen;
  boolean_T c1_b_overflow;
  boolean_T c1_overflow;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_k = 1.0;
  chartInstance->c1_OptimalPath[0] = c1_CurrentRow;
  chartInstance->c1_OptimalPath[16000000] = c1_CurrentCol;
  if (c1_CurrentRow != (real_T)(int32_T)muDoubleScalarFloor(c1_CurrentRow)) {
    emlrtIntegerCheckR2012b(c1_CurrentRow, &c1_yb_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i = (int32_T)c1_CurrentRow;
  if ((c1_i < 1) || (c1_i > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i, 1, 4000, &c1_pd_emlrtBCI, (emlrtConstCTX)
      c1_sp);
  }

  if (c1_CurrentCol != (real_T)(int32_T)muDoubleScalarFloor(c1_CurrentCol)) {
    emlrtIntegerCheckR2012b(c1_CurrentCol, &c1_ac_emlrtDCI, (emlrtConstCTX)c1_sp);
  }

  c1_i1 = (int32_T)c1_CurrentCol;
  if ((c1_i1 < 1) || (c1_i1 > 4000)) {
    emlrtDynamicBoundsCheckR2012b(c1_i1, 1, 4000, &c1_qd_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  chartInstance->c1_pathIndices[0] = c1_obj->MapIndex[(c1_i + 4000 * (c1_i1 - 1))
    - 1];
  do {
    c1_exitg1 = 0;
    c1_k++;
    if (!(c1_k <= 1.6E+7)) {
      c1_c_y = NULL;
      sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                    false);
      c1_d_y = NULL;
      sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 52),
                    false);
      c1_e_y = NULL;
      sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1,
        16), false);
      c1_u = 1.6E+7;
      c1_f_y = NULL;
      sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
      sf_mex_call(c1_sp, &c1_t_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                  sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (c1_sp, NULL, "message", 1U, 3U, 14, c1_d_y, 14, c1_e_y, 14, c1_f_y)));
    }

    c1_CurrentColDummy = c1_obj->ParentCol[((int32_T)c1_CurrentRow + 4000 *
      ((int32_T)c1_CurrentCol - 1)) - 1];
    c1_CurrentRow = c1_obj->ParentRow[((int32_T)c1_CurrentRow + 4000 * ((int32_T)
      c1_CurrentCol - 1)) - 1];
    c1_CurrentCol = c1_CurrentColDummy;
    if ((c1_CurrentRow == 0.0) || (c1_CurrentColDummy == 0.0)) {
      c1_k--;
      c1_exitg1 = 1;
    } else {
      c1_b_k = (int32_T)c1_k - 1;
      chartInstance->c1_OptimalPath[c1_b_k] = c1_CurrentRow;
      chartInstance->c1_OptimalPath[16000000 + c1_b_k] = c1_CurrentColDummy;
      if (c1_CurrentRow != (real_T)(int32_T)muDoubleScalarFloor(c1_CurrentRow))
      {
        emlrtIntegerCheckR2012b(c1_CurrentRow, &c1_bc_emlrtDCI, (emlrtConstCTX)
          c1_sp);
      }

      c1_i2 = (int32_T)c1_CurrentRow;
      if ((c1_i2 < 1) || (c1_i2 > 4000)) {
        emlrtDynamicBoundsCheckR2012b(c1_i2, 1, 4000, &c1_rd_emlrtBCI,
          (emlrtConstCTX)c1_sp);
      }

      if (c1_CurrentColDummy != (real_T)(int32_T)muDoubleScalarFloor
          (c1_CurrentColDummy)) {
        emlrtIntegerCheckR2012b(c1_CurrentColDummy, &c1_cc_emlrtDCI,
          (emlrtConstCTX)c1_sp);
      }

      c1_i6 = (int32_T)c1_CurrentColDummy;
      if ((c1_i6 < 1) || (c1_i6 > 4000)) {
        emlrtDynamicBoundsCheckR2012b(c1_i6, 1, 4000, &c1_sd_emlrtBCI,
          (emlrtConstCTX)c1_sp);
      }

      chartInstance->c1_pathIndices[(int32_T)c1_k - 1] = c1_obj->MapIndex[(c1_i2
        + 4000 * (c1_i6 - 1)) - 1];
      if ((c1_CurrentColDummy == c1_startIn[1]) && (c1_CurrentRow == c1_startIn
           [0])) {
        c1_exitg1 = 1;
      }
    }
  } while (c1_exitg1 == 0);

  c1_obj->NumPathPoints = c1_k;
  c1_i3 = (int32_T)c1_k - 1;
  c1_i4 = (int32_T)c1_k - 1;
  c1_emxInit_int32_T(chartInstance, c1_sp, &c1_r, 1, &c1_bc_emlrtRTEI);
  c1_i5 = c1_r->size[0];
  c1_r->size[0] = c1_i4 + 1;
  c1_st.site = &c1_xf_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i5,
    &c1_wb_emlrtRTEI);
  c1_loop_ub = c1_i4;
  for (c1_i7 = 0; c1_i7 <= c1_loop_ub; c1_i7++) {
    c1_r->data[c1_i7] = c1_i7;
  }

  c1_st.site = &c1_xf_emlrtRSI;
  c1_emxInit_real_T1(chartInstance, &c1_st, &c1_b_x, 2, &c1_xb_emlrtRTEI);
  c1_i8 = c1_b_x->size[0] * c1_b_x->size[1];
  c1_b_x->size[0] = c1_i3 + 1;
  c1_b_x->size[1] = 2;
  c1_b_st.site = &c1_xf_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_b_st, c1_b_x, c1_i8,
    &c1_xb_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 2; c1_i9++) {
    c1_b_loop_ub = c1_i3;
    for (c1_i10 = 0; c1_i10 <= c1_b_loop_ub; c1_i10++) {
      c1_b_x->data[c1_i10 + c1_b_x->size[0] * c1_i9] =
        chartInstance->c1_OptimalPath[c1_i10 + 16000000 * c1_i9];
    }
  }

  if ((real_T)c1_b_x->size[0] > 1.0) {
    c1_vlen = c1_b_x->size[0];
    c1_n = c1_b_x->size[0];
    c1_nd2 = c1_n >> 1;
    for (c1_j = 0; c1_j < 2; c1_j++) {
      c1_offset = c1_j * c1_vlen;
      c1_b_st.site = &c1_yf_emlrtRSI;
      c1_b_b = c1_nd2;
      c1_c_b = c1_b_b;
      if (c1_c_b < 1) {
        c1_overflow = false;
      } else {
        c1_overflow = (c1_c_b > 2147483646);
      }

      if (c1_overflow) {
        c1_c_st.site = &c1_ic_emlrtRSI;
        c1_check_forloop_overflow_error(chartInstance, &c1_c_st);
      }

      for (c1_c_k = 0; c1_c_k < c1_nd2; c1_c_k++) {
        c1_d_k = c1_c_k;
        c1_tmp = c1_b_x->data[c1_offset + c1_d_k];
        c1_b_x->data[c1_offset + c1_d_k] = c1_b_x->data[((c1_offset + c1_n) -
          c1_d_k) - 1];
        c1_b_x->data[((c1_offset + c1_n) - c1_d_k) - 1] = c1_tmp;
      }
    }
  }

  c1_iv[0] = c1_r->size[0];
  c1_iv[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&c1_iv[0], 2, c1_b_x->size, 2, &c1_j_emlrtECI,
    (void *)c1_sp);
  for (c1_i11 = 0; c1_i11 < 2; c1_i11++) {
    c1_c_loop_ub = c1_b_x->size[0] - 1;
    for (c1_i13 = 0; c1_i13 <= c1_c_loop_ub; c1_i13++) {
      c1_obj->PathInternal[c1_r->data[c1_i13] + 16000000 * c1_i11] =
        c1_b_x->data[c1_i13 + c1_b_x->size[0] * c1_i11];
    }
  }

  c1_emxFree_real_T(chartInstance, &c1_b_x);
  c1_i12 = (int32_T)c1_k - 1;
  c1_i14 = (int32_T)c1_k - 1;
  c1_i15 = c1_r->size[0];
  c1_r->size[0] = c1_i14 + 1;
  c1_st.site = &c1_wf_emlrtRSI;
  c1_emxEnsureCapacity_int32_T(chartInstance, &c1_st, c1_r, c1_i15,
    &c1_yb_emlrtRTEI);
  c1_d_loop_ub = c1_i14;
  for (c1_i16 = 0; c1_i16 <= c1_d_loop_ub; c1_i16++) {
    c1_r->data[c1_i16] = c1_i16;
  }

  c1_st.site = &c1_wf_emlrtRSI;
  c1_emxInit_real_T(chartInstance, &c1_st, &c1_c_x, 1, &c1_ac_emlrtRTEI);
  c1_i17 = c1_c_x->size[0];
  c1_c_x->size[0] = c1_i12 + 1;
  c1_b_st.site = &c1_wf_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_c_x, c1_i17,
    &c1_ac_emlrtRTEI);
  c1_e_loop_ub = c1_i12;
  for (c1_i18 = 0; c1_i18 <= c1_e_loop_ub; c1_i18++) {
    c1_c_x->data[c1_i18] = chartInstance->c1_pathIndices[c1_i18];
  }

  if ((real_T)c1_c_x->size[0] > 1.0) {
    c1_b_n = c1_c_x->size[0];
    c1_b_nd2 = c1_b_n >> 1;
    c1_b_st.site = &c1_yf_emlrtRSI;
    c1_d_b = c1_b_nd2;
    c1_e_b = c1_d_b;
    if (c1_e_b < 1) {
      c1_b_overflow = false;
    } else {
      c1_b_overflow = (c1_e_b > 2147483646);
    }

    if (c1_b_overflow) {
      c1_c_st.site = &c1_ic_emlrtRSI;
      c1_check_forloop_overflow_error(chartInstance, &c1_c_st);
    }

    for (c1_e_k = 0; c1_e_k < c1_b_nd2; c1_e_k++) {
      c1_f_k = c1_e_k;
      c1_b_tmp = c1_c_x->data[c1_f_k];
      c1_c_x->data[c1_f_k] = c1_c_x->data[(c1_b_n - c1_f_k) - 1];
      c1_c_x->data[(c1_b_n - c1_f_k) - 1] = c1_b_tmp;
    }
  }

  c1_iv1[0] = c1_r->size[0];
  emlrtSubAssignSizeCheckR2012b(&c1_iv1[0], 1, c1_c_x->size, 1, &c1_i_emlrtECI,
    (void *)c1_sp);
  c1_f_loop_ub = c1_c_x->size[0] - 1;
  for (c1_i19 = 0; c1_i19 <= c1_f_loop_ub; c1_i19++) {
    c1_obj->PathIndicesInternal[c1_r->data[c1_i19]] = c1_c_x->data[c1_i19];
  }

  c1_emxFree_real_T(chartInstance, &c1_c_x);
  c1_emxFree_int32_T(chartInstance, &c1_r);
}

static real_T c1_plannerAStarGrid_gcostValue(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_plannerAStarGrid
  *c1_obj, real_T c1_CurrentRow, real_T c1_CurrentCol, real_T c1_i, real_T c1_j)
{
  static char_T c1_b_cv[4] = { 's', 'q', 'r', 't' };

  c1_nav_algs_internal_plannerAStarGrid *c1_b_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_n_y = NULL;
  const mxArray *c1_p_y = NULL;
  const mxArray *c1_r_y = NULL;
  real_T c1_b_CurrentRow[2];
  real_T c1_b_difference[2];
  real_T c1_c_CurrentRow[2];
  real_T c1_c_c[2];
  real_T c1_d_y[2];
  real_T c1_a;
  real_T c1_b_a;
  real_T c1_b_minval;
  real_T c1_b_varargin_2;
  real_T c1_b_x;
  real_T c1_c_a;
  real_T c1_c_x;
  real_T c1_c_y;
  real_T c1_d_b;
  real_T c1_d_varargin_1;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_f_y;
  real_T c1_g_x;
  real_T c1_g_y;
  real_T c1_gcostNeighbor;
  real_T c1_h_x;
  real_T c1_h_y;
  real_T c1_i_x;
  real_T c1_i_y;
  real_T c1_j_x;
  real_T c1_j_y;
  real_T c1_k_x;
  real_T c1_l_x;
  real_T c1_l_y;
  real_T c1_m_y;
  real_T c1_o_y;
  real_T c1_q_y;
  real_T c1_s_y;
  real_T c1_type;
  real_T c1_val;
  int32_T c1_b_i;
  int32_T c1_b_ib;
  int32_T c1_b_ic;
  int32_T c1_b_k;
  int32_T c1_b_varargin_3;
  int32_T c1_b_varargin_6;
  int32_T c1_c_k;
  int32_T c1_c_varargin_1;
  int32_T c1_c_varargin_2;
  int32_T c1_d_k;
  int32_T c1_d_varargin_2;
  int32_T c1_e_k;
  int32_T c1_e_varargin_1;
  int32_T c1_f_k;
  int32_T c1_g_k;
  int32_T c1_h_k;
  int32_T c1_i1;
  int32_T c1_i_k;
  int32_T c1_ib;
  int32_T c1_ic;
  int32_T c1_j_k;
  int32_T c1_k;
  int32_T c1_varargin_3;
  int32_T c1_varargin_6;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_b;
  boolean_T c1_guard1 = false;
  boolean_T c1_p;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  if (c1_obj->UseCustomG == 0.0) {
    c1_st.site = &c1_ag_emlrtRSI;
    c1_b_obj = c1_obj;
    c1_b_difference[0] = c1_i;
    c1_b_difference[1] = c1_j;
    c1_type = c1_obj->GCostMethod;
    if (c1_type != (real_T)(int32_T)muDoubleScalarFloor(c1_type)) {
      emlrtIntegerCheckR2012b(c1_type, &c1_wb_emlrtDCI, &c1_st);
    }

    switch ((int32_T)c1_type) {
     case 2:
      c1_b_st.site = &c1_dg_emlrtRSI;
      for (c1_k = 0; c1_k < 2; c1_k++) {
        c1_ib = c1_k;
        c1_ic = c1_k;
        c1_c_varargin_1 = c1_ic + 1;
        c1_varargin_3 = c1_ib + 1;
        c1_c_varargin_2 = c1_c_varargin_1 - 1;
        c1_varargin_6 = c1_varargin_3 - 1;
        c1_c_c[c1_c_varargin_2] = 0.0 - c1_b_difference[c1_varargin_6];
      }

      for (c1_d_k = 0; c1_d_k < 2; c1_d_k++) {
        c1_h_k = c1_d_k;
        c1_d_x = c1_c_c[c1_h_k];
        c1_g_y = muDoubleScalarAbs(c1_d_x);
        c1_d_y[c1_h_k] = c1_g_y;
      }

      c1_c_st.site = &c1_gg_emlrtRSI;
      c1_gcostNeighbor = c1_sumColumnB(chartInstance, c1_d_y);
      break;

     case 3:
      c1_b_st.site = &c1_eg_emlrtRSI;
      for (c1_b_k = 0; c1_b_k < 2; c1_b_k++) {
        c1_b_ib = c1_b_k;
        c1_b_ic = c1_b_k;
        c1_e_varargin_1 = c1_b_ic + 1;
        c1_b_varargin_3 = c1_b_ib + 1;
        c1_d_varargin_2 = c1_e_varargin_1 - 1;
        c1_b_varargin_6 = c1_b_varargin_3 - 1;
        c1_c_c[c1_d_varargin_2] = 0.0 - c1_b_difference[c1_b_varargin_6];
      }

      for (c1_e_k = 0; c1_e_k < 2; c1_e_k++) {
        c1_i_k = c1_e_k;
        c1_e_x = c1_c_c[c1_i_k];
        c1_h_y = muDoubleScalarAbs(c1_e_x);
        c1_b_difference[c1_i_k] = c1_h_y;
      }

      c1_d_varargin_1 = c1_b_difference[0];
      c1_b_varargin_2 = c1_b_difference[1];
      c1_f_x = c1_d_varargin_1;
      c1_j_y = c1_b_varargin_2;
      c1_h_x = c1_f_x;
      c1_l_y = c1_j_y;
      c1_j_x = c1_h_x;
      c1_m_y = c1_l_y;
      c1_c_a = c1_j_x;
      c1_d_b = c1_m_y;
      c1_k_x = c1_c_a;
      c1_o_y = c1_d_b;
      c1_l_x = c1_k_x;
      c1_q_y = c1_o_y;
      c1_b_minval = muDoubleScalarMin(c1_l_x, c1_q_y);
      c1_c_st.site = &c1_hg_emlrtRSI;
      c1_s_y = c1_sumColumnB(chartInstance, c1_b_difference);
      c1_gcostNeighbor = c1_s_y - c1_b_minval;
      break;

     case 4:
      c1_b_st.site = &c1_fg_emlrtRSI;
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        c1_b_difference[c1_i1] = -c1_b_difference[c1_i1];
      }

      for (c1_f_k = 0; c1_f_k < 2; c1_f_k++) {
        c1_j_k = c1_f_k;
        c1_b_a = c1_b_difference[c1_j_k];
        c1_i_y = c1_b_a * c1_b_a;
        c1_d_y[c1_j_k] = c1_i_y;
      }

      c1_c_st.site = &c1_ig_emlrtRSI;
      c1_gcostNeighbor = c1_sumColumnB(chartInstance, c1_d_y);
      break;

     default:
      c1_b_st.site = &c1_kf_emlrtRSI;
      for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
        c1_b_difference[c1_b_i] = -c1_b_difference[c1_b_i];
      }

      for (c1_c_k = 0; c1_c_k < 2; c1_c_k++) {
        c1_g_k = c1_c_k;
        c1_a = c1_b_difference[c1_g_k];
        c1_f_y = c1_a * c1_a;
        c1_d_y[c1_g_k] = c1_f_y;
      }

      c1_c_st.site = &c1_lf_emlrtRSI;
      c1_c_y = c1_sumColumnB(chartInstance, c1_d_y);
      c1_c_st.site = &c1_lf_emlrtRSI;
      c1_g_x = c1_c_y;
      c1_gcostNeighbor = c1_g_x;
      c1_i_x = c1_gcostNeighbor;
      if (c1_i_x < 0.0) {
        c1_p = true;
      } else {
        c1_p = false;
      }

      c1_b_p = c1_p;
      if (c1_b_p) {
        c1_n_y = NULL;
        sf_mex_assign(&c1_n_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_p_y = NULL;
        sf_mex_assign(&c1_p_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c1_r_y = NULL;
        sf_mex_assign(&c1_r_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1,
          4), false);
        sf_mex_call(&c1_c_st, &c1_q_emlrtMCI, "error", 0U, 2U, 14, c1_n_y, 14,
                    sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c1_c_st, NULL, "message", 1U, 2U, 14, c1_p_y, 14, c1_r_y)));
      }

      c1_gcostNeighbor = muDoubleScalarSqrt(c1_gcostNeighbor);
      break;
    }

    c1_gcostNeighbor /= c1_b_obj->MapResolution;
  } else {
    c1_b_CurrentRow[0] = c1_CurrentRow;
    c1_b_CurrentRow[1] = c1_CurrentCol;
    c1_c_CurrentRow[0] = c1_CurrentRow + c1_i;
    c1_c_CurrentRow[1] = c1_CurrentCol + c1_j;
    c1_st.site = &c1_bg_emlrtRSI;
    c1_gcostNeighbor = c1_plannerAStarGrid_Euclidean(chartInstance, &c1_st,
      c1_b_CurrentRow, c1_c_CurrentRow) / c1_obj->MapResolution;
    c1_st.site = &c1_cg_emlrtRSI;
    c1_val = c1_gcostNeighbor;
    c1_b_x = c1_val;
    c1_b_b = muDoubleScalarIsNaN(c1_b_x);
    c1_guard1 = false;
    if (c1_b_b) {
      c1_guard1 = true;
    } else {
      c1_c_x = c1_val;
      c1_c_b = muDoubleScalarIsInf(c1_c_x);
      if (c1_c_b) {
        c1_guard1 = true;
      }
    }

    if (c1_guard1) {
      c1_e_y = NULL;
      sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv5, 10, 0U, 1U, 0U, 2, 1, 64),
                    false);
      c1_k_y = NULL;
      sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_cv5, 10, 0U, 1U, 0U, 2, 1, 64),
                    false);
      sf_mex_call(&c1_st, &c1_r_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                  sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c1_st, NULL, "message", 1U, 1U, 14, c1_k_y)));
    }
  }

  return c1_gcostNeighbor;
}

static void c1_indexShapeCheck(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_warning(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp)
{
  static char_T c1_msgID[40] = { 'n', 'a', 'v', ':', 'n', 'a', 'v', 'a', 'l',
    'g', 's', ':', 'p', 'l', 'a', 'n', 'n', 'e', 'r', 'a', 's', 't', 'a', 'r',
    'g', 'r', 'i', 'd', ':', 'N', 'o', 'P', 'a', 't', 'h', 'F', 'o', 'u', 'n',
    'd' };

  static char_T c1_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c1_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_msgID, 10, 0U, 1U, 0U, 2, 1, 40),
                false);
  c1_st.site = &c1_pg_emlrtRSI;
  c1_b_feval(chartInstance, &c1_st, c1_c_y, c1_feval(chartInstance, &c1_st,
              c1_d_y, c1_e_y));
}

static void c1_MapInterface_grid2world(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_idx, c1_emxArray_real_T *c1_pos)
{
  c1_emxArray_real_T *c1_b_idx;
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  real_T c1_b_k;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_d;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_i_y;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_k;
  int32_T c1_loop_ub;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_b;
  boolean_T c1_c_p;
  boolean_T c1_d_b;
  boolean_T c1_e_b;
  boolean_T c1_exitg1;
  boolean_T c1_p;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_st.site = &c1_qg_emlrtRSI;
  c1_b_st.site = &c1_pc_emlrtRSI;
  c1_p = true;
  c1_d = (real_T)(c1_idx->size[0] << 1);
  c1_i = (int32_T)c1_d - 1;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k <= c1_i)) {
    c1_b_k = (real_T)c1_k + 1.0;
    c1_b_x = c1_idx->data[(int32_T)c1_b_k - 1];
    c1_c_x = c1_b_x;
    c1_d_x = c1_c_x;
    c1_c_b = muDoubleScalarIsInf(c1_d_x);
    c1_b1 = !c1_c_b;
    c1_e_x = c1_c_x;
    c1_d_b = muDoubleScalarIsNaN(c1_e_x);
    c1_b3 = !c1_d_b;
    c1_e_b = (c1_b1 && c1_b3);
    if (c1_e_b) {
      c1_f_x = c1_b_x;
      c1_g_x = c1_f_x;
      c1_i_y = c1_g_x;
      c1_i_y = muDoubleScalarFloor(c1_i_y);
      if (c1_i_y == c1_b_x) {
        c1_b_p = true;
      } else {
        c1_b_p = false;
      }
    } else {
      c1_b_p = false;
    }

    c1_c_p = c1_b_p;
    if (c1_c_p) {
      c1_k++;
    } else {
      c1_p = false;
      c1_exitg1 = true;
    }
  }

  if (c1_p) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv9, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv8, 10, 0U, 1U, 0U, 2, 1, 20),
                  false);
    sf_mex_call(&c1_b_st, &c1_o_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_d_y, 14, c1_f_y)));
  }

  c1_b_st.site = &c1_pc_emlrtRSI;
  c1_b2 = (c1_idx->size[0] == 0);
  if (c1_b2) {
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv6, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv7, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_cv8, 10, 0U, 1U, 0U, 2, 1, 20),
                  false);
    sf_mex_call(&c1_b_st, &c1_v_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 2U, 14, c1_g_y, 14, c1_h_y)));
  }

  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_b_idx, 2, &c1_cc_emlrtRTEI);
  c1_i1 = c1_b_idx->size[0] * c1_b_idx->size[1];
  c1_b_idx->size[0] = c1_idx->size[0];
  c1_b_idx->size[1] = 2;
  c1_st.site = &c1_rg_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_b_idx, c1_i1,
    &c1_cc_emlrtRTEI);
  c1_loop_ub = c1_idx->size[0] * c1_idx->size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_idx->data[c1_i2] = c1_idx->data[c1_i2];
  }

  c1_st.site = &c1_rg_emlrtRSI;
  c1_MapInterface_grid2worldImpl(chartInstance, &c1_st, c1_obj, c1_b_idx, c1_pos);
  c1_emxFree_real_T(chartInstance, &c1_b_idx);
}

static void c1_MapInterface_grid2worldImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_worldXY)
{
  c1_emxArray_real_T *c1_b_gridInd;
  c1_emxArray_real_T *c1_localXY;
  emlrtStack c1_st;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_loop_ub;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_b_gridInd, 2, &c1_dc_emlrtRTEI);
  c1_i = c1_b_gridInd->size[0] * c1_b_gridInd->size[1];
  c1_b_gridInd->size[0] = c1_gridInd->size[0];
  c1_b_gridInd->size[1] = 2;
  c1_st.site = &c1_sg_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_b_gridInd, c1_i,
    &c1_dc_emlrtRTEI);
  c1_loop_ub = c1_gridInd->size[0] * c1_gridInd->size[1] - 1;
  for (c1_i1 = 0; c1_i1 <= c1_loop_ub; c1_i1++) {
    c1_b_gridInd->data[c1_i1] = c1_gridInd->data[c1_i1];
  }

  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_localXY, 2, &c1_ec_emlrtRTEI);
  c1_st.site = &c1_sg_emlrtRSI;
  c1_MapInterface_grid2localImpl(chartInstance, &c1_st, c1_obj, c1_b_gridInd,
    c1_localXY);
  c1_emxFree_real_T(chartInstance, &c1_b_gridInd);
  c1_st.site = &c1_tg_emlrtRSI;
  c1_MapInterface_local2worldImpl(chartInstance, &c1_st, c1_obj, c1_localXY,
    c1_worldXY);
  c1_emxFree_real_T(chartInstance, &c1_localXY);
}

static void c1_MapInterface_grid2localImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_localXY)
{
  c1_cell_wrap_34 c1_reshapes[2];
  c1_emxArray_real_T *c1_b_varargin_2;
  c1_emxArray_real_T *c1_c_varargin_1;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  real_T c1_gOrig[2];
  real_T c1_xlimit[2];
  real_T c1_ylimit[2];
  real_T c1_b_xlimit;
  real_T c1_b_ylimit;
  int32_T c1_sizes[2];
  int32_T c1_b_loop_ub;
  int32_T c1_c_loop_ub;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_expected;
  int32_T c1_f_loop_ub;
  int32_T c1_g_loop_ub;
  int32_T c1_h_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i_loop_ub;
  int32_T c1_loop_ub;
  int32_T c1_result;
  boolean_T c1_b_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_gOrig[c1_i] = c1_obj->SharedProperties.GridOriginInLocal[c1_i];
  }

  c1_xlimit[0] = c1_gOrig[0];
  c1_ylimit[0] = c1_gOrig[1];
  c1_st.site = &c1_ug_emlrtRSI;
  c1_b_xlimit = c1_xlimit[0];
  c1_emxInit_real_T(chartInstance, &c1_st, &c1_c_varargin_1, 1, &c1_fc_emlrtRTEI);
  c1_i1 = c1_c_varargin_1->size[0];
  c1_c_varargin_1->size[0] = c1_gridInd->size[0];
  c1_b_st.site = &c1_ug_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_c_varargin_1, c1_i1,
    &c1_fc_emlrtRTEI);
  c1_loop_ub = c1_gridInd->size[0] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_c_varargin_1->data[c1_i2] = c1_b_xlimit + (c1_gridInd->data[c1_i2 +
      c1_gridInd->size[0]] - 1.0) / c1_b_mapScalingFactor;
  }

  c1_b_ylimit = c1_ylimit[0];
  c1_emxInit_real_T(chartInstance, &c1_st, &c1_b_varargin_2, 1, &c1_gc_emlrtRTEI);
  c1_i3 = c1_b_varargin_2->size[0];
  c1_b_varargin_2->size[0] = c1_gridInd->size[0];
  c1_b_st.site = &c1_hh_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_b_varargin_2, c1_i3,
    &c1_gc_emlrtRTEI);
  c1_b_loop_ub = c1_gridInd->size[0] - 1;
  for (c1_i4 = 0; c1_i4 <= c1_b_loop_ub; c1_i4++) {
    c1_b_varargin_2->data[c1_i4] = c1_b_ylimit + (4000.0 - c1_gridInd->
      data[c1_i4]) / c1_b_mapScalingFactor;
  }

  c1_b_st.site = &c1_vg_emlrtRSI;
  c1_result = c1_c_varargin_1->size[0];
  c1_sizes[0] = c1_result;
  c1_c_st.site = &c1_wg_emlrtRSI;
  c1_expected = c1_sizes[0];
  if (c1_c_varargin_1->size[0] == c1_expected) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c1_c_st, &c1_w_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
  }

  if (c1_b_varargin_2->size[0] == c1_expected) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c1_c_st, &c1_w_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 1U, 14, c1_f_y)));
  }

  c1_emxInitMatrix_cell_wrap_34(chartInstance, &c1_b_st, c1_reshapes,
    &c1_lc_emlrtRTEI);
  c1_i5 = c1_reshapes[0].f1->size[0];
  c1_reshapes[0].f1->size[0] = c1_c_varargin_1->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_reshapes[0].f1, c1_i5,
    &c1_hc_emlrtRTEI);
  c1_c_loop_ub = c1_c_varargin_1->size[0] - 1;
  for (c1_i6 = 0; c1_i6 <= c1_c_loop_ub; c1_i6++) {
    c1_reshapes[0].f1->data[c1_i6] = c1_c_varargin_1->data[c1_i6];
  }

  c1_i7 = c1_reshapes[1].f1->size[0];
  c1_reshapes[1].f1->size[0] = c1_b_varargin_2->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_reshapes[1].f1, c1_i7,
    &c1_hc_emlrtRTEI);
  c1_d_loop_ub = c1_b_varargin_2->size[0] - 1;
  for (c1_i8 = 0; c1_i8 <= c1_d_loop_ub; c1_i8++) {
    c1_reshapes[1].f1->data[c1_i8] = c1_b_varargin_2->data[c1_i8];
  }

  c1_i9 = c1_c_varargin_1->size[0];
  c1_c_varargin_1->size[0] = c1_reshapes[0].f1->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_c_varargin_1, c1_i9,
    &c1_ic_emlrtRTEI);
  c1_e_loop_ub = c1_reshapes[0].f1->size[0] - 1;
  for (c1_i10 = 0; c1_i10 <= c1_e_loop_ub; c1_i10++) {
    c1_c_varargin_1->data[c1_i10] = c1_reshapes[0].f1->data[c1_i10];
  }

  c1_i11 = c1_b_varargin_2->size[0];
  c1_b_varargin_2->size[0] = c1_reshapes[1].f1->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_b_varargin_2, c1_i11,
    &c1_ic_emlrtRTEI);
  c1_f_loop_ub = c1_reshapes[1].f1->size[0] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_f_loop_ub; c1_i12++) {
    c1_b_varargin_2->data[c1_i12] = c1_reshapes[1].f1->data[c1_i12];
  }

  c1_emxFreeMatrix_cell_wrap_34(chartInstance, c1_reshapes);
  c1_i13 = c1_localXY->size[0] * c1_localXY->size[1];
  c1_localXY->size[0] = c1_c_varargin_1->size[0];
  c1_localXY->size[1] = 2;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_b_st, c1_localXY, c1_i13,
    &c1_jc_emlrtRTEI);
  c1_g_loop_ub = c1_c_varargin_1->size[0] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_g_loop_ub; c1_i14++) {
    c1_localXY->data[c1_i14] = c1_c_varargin_1->data[c1_i14];
  }

  c1_emxFree_real_T(chartInstance, &c1_c_varargin_1);
  c1_h_loop_ub = c1_b_varargin_2->size[0] - 1;
  for (c1_i15 = 0; c1_i15 <= c1_h_loop_ub; c1_i15++) {
    c1_localXY->data[c1_i15 + c1_localXY->size[0]] = c1_b_varargin_2->
      data[c1_i15];
  }

  c1_emxFree_real_T(chartInstance, &c1_b_varargin_2);
  c1_i16 = c1_localXY->size[0] << 1;
  c1_i17 = c1_localXY->size[0] * c1_localXY->size[1];
  c1_localXY->size[1] = 2;
  c1_st.site = &c1_ug_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_localXY, c1_i17,
    &c1_kc_emlrtRTEI);
  c1_i18 = c1_i16;
  c1_i_loop_ub = c1_i18 - 1;
  for (c1_i19 = 0; c1_i19 <= c1_i_loop_ub; c1_i19++) {
    c1_localXY->data[c1_i19] += 0.005;
  }
}

static void c1_MapInterface_local2worldImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_localXY, c1_emxArray_real_T *c1_worldXY)
{
  emlrtStack c1_st;
  real_T c1_locWorld[2];
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_loop_ub;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_locWorld[c1_i] = c1_obj->SharedProperties.LocalOriginInWorld[c1_i];
  }

  c1_i1 = c1_worldXY->size[0] * c1_worldXY->size[1];
  c1_worldXY->size[0] = c1_localXY->size[0];
  c1_worldXY->size[1] = 2;
  c1_st.site = &c1_rh_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_worldXY, c1_i1,
    &c1_mc_emlrtRTEI);
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_loop_ub = c1_localXY->size[0] - 1;
    for (c1_i3 = 0; c1_i3 <= c1_loop_ub; c1_i3++) {
      c1_worldXY->data[c1_i3 + c1_worldXY->size[0] * c1_i2] = c1_localXY->
        data[c1_i3 + c1_localXY->size[0] * c1_i2] + c1_locWorld[c1_i2];
    }
  }
}

static void c1_plannerAStarGrid_get_PathInGrid(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj,
  c1_emxArray_real_T *c1_val)
{
  emlrtStack c1_st;
  real_T c1_d;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_loop_ub;
  boolean_T c1_b1;
  boolean_T c1_b_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_d = c1_obj->NumPathPoints;
  c1_b_b = (c1_d < 1.0);
  if (c1_b_b) {
    c1_i = -1;
  } else {
    if (c1_d != (real_T)(int32_T)muDoubleScalarFloor(c1_d)) {
      emlrtIntegerCheckR2012b(c1_d, &c1_dc_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i1 = (int32_T)c1_d;
    if ((c1_i1 < 1) || (c1_i1 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i1, 1, 16000000, &c1_td_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i = c1_i1 - 1;
  }

  c1_i2 = c1_val->size[0] * c1_val->size[1];
  c1_val->size[0] = c1_i + 1;
  c1_val->size[1] = 2;
  c1_st.site = &c1_qh_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_val, c1_i2,
    &c1_nc_emlrtRTEI);
  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    c1_loop_ub = c1_i;
    for (c1_i4 = 0; c1_i4 <= c1_loop_ub; c1_i4++) {
      c1_val->data[c1_i4 + c1_val->size[0] * c1_i3] = c1_obj->PathInGrid[c1_i4 +
        16000000 * c1_i3];
    }
  }

  c1_b1 = (c1_val->size[0] == 0);
  if (c1_b1) {
    c1_i5 = c1_val->size[0] * c1_val->size[1];
    c1_val->size[0] = 1;
    c1_val->size[1] = 2;
    c1_st.site = &c1_ph_emlrtRSI;
    c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_val, c1_i5,
      &c1_oc_emlrtRTEI);
    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_val->data[c1_val->size[0] * c1_i6] = c1_obj->PathInGrid[16000000 *
        c1_i6];
    }
  }
}

static void c1_plannerAStarGrid_get_PathXY(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_plannerAStarGrid *c1_obj,
  c1_emxArray_real_T *c1_val)
{
  emlrtStack c1_st;
  real_T c1_d;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_loop_ub;
  boolean_T c1_b1;
  boolean_T c1_b_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_d = c1_obj->NumPathPoints;
  c1_b_b = (c1_d < 1.0);
  if (c1_b_b) {
    c1_i = -1;
  } else {
    if (c1_d != (real_T)(int32_T)muDoubleScalarFloor(c1_d)) {
      emlrtIntegerCheckR2012b(c1_d, &c1_ec_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i1 = (int32_T)c1_d;
    if ((c1_i1 < 1) || (c1_i1 > 16000000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i1, 1, 16000000, &c1_ud_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i = c1_i1 - 1;
  }

  c1_i2 = c1_val->size[0] * c1_val->size[1];
  c1_val->size[0] = c1_i + 1;
  c1_val->size[1] = 2;
  c1_st.site = &c1_oh_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_val, c1_i2,
    &c1_pc_emlrtRTEI);
  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    c1_loop_ub = c1_i;
    for (c1_i4 = 0; c1_i4 <= c1_loop_ub; c1_i4++) {
      c1_val->data[c1_i4 + c1_val->size[0] * c1_i3] = c1_obj->PathXY[c1_i4 +
        16000000 * c1_i3];
    }
  }

  c1_b1 = (c1_val->size[0] == 0);
  if (c1_b1) {
    c1_i5 = c1_val->size[0] * c1_val->size[1];
    c1_val->size[0] = 1;
    c1_val->size[1] = 2;
    c1_st.site = &c1_nh_emlrtRSI;
    c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_val, c1_i5,
      &c1_qc_emlrtRTEI);
    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_val->data[c1_val->size[0] * c1_i6] = c1_obj->PathXY[16000000 * c1_i6];
    }
  }
}

static void c1_b_MapInterface_grid2worldImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_worldXY)
{
  c1_emxArray_real_T *c1_b_gridInd;
  c1_emxArray_real_T *c1_localXY;
  emlrtStack c1_st;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_loop_ub;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_b_gridInd, 2, &c1_dc_emlrtRTEI);
  c1_i = c1_b_gridInd->size[0] * c1_b_gridInd->size[1];
  c1_b_gridInd->size[0] = c1_gridInd->size[0];
  c1_b_gridInd->size[1] = c1_gridInd->size[1];
  c1_st.site = &c1_sg_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_b_gridInd, c1_i,
    &c1_dc_emlrtRTEI);
  c1_loop_ub = c1_gridInd->size[0] * c1_gridInd->size[1] - 1;
  for (c1_i1 = 0; c1_i1 <= c1_loop_ub; c1_i1++) {
    c1_b_gridInd->data[c1_i1] = c1_gridInd->data[c1_i1];
  }

  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_localXY, 2, &c1_ec_emlrtRTEI);
  c1_st.site = &c1_sg_emlrtRSI;
  c1_b_MapInterface_grid2localImpl(chartInstance, &c1_st, c1_obj, c1_b_gridInd,
    c1_localXY);
  c1_emxFree_real_T(chartInstance, &c1_b_gridInd);
  c1_st.site = &c1_tg_emlrtRSI;
  c1_MapInterface_local2worldImpl(chartInstance, &c1_st, c1_obj, c1_localXY,
    c1_worldXY);
  c1_emxFree_real_T(chartInstance, &c1_localXY);
}

static void c1_b_MapInterface_grid2localImpl(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_binaryOccupancyMap *c1_obj,
  c1_emxArray_real_T *c1_gridInd, c1_emxArray_real_T *c1_localXY)
{
  c1_cell_wrap_34 c1_reshapes[2];
  c1_emxArray_real_T *c1_b_varargin_2;
  c1_emxArray_real_T *c1_c_varargin_1;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  real_T c1_gOrig[2];
  real_T c1_xlimit[2];
  real_T c1_ylimit[2];
  real_T c1_b_xlimit;
  real_T c1_b_ylimit;
  int32_T c1_sizes[2];
  int32_T c1_b_loop_ub;
  int32_T c1_c_loop_ub;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_expected;
  int32_T c1_f_loop_ub;
  int32_T c1_g_loop_ub;
  int32_T c1_h_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i_loop_ub;
  int32_T c1_loop_ub;
  int32_T c1_result;
  boolean_T c1_b_b;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_gOrig[c1_i] = c1_obj->SharedProperties.GridOriginInLocal[c1_i];
  }

  c1_xlimit[0] = c1_gOrig[0];
  c1_ylimit[0] = c1_gOrig[1];
  c1_i1 = c1_gridInd->size[1];
  c1_i2 = 2;
  if ((c1_i2 < 1) || (c1_i2 > c1_i1)) {
    emlrtDynamicBoundsCheckR2012b(c1_i2, 1, c1_i1, &c1_vd_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_i3 = c1_gridInd->size[1];
  c1_i4 = 1;
  if ((c1_i4 < 1) || (c1_i4 > c1_i3)) {
    emlrtDynamicBoundsCheckR2012b(c1_i4, 1, c1_i3, &c1_wd_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_st.site = &c1_ug_emlrtRSI;
  c1_b_xlimit = c1_xlimit[0];
  c1_emxInit_real_T(chartInstance, &c1_st, &c1_c_varargin_1, 1, &c1_fc_emlrtRTEI);
  c1_i5 = c1_c_varargin_1->size[0];
  c1_c_varargin_1->size[0] = c1_gridInd->size[0];
  c1_b_st.site = &c1_ug_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_c_varargin_1, c1_i5,
    &c1_fc_emlrtRTEI);
  c1_loop_ub = c1_gridInd->size[0] - 1;
  for (c1_i6 = 0; c1_i6 <= c1_loop_ub; c1_i6++) {
    c1_c_varargin_1->data[c1_i6] = c1_b_xlimit + (c1_gridInd->data[c1_i6 +
      c1_gridInd->size[0]] - 1.0) / c1_b_mapScalingFactor;
  }

  c1_b_ylimit = c1_ylimit[0];
  c1_emxInit_real_T(chartInstance, &c1_st, &c1_b_varargin_2, 1, &c1_gc_emlrtRTEI);
  c1_i7 = c1_b_varargin_2->size[0];
  c1_b_varargin_2->size[0] = c1_gridInd->size[0];
  c1_b_st.site = &c1_hh_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_b_varargin_2, c1_i7,
    &c1_gc_emlrtRTEI);
  c1_b_loop_ub = c1_gridInd->size[0] - 1;
  for (c1_i8 = 0; c1_i8 <= c1_b_loop_ub; c1_i8++) {
    c1_b_varargin_2->data[c1_i8] = c1_b_ylimit + (4000.0 - c1_gridInd->
      data[c1_i8]) / c1_b_mapScalingFactor;
  }

  c1_b_st.site = &c1_vg_emlrtRSI;
  c1_result = c1_c_varargin_1->size[0];
  c1_sizes[0] = c1_result;
  c1_c_st.site = &c1_wg_emlrtRSI;
  c1_expected = c1_sizes[0];
  if (c1_c_varargin_1->size[0] == c1_expected) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c1_c_st, &c1_w_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
  }

  if (c1_b_varargin_2->size[0] == c1_expected) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv10, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c1_c_st, &c1_w_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 1U, 14, c1_f_y)));
  }

  c1_emxInitMatrix_cell_wrap_34(chartInstance, &c1_b_st, c1_reshapes,
    &c1_lc_emlrtRTEI);
  c1_i9 = c1_reshapes[0].f1->size[0];
  c1_reshapes[0].f1->size[0] = c1_c_varargin_1->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_reshapes[0].f1, c1_i9,
    &c1_hc_emlrtRTEI);
  c1_c_loop_ub = c1_c_varargin_1->size[0] - 1;
  for (c1_i10 = 0; c1_i10 <= c1_c_loop_ub; c1_i10++) {
    c1_reshapes[0].f1->data[c1_i10] = c1_c_varargin_1->data[c1_i10];
  }

  c1_i11 = c1_reshapes[1].f1->size[0];
  c1_reshapes[1].f1->size[0] = c1_b_varargin_2->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_reshapes[1].f1, c1_i11,
    &c1_hc_emlrtRTEI);
  c1_d_loop_ub = c1_b_varargin_2->size[0] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_d_loop_ub; c1_i12++) {
    c1_reshapes[1].f1->data[c1_i12] = c1_b_varargin_2->data[c1_i12];
  }

  c1_i13 = c1_c_varargin_1->size[0];
  c1_c_varargin_1->size[0] = c1_reshapes[0].f1->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_c_varargin_1, c1_i13,
    &c1_ic_emlrtRTEI);
  c1_e_loop_ub = c1_reshapes[0].f1->size[0] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_e_loop_ub; c1_i14++) {
    c1_c_varargin_1->data[c1_i14] = c1_reshapes[0].f1->data[c1_i14];
  }

  c1_i15 = c1_b_varargin_2->size[0];
  c1_b_varargin_2->size[0] = c1_reshapes[1].f1->size[0];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_b_varargin_2, c1_i15,
    &c1_ic_emlrtRTEI);
  c1_f_loop_ub = c1_reshapes[1].f1->size[0] - 1;
  for (c1_i16 = 0; c1_i16 <= c1_f_loop_ub; c1_i16++) {
    c1_b_varargin_2->data[c1_i16] = c1_reshapes[1].f1->data[c1_i16];
  }

  c1_emxFreeMatrix_cell_wrap_34(chartInstance, c1_reshapes);
  c1_i17 = c1_localXY->size[0] * c1_localXY->size[1];
  c1_localXY->size[0] = c1_c_varargin_1->size[0];
  c1_localXY->size[1] = 2;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_b_st, c1_localXY, c1_i17,
    &c1_jc_emlrtRTEI);
  c1_g_loop_ub = c1_c_varargin_1->size[0] - 1;
  for (c1_i18 = 0; c1_i18 <= c1_g_loop_ub; c1_i18++) {
    c1_localXY->data[c1_i18] = c1_c_varargin_1->data[c1_i18];
  }

  c1_emxFree_real_T(chartInstance, &c1_c_varargin_1);
  c1_h_loop_ub = c1_b_varargin_2->size[0] - 1;
  for (c1_i19 = 0; c1_i19 <= c1_h_loop_ub; c1_i19++) {
    c1_localXY->data[c1_i19 + c1_localXY->size[0]] = c1_b_varargin_2->
      data[c1_i19];
  }

  c1_emxFree_real_T(chartInstance, &c1_b_varargin_2);
  c1_i20 = c1_localXY->size[0] << 1;
  c1_i21 = c1_localXY->size[0] * c1_localXY->size[1];
  c1_localXY->size[1] = 2;
  c1_st.site = &c1_ug_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_localXY, c1_i21,
    &c1_kc_emlrtRTEI);
  c1_i22 = c1_i20;
  c1_i_loop_ub = c1_i22 - 1;
  for (c1_i23 = 0; c1_i23 <= c1_i_loop_ub; c1_i23++) {
    c1_localXY->data[c1_i23] += 0.005;
  }
}

static void c1_handle_matlabCodegenDestructor(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_nav_algs_internal_PriorityQueue
  *c1_obj)
{
  c1_nav_algs_internal_PriorityQueue *c1_b_obj;
  (void)chartInstance;
  if (!c1_obj->matlabCodegenIsDeleted) {
    c1_obj->matlabCodegenIsDeleted = true;
    c1_b_obj = c1_obj;
    priorityqueuecodegen_destructPQ(c1_b_obj->PQInternal);
  }
}

const mxArray *sf_c1_aSPPAOAIW_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static void c1_planPath(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, boolean_T c1_c_mapMatrix[16000000], real_T c1_b_startPos[2],
  real_T c1_b_endPos[2], real_T c1_wayPoints[10000])
{
  static char_T c1_b_cv1[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T c1_b_cv[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'g', 'r', 'i',
    'd', '2', 'w', 'o', 'r', 'l', 'd', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  c1_binaryOccupancyMap *c1_obj;
  c1_emxArray_real_T *c1_plan;
  c1_emxArray_real_T *c1_xy;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_l_y = NULL;
  const mxArray *c1_m_y = NULL;
  real_T c1_c_endPos[2];
  real_T c1_c_startPos[2];
  real_T c1_endGridLocation[2];
  real_T c1_startGridLocation[2];
  real_T c1_b_k;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_d;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_j_y;
  real_T c1_numNodes;
  real_T c1_u;
  int32_T c1_tmp_data[5000];
  int32_T c1_iv[2];
  int32_T c1_tmp_size[1];
  int32_T c1_b_itilerow;
  int32_T c1_b_jcol;
  int32_T c1_b_loop_ub;
  int32_T c1_c_varargin_1;
  int32_T c1_d_varargin_1;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_iacol;
  int32_T c1_ibcol;
  int32_T c1_ibmat;
  int32_T c1_itilerow;
  int32_T c1_jcol;
  int32_T c1_k;
  int32_T c1_loop_ub;
  int32_T c1_n;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_b8;
  boolean_T c1_b_b;
  boolean_T c1_b_p;
  boolean_T c1_c_b;
  boolean_T c1_c_p;
  boolean_T c1_d_b;
  boolean_T c1_e_b;
  boolean_T c1_exitg1;
  boolean_T c1_p;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 1);
  c1_st.site = &c1_ah_emlrtRSI;
  for (c1_i = 0; c1_i < 16000000; c1_i++) {
    chartInstance->c1_mapMatrix[c1_i] = c1_c_mapMatrix[c1_i];
  }

  c1_binaryOccupancyMap_binaryOccupancyMap(chartInstance,
    &chartInstance->c1_b_map, chartInstance->c1_mapMatrix);
  c1_st.site = &c1_bh_emlrtRSI;
  c1_MapInterface_set_LocalOriginInWorld(chartInstance, &chartInstance->c1_b_map);
  c1_st.site = &c1_ch_emlrtRSI;
  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_c_startPos[c1_i1] = c1_b_startPos[c1_i1];
  }

  c1_MapInterface_world2grid(chartInstance, &chartInstance->c1_b_map,
    c1_c_startPos, c1_startGridLocation);
  c1_st.site = &c1_dh_emlrtRSI;
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_c_endPos[c1_i2] = c1_b_endPos[c1_i2];
  }

  c1_MapInterface_world2grid(chartInstance, &chartInstance->c1_b_map,
    c1_c_endPos, c1_endGridLocation);
  c1_st.site = &c1_eh_emlrtRSI;
  c1_plannerAStarGrid_plannerAStarGrid(chartInstance, &c1_st,
    &chartInstance->c1_planner, &chartInstance->c1_b_map);
  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_plan, 2, &c1_sc_emlrtRTEI);
  c1_st.site = &c1_fh_emlrtRSI;
  c1_plannerAStarGrid_plan(chartInstance, &c1_st, &chartInstance->c1_planner,
    c1_startGridLocation, c1_endGridLocation, c1_plan);
  c1_st.site = &c1_gh_emlrtRSI;
  c1_obj = &chartInstance->c1_b_map;
  c1_b_st.site = &c1_qg_emlrtRSI;
  c1_c_st.site = &c1_pc_emlrtRSI;
  c1_p = true;
  c1_d = (real_T)(c1_plan->size[0] * c1_plan->size[1]);
  c1_i3 = (int32_T)c1_d - 1;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k <= c1_i3)) {
    c1_b_k = (real_T)c1_k + 1.0;
    c1_b_x = c1_plan->data[(int32_T)c1_b_k - 1];
    c1_c_x = c1_b_x;
    c1_d_x = c1_c_x;
    c1_c_b = muDoubleScalarIsInf(c1_d_x);
    c1_b1 = !c1_c_b;
    c1_e_x = c1_c_x;
    c1_d_b = muDoubleScalarIsNaN(c1_e_x);
    c1_b4 = !c1_d_b;
    c1_e_b = (c1_b1 && c1_b4);
    if (c1_e_b) {
      c1_f_x = c1_b_x;
      c1_g_x = c1_f_x;
      c1_j_y = c1_g_x;
      c1_j_y = muDoubleScalarFloor(c1_j_y);
      if (c1_j_y == c1_b_x) {
        c1_b_p = true;
      } else {
        c1_b_p = false;
      }
    } else {
      c1_b_p = false;
    }

    c1_c_p = c1_b_p;
    if (c1_c_p) {
      c1_k++;
    } else {
      c1_p = false;
      c1_exitg1 = true;
    }
  }

  if (c1_p) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv9, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv8, 10, 0U, 1U, 0U, 2, 1, 20),
                  false);
    sf_mex_call(&c1_c_st, &c1_o_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 2U, 14, c1_d_y, 14, c1_e_y)));
  }

  c1_c_st.site = &c1_pc_emlrtRSI;
  c1_b2 = (c1_plan->size[0] == 0);
  c1_b3 = (c1_plan->size[1] == 0);
  if (!((!c1_b2) && (!c1_b3))) {
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv6, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv7, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c1_i_y = NULL;
    sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_cv8, 10, 0U, 1U, 0U, 2, 1, 20),
                  false);
    sf_mex_call(&c1_c_st, &c1_v_emlrtMCI, "error", 0U, 2U, 14, c1_f_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 2U, 14, c1_g_y, 14, c1_i_y)));
  }

  c1_c_st.site = &c1_pc_emlrtRSI;
  if (!((real_T)c1_plan->size[1] == 2.0)) {
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c1_k_y = NULL;
    sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c1_l_y = NULL;
    sf_mex_assign(&c1_l_y, sf_mex_create("y", c1_cv8, 10, 0U, 1U, 0U, 2, 1, 20),
                  false);
    c1_u = 2.0;
    c1_m_y = NULL;
    sf_mex_assign(&c1_m_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c1_c_st, &c1_x_emlrtMCI, "error", 0U, 2U, 14, c1_h_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 3U, 14, c1_k_y, 14, c1_l_y, 14, c1_m_y)));
  }

  c1_emxInit_real_T1(chartInstance, &c1_st, &c1_xy, 2, &c1_tc_emlrtRTEI);
  c1_b_st.site = &c1_rg_emlrtRSI;
  c1_b_MapInterface_grid2worldImpl(chartInstance, &c1_b_st, c1_obj, c1_plan,
    c1_xy);
  c1_emxFree_real_T(chartInstance, &c1_plan);
  for (c1_jcol = 0; c1_jcol < 2; c1_jcol++) {
    c1_b_jcol = c1_jcol;
    c1_iacol = c1_b_jcol;
    c1_ibmat = c1_b_jcol * 5000 - 1;
    for (c1_itilerow = 0; c1_itilerow < 5000; c1_itilerow++) {
      c1_b_itilerow = c1_itilerow;
      c1_ibcol = c1_ibmat + c1_b_itilerow;
      c1_wayPoints[c1_ibcol + 1] = c1_b_endPos[c1_iacol];
    }
  }

  c1_c_varargin_1 = c1_xy->size[0];
  c1_d_varargin_1 = c1_c_varargin_1;
  if (c1_d_varargin_1 == 0) {
    c1_n = 0;
  } else if (c1_d_varargin_1 > 2) {
    c1_n = c1_d_varargin_1;
  } else {
    c1_n = 2;
  }

  c1_numNodes = (real_T)c1_n;
  c1_b5 = (c1_numNodes < 1.0);
  c1_b6 = c1_b5;
  c1_b7 = false;
  c1_b8 = (c1_b6 || c1_b7);
  if (c1_b8) {
    c1_i4 = 1;
    c1_i5 = 0;
  } else {
    c1_i4 = 1;
    if (c1_numNodes != (real_T)(int32_T)muDoubleScalarFloor(c1_numNodes)) {
      emlrtIntegerCheckR2012b(c1_numNodes, &c1_fc_emlrtDCI, (emlrtConstCTX)c1_sp);
    }

    c1_i6 = (int32_T)c1_numNodes;
    if ((c1_i6 < 1) || (c1_i6 > 5000)) {
      emlrtDynamicBoundsCheckR2012b(c1_i6, 1, 5000, &c1_xd_emlrtBCI,
        (emlrtConstCTX)c1_sp);
    }

    c1_i5 = c1_i6;
  }

  c1_tmp_size[0] = (c1_i5 - c1_i4) + 1;
  c1_loop_ub = c1_i5 - c1_i4;
  for (c1_i7 = 0; c1_i7 <= c1_loop_ub; c1_i7++) {
    c1_tmp_data[c1_i7] = (c1_i4 + c1_i7) - 1;
  }

  c1_iv[0] = c1_tmp_size[0];
  c1_iv[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&c1_iv[0], 2, c1_xy->size, 2, &c1_k_emlrtECI,
    (void *)c1_sp);
  for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
    c1_b_loop_ub = c1_xy->size[0] - 1;
    for (c1_i9 = 0; c1_i9 <= c1_b_loop_ub; c1_i9++) {
      c1_wayPoints[c1_tmp_data[c1_i9] + 5000 * c1_i8] = c1_xy->data[c1_i9 +
        c1_xy->size[0] * c1_i8];
    }
  }

  c1_emxFree_real_T(chartInstance, &c1_xy);
}

static void c1_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_a__output_of_sprintf_, const char_T *c1_identifier, char_T
  c1_c_y[23])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_a__output_of_sprintf_),
                        &c1_thisId, c1_c_y);
  sf_mex_destroy(&c1_a__output_of_sprintf_);
}

static void c1_b_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, char_T c1_c_y[23])
{
  int32_T c1_i;
  char_T c1_b_cv[23];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_b_cv, 1, 10, 0U, 1, 0U, 2, 1,
                23);
  for (c1_i = 0; c1_i < 23; c1_i++) {
    c1_c_y[c1_i] = c1_b_cv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_c_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_waypoints, const char_T *c1_identifier, real_T c1_c_y
  [10000])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_waypoints), &c1_thisId,
                        c1_c_y);
  sf_mex_destroy(&c1_b_waypoints);
}

static void c1_d_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_c_y
  [10000])
{
  real_T c1_c_dv[10000];
  int32_T c1_i;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_c_dv, 1, 0, 0U, 1, 0U, 2, 5000,
                2);
  for (c1_i = 0; c1_i < 10000; c1_i++) {
    c1_c_y[c1_i] = c1_c_dv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_e_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_prevEndPos, const char_T *c1_identifier, boolean_T
  *c1_svPtr, real_T c1_c_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_prevEndPos), &c1_thisId,
                        c1_svPtr, c1_c_y);
  sf_mex_destroy(&c1_b_prevEndPos);
}

static void c1_f_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr, real_T c1_c_y[2])
{
  real_T c1_c_dv[2];
  int32_T c1_i;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_c_dv, 1, 0, 0U, 1, 0U, 2, 1,
                  2);
    for (c1_i = 0; c1_i < 2; c1_i++) {
      c1_c_y[c1_i] = c1_c_dv[c1_i];
    }
  }

  sf_mex_destroy(&c1_u);
}

static void c1_g_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_waypointsInternal, const char_T *c1_identifier, boolean_T *
  c1_svPtr, real_T c1_c_y[10000])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_waypointsInternal),
                        &c1_thisId, c1_svPtr, c1_c_y);
  sf_mex_destroy(&c1_b_waypointsInternal);
}

static void c1_h_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr, real_T c1_c_y[10000])
{
  real_T c1_c_dv[10000];
  int32_T c1_i;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_c_dv, 1, 0, 0U, 1, 0U, 2,
                  5000, 2);
    for (c1_i = 0; c1_i < 10000; c1_i++) {
      c1_c_y[c1_i] = c1_c_dv[c1_i];
    }
  }

  sf_mex_destroy(&c1_u);
}

static uint8_T c1_i_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_b_is_active_c1_aSPPAOAIW, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_c_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_c_y = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_aSPPAOAIW), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_aSPPAOAIW);
  return c1_c_y;
}

static uint8_T c1_j_emlrt_marshallIn(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_c_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_c_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_c_y;
}

static void c1_slStringInitializeDynamicBuffers(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_chart_data_browse_helper(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 4U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_startPos,
      0, 0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 6U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_endPos,
      0, 0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 7U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_waypoints, 0, 0U, 1U, 0U, 2, 5000, 2), false);
    break;

   case 12U:
    *c1_isValueTooBig = 1U;
    break;

   case 13U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      &chartInstance->c1_mapScalingFactor, 0, 0U, 0U, 0U, 0), false);
    break;
  }
}

static const mxArray *c1_sprintf(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  const mxArray *c1_b_m = NULL;
  (void)chartInstance;
  c1_b_m = NULL;
  sf_mex_assign(&c1_b_m, sf_mex_call(c1_sp, NULL, "sprintf", 1U, 2U, 14,
    sf_mex_dup(c1_input0), 14, sf_mex_dup(c1_input1)), false);
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
  return c1_b_m;
}

static const mxArray *c1_feval(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  const mxArray *c1_b_m = NULL;
  (void)chartInstance;
  c1_b_m = NULL;
  sf_mex_assign(&c1_b_m, sf_mex_call(c1_sp, NULL, "feval", 1U, 2U, 14,
    sf_mex_dup(c1_input0), 14, sf_mex_dup(c1_input1)), false);
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
  return c1_b_m;
}

static void c1_b_feval(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  (void)chartInstance;
  sf_mex_call(c1_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c1_input0), 14,
              sf_mex_dup(c1_input1));
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
}

static void c1_b_circshift(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, boolean_T c1_a[16000000], real_T c1_p[2])
{
  static char_T c1_b_cv[40] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'c', 'i', 'r', 'c', 's', 'h', 'i', 'f', 't', '_', 'I',
    'n', 'v', 'a', 'l', 'i', 'd', 'S', 'h', 'i', 'f', 't', 'T', 'y', 'p', 'e' };

  static char_T c1_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_st;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  real_T c1_b_k;
  real_T c1_b_p;
  real_T c1_d_k;
  int32_T c1_absp[2];
  int32_T c1_b_a;
  int32_T c1_b_dim;
  int32_T c1_b_i;
  int32_T c1_b_i1;
  int32_T c1_b_j;
  int32_T c1_b_ns;
  int32_T c1_b_pagesize;
  int32_T c1_b_stride;
  int32_T c1_b_x;
  int32_T c1_c_b;
  int32_T c1_c_i;
  int32_T c1_c_k;
  int32_T c1_c_x;
  int32_T c1_d_b;
  int32_T c1_dim;
  int32_T c1_e_k;
  int32_T c1_f_k;
  int32_T c1_g_k;
  int32_T c1_h_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i_k;
  int32_T c1_intp;
  int32_T c1_j;
  int32_T c1_j_k;
  int32_T c1_k;
  int32_T c1_k_k;
  int32_T c1_npages;
  int32_T c1_ns;
  int32_T c1_pageroot;
  int32_T c1_pagesize;
  int32_T c1_pk;
  int32_T c1_stride;
  int32_T c1_u0;
  boolean_T c1_buffer[2000];
  boolean_T c1_b_shiftright[2];
  boolean_T c1_b1;
  boolean_T c1_b_b;
  boolean_T c1_exitg1;
  boolean_T c1_overflow;
  boolean_T c1_pok;
  boolean_T c1_shiftright;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  c1_pok = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 2)) {
    c1_b_k = (real_T)c1_k + 1.0;
    c1_pk = (int32_T)c1_p[(int32_T)c1_b_k - 1];
    if (((real_T)c1_pk != c1_p[(int32_T)c1_b_k - 1]) || (c1_pk == MIN_int32_T))
    {
      c1_pok = false;
      c1_exitg1 = true;
    } else {
      c1_k++;
    }
  }

  if (c1_pok) {
    c1_b_b = true;
  } else {
    c1_b_b = false;
  }

  if (!c1_b_b) {
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 40),
                  false);
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(c1_sp, &c1_d_emlrtMCI, "error", 0U, 2U, 14, c1_c_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 3U, 14, c1_d_y, 14, c1_e_y, 14, c1_f_y)));
  }

  c1_st.site = &c1_yb_emlrtRSI;
  for (c1_c_k = 0; c1_c_k < 2; c1_c_k++) {
    c1_d_k = (real_T)c1_c_k + 1.0;
    c1_b_p = c1_p[(int32_T)c1_d_k - 1];
    if (c1_b_p < 0.0) {
      c1_intp = (int32_T)c1_b_p;
      c1_i = -c1_intp;
      c1_b1 = false;
    } else {
      c1_i = (int32_T)c1_b_p;
      c1_b1 = true;
    }

    if (c1_i > 4000) {
      c1_b_x = c1_i;
      c1_b_a = c1_b_x;
      c1_c_x = c1_b_a;
      c1_u0 = c1_c_x;
      c1_i = c1_u0 - 4000 * c1_div_s32_ndbzs(chartInstance, c1_u0, 4000, 0, 0U,
        0, 0);
    }

    if (c1_i > 2000) {
      c1_i = 4000 - c1_i;
      c1_b1 = !c1_b1;
    }

    c1_absp[(int32_T)c1_d_k - 1] = c1_i;
    c1_b_shiftright[(int32_T)c1_d_k - 1] = c1_b1;
  }

  c1_stride = 1;
  for (c1_dim = 0; c1_dim < 2; c1_dim++) {
    c1_b_dim = c1_dim;
    c1_ns = c1_absp[c1_b_dim];
    c1_pagesize = c1_stride * 4000;
    c1_b_st.site = &c1_ac_emlrtRSI;
    c1_b_ns = c1_ns;
    c1_shiftright = c1_b_shiftright[c1_b_dim];
    c1_b_stride = c1_stride;
    c1_npages = -3999 * c1_b_dim + 4000;
    c1_b_pagesize = c1_pagesize;
    if (c1_b_ns > 0) {
      c1_c_st.site = &c1_hc_emlrtRSI;
      c1_i1 = c1_npages - 1;
      for (c1_b_i = 0; c1_b_i <= c1_i1; c1_b_i++) {
        c1_c_i = c1_b_i;
        c1_pageroot = c1_c_i * c1_b_pagesize;
        c1_c_st.site = &c1_gc_emlrtRSI;
        c1_c_b = c1_b_stride;
        c1_d_b = c1_c_b;
        if (c1_d_b < 1) {
          c1_overflow = false;
        } else {
          c1_overflow = (c1_d_b > 2147483646);
        }

        if (c1_overflow) {
          c1_d_st.site = &c1_ic_emlrtRSI;
          c1_check_forloop_overflow_error(chartInstance, &c1_d_st);
        }

        for (c1_j = 0; c1_j < c1_b_stride; c1_j++) {
          c1_b_j = c1_j;
          c1_b_i1 = c1_pageroot + c1_b_j;
          if (c1_shiftright) {
            c1_c_st.site = &c1_fc_emlrtRSI;
            c1_i3 = c1_b_ns - 1;
            for (c1_f_k = 0; c1_f_k <= c1_i3; c1_f_k++) {
              c1_g_k = c1_f_k;
              c1_buffer[c1_g_k] = c1_a[c1_b_i1 + ((c1_g_k - c1_b_ns) + 4000) *
                c1_b_stride];
            }

            c1_i5 = c1_b_ns;
            for (c1_h_k = 4000; c1_h_k >= c1_i5 + 1; c1_h_k--) {
              c1_a[c1_b_i1 + (c1_h_k - 1) * c1_b_stride] = c1_a[c1_b_i1 +
                ((c1_h_k - c1_b_ns) - 1) * c1_b_stride];
            }

            c1_c_st.site = &c1_ec_emlrtRSI;
            c1_i7 = c1_b_ns - 1;
            for (c1_j_k = 0; c1_j_k <= c1_i7; c1_j_k++) {
              c1_g_k = c1_j_k;
              c1_a[c1_b_i1 + c1_g_k * c1_b_stride] = c1_buffer[c1_g_k];
            }
          } else {
            c1_c_st.site = &c1_dc_emlrtRSI;
            c1_i2 = c1_b_ns - 1;
            for (c1_e_k = 0; c1_e_k <= c1_i2; c1_e_k++) {
              c1_g_k = c1_e_k;
              c1_buffer[c1_g_k] = c1_a[c1_b_i1 + c1_g_k * c1_b_stride];
            }

            c1_i4 = 4000 - c1_b_ns;
            c1_c_st.site = &c1_cc_emlrtRSI;
            c1_i6 = c1_i4 - 1;
            for (c1_i_k = 0; c1_i_k <= c1_i6; c1_i_k++) {
              c1_g_k = c1_i_k;
              c1_a[c1_b_i1 + c1_g_k * c1_b_stride] = c1_a[c1_b_i1 + (c1_g_k +
                c1_b_ns) * c1_b_stride];
            }

            c1_c_st.site = &c1_bc_emlrtRSI;
            c1_i8 = c1_b_ns - 1;
            for (c1_k_k = 0; c1_k_k <= c1_i8; c1_k_k++) {
              c1_g_k = c1_k_k;
              c1_a[c1_b_i1 + ((c1_g_k - c1_b_ns) + 4000) * c1_b_stride] =
                c1_buffer[c1_g_k];
            }
          }
        }
      }
    }

    c1_stride = c1_pagesize;
  }
}

static void c1_emxEnsureCapacity_real_T(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c1_newNumel,
      (size_t)(uint32_T)c1_emxArray->size[c1_i], c1_srcLocation, (void *)c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof(real_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(real_T) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = (real_T *)c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxEnsureCapacity_int32_T(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_int32_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c1_newNumel,
      (size_t)(uint32_T)c1_emxArray->size[c1_i], c1_srcLocation, (void *)c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof(int32_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(int32_T) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = (int32_T *)c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxEnsureCapacity_real_T1(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c1_newNumel,
      (size_t)(uint32_T)c1_emxArray->size[c1_i], c1_srcLocation, (void *)c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof(real_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(real_T) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = (real_T *)c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxInit_real_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray, int32_T c1_numDimensions,
  const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_real_T *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_real_T *)emlrtMallocMex(sizeof(c1_emxArray_real_T));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (real_T *)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxInit_real_T1(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray, int32_T
  c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_real_T *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_real_T *)emlrtMallocMex(sizeof(c1_emxArray_real_T));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (real_T *)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxInit_int32_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_emxArray_int32_T **c1_pEmxArray, int32_T
  c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_int32_T *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c1_emxArray_int32_T));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (int32_T *)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxFree_real_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  c1_emxArray_real_T **c1_pEmxArray)
{
  (void)chartInstance;
  if (*c1_pEmxArray != (c1_emxArray_real_T *)NULL) {
    if (((*c1_pEmxArray)->data != (real_T *)NULL) && (*c1_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c1_pEmxArray)->data);
    }

    emlrtFreeMex((*c1_pEmxArray)->size);
    emlrtFreeMex(*c1_pEmxArray);
    *c1_pEmxArray = (c1_emxArray_real_T *)NULL;
  }
}

static void c1_emxFree_int32_T(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  c1_emxArray_int32_T **c1_pEmxArray)
{
  (void)chartInstance;
  if (*c1_pEmxArray != (c1_emxArray_int32_T *)NULL) {
    if (((*c1_pEmxArray)->data != (int32_T *)NULL) && (*c1_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c1_pEmxArray)->data);
    }

    emlrtFreeMex((*c1_pEmxArray)->size);
    emlrtFreeMex(*c1_pEmxArray);
    *c1_pEmxArray = (c1_emxArray_int32_T *)NULL;
  }
}

static void c1_emxInitMatrix_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_cell_wrap_34 c1_pMatrix[2], const
  emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_emxInitStruct_cell_wrap_34(chartInstance, c1_sp, &c1_pMatrix[c1_i],
      c1_srcLocation);
  }
}

static void c1_emxInitStruct_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_cell_wrap_34 *c1_pStruct, const
  emlrtRTEInfo *c1_srcLocation)
{
  c1_emxInit_real_T(chartInstance, c1_sp, &c1_pStruct->f1, 1, c1_srcLocation);
}

static void c1_emxFreeMatrix_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_cell_wrap_34 c1_pMatrix[2])
{
  int32_T c1_i;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_emxFreeStruct_cell_wrap_34(chartInstance, &c1_pMatrix[c1_i]);
  }
}

static void c1_emxFreeStruct_cell_wrap_34(SFc1_aSPPAOAIWInstanceStruct
  *chartInstance, c1_cell_wrap_34 *c1_pStruct)
{
  c1_emxFree_real_T(chartInstance, &c1_pStruct->f1);
}

static int32_T c1_div_nzp_s32(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  int32_T c1_numerator, int32_T c1_denominator, int32_T c1_EMLOvCount_src_loc,
  uint32_T c1_ssid_src_loc, int32_T c1_offset_src_loc, int32_T c1_length_src_loc)
{
  int32_T c1_quotient;
  uint32_T c1_absDenominator;
  uint32_T c1_absNumerator;
  uint32_T c1_tempAbsQuotient;
  boolean_T c1_quotientNeedsNegation;
  (void)chartInstance;
  (void)c1_EMLOvCount_src_loc;
  (void)c1_ssid_src_loc;
  (void)c1_offset_src_loc;
  (void)c1_length_src_loc;
  if (c1_numerator < 0) {
    c1_absNumerator = ~(uint32_T)c1_numerator + 1U;
  } else {
    c1_absNumerator = (uint32_T)c1_numerator;
  }

  if (c1_denominator < 0) {
    c1_absDenominator = ~(uint32_T)c1_denominator + 1U;
  } else {
    c1_absDenominator = (uint32_T)c1_denominator;
  }

  c1_quotientNeedsNegation = ((c1_numerator < 0) != (c1_denominator < 0));
  c1_tempAbsQuotient = c1_absNumerator / c1_absDenominator;
  if (c1_quotientNeedsNegation) {
    c1_quotient = -(int32_T)c1_tempAbsQuotient;
  } else {
    c1_quotient = (int32_T)c1_tempAbsQuotient;
  }

  return c1_quotient;
}

static int32_T c1_div_s32_ndbzs(SFc1_aSPPAOAIWInstanceStruct *chartInstance,
  int32_T c1_numerator, int32_T c1_denominator, int32_T c1_EMLOvCount_src_loc,
  uint32_T c1_ssid_src_loc, int32_T c1_offset_src_loc, int32_T c1_length_src_loc)
{
  int32_T c1_quotient;
  uint32_T c1_absDenominator;
  uint32_T c1_absNumerator;
  uint32_T c1_tempAbsQuotient;
  boolean_T c1_quotientNeedsNegation;
  (void)chartInstance;
  (void)c1_EMLOvCount_src_loc;
  (void)c1_ssid_src_loc;
  (void)c1_offset_src_loc;
  (void)c1_length_src_loc;
  if (c1_denominator == 0) {
    if (c1_numerator >= 0) {
      c1_quotient = MAX_int32_T;
    } else {
      c1_quotient = MIN_int32_T;
    }
  } else {
    if (c1_numerator < 0) {
      c1_absNumerator = ~(uint32_T)c1_numerator + 1U;
    } else {
      c1_absNumerator = (uint32_T)c1_numerator;
    }

    if (c1_denominator < 0) {
      c1_absDenominator = ~(uint32_T)c1_denominator + 1U;
    } else {
      c1_absDenominator = (uint32_T)c1_denominator;
    }

    c1_quotientNeedsNegation = ((c1_numerator < 0) != (c1_denominator < 0));
    c1_tempAbsQuotient = c1_absNumerator / c1_absDenominator;
    if (c1_quotientNeedsNegation) {
      c1_quotient = -(int32_T)c1_tempAbsQuotient;
    } else {
      c1_quotient = (int32_T)c1_tempAbsQuotient;
    }
  }

  return c1_quotient;
}

static void init_dsm_address_info(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_aSPPAOAIWInstanceStruct *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_startPos = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_endPos = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_waypoints = (real_T (*)[10000])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_b_mapMatrix = (boolean_T (*)[16000000])
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_aSPPAOAIW_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1640860084U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2752946184U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(968756500U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(999923639U);
}

mxArray *sf_c1_aSPPAOAIW_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "nav.algs.internal.codegen.PriorityQueue"));
  return(mxcell3p);
}

mxArray *sf_c1_aSPPAOAIW_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString(
    "priorityqueuecodegen_constructPQ");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_aSPPAOAIW_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_aSPPAOAIW(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB+wcbAAEQMHEDMxAABrFA+I5TNCBdngYsrAHFJZUEqSLy4KNkzBUjnJeaC+Ym"
    "lFZ55aflg8y0YEOazYTGfEcl8Tqg4BHywp0y/jANIvwOSfhYs+jmR9AtA+eWJlQX5mXklxVBxPi"
    "SafPcIOFCmH2I/If9wofkHxC8oSi1zzUsJyC9GmHOBAX+8M6LFOxOUD9KTw5DJUIDFPdj8w4TmH"
    "wGYZw4kOkAYyVQJl6ESPzxo8cMDjZ/gksSiEmgMDYr4aYiFxI9DwrCKHw8C8SOIFj+CyOWBZ15J"
    "alFeYg7DIMpHDmGQeGqIGiTxpECXeBJDiycQP7M4PjG5JLMsNT7ZMD4xOCDA0d/RMxzhLwDhNkE"
    "R"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_aSPPAOAIW_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s7usYffeYgIvdJ0cGhNf5sC";
}

static void sf_opaque_initialize_c1_aSPPAOAIW(void *chartInstanceVar)
{
  initialize_params_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*)
    chartInstanceVar);
  initialize_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_aSPPAOAIW(void *chartInstanceVar)
{
  enable_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_aSPPAOAIW(void *chartInstanceVar)
{
  disable_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_aSPPAOAIW(void *chartInstanceVar)
{
  sf_gateway_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_aSPPAOAIW(SimStruct* S)
{
  return get_sim_state_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_aSPPAOAIW(SimStruct* S, const mxArray *st)
{
  set_sim_state_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_aSPPAOAIW(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_aSPPAOAIWInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_aSPPAOAIW_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_aSPPAOAIW(void *chartInstanceVar)
{
  mdl_start_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_aSPPAOAIWInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_aSPPAOAIW(void *chartInstanceVar)
{
  mdl_terminate_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_aSPPAOAIW(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc1_aSPPAOAIW((SFc1_aSPPAOAIWInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_aSPPAOAIW_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [24] = {
    "eNrtWcuO21QYPkmnAwNlNEWibCrokg3StKjAAkEyuZSguUQ4M1UroeGM/Ts+in3snksyQSD1MXi",
    "BvgBP0AUPwJIdO4RYsWTJfxwnk/GEiU9CS1qw5FjH9vffb8chpdYewWMTz9N3CFnH66t4lsnouJ",
    "qtS1Pn6P4a+SRbf/s6IW7sQRe4o32fnRK7g+uoTQWNJLE/OI3gS5BxqBWLeYv7cXEs4z4I4C4SS",
    "GKhrPhKFumQ8V5Tc9dwlvcD5gZOEOvQ20GC1Dvg4fDv+CZatZFjnQlwVRPAU4GIdTdohrR7uRWE",
    "GtQCcHtSR9a2kqAcnRhV5Z4OFUtCaJyC2+JSUbSCnKOvo6iCmjq1M7LRVzpjdBwlIaO8uK0DKh1",
    "IMDoUHCYe/h5ohdYrhHUDKtQOBLQPcpf1Uu4xh0LcmcS3TxinKhaMho0orBlqBfVth6jjHqZEaO",
    "sj1HdHAO0lMePKMiGcJtq5welJCHU40V1Lvg480iYbjhgMQNj516/FfRC0CwfcTubUR43TNCgnu",
    "VQQq1gER1RUXYxdCZ5d3cCkkw7FcIQOkrHCQmriluwI1sfYsK11LZP+C9U6HY2iXy6ETfk2+mAd",
    "VxO+TZfXaBhKO2wnTnahD2HKv04VXQA74m8BlpJ5nRijw1Qby4qlOcNMyLC1mHuseFT2c6i0se1",
    "jkyoAZ5FJA/DQzBPRJ4Tm5ZGWKo5qWHLqu7sF+V3EtrgC4VMXCvcYQZkEFDiNK0u+HpMmkRCNVl",
    "KploUpjHJwISiRvub1QSx6aGPbZnZmK5MJdmjwuliYFaRFroHRfURDXVDmSHYxfzA8DiVWWTu+i",
    "DX5sxDYpW4AnumcLIQ9rLNIoKiLpWn5VdS2z9SwDtIVLCmaSRoLOjZdY6XOMIFD3uPxgDdFHDnZ",
    "5HVJXAFg1aCCM97dwRYuhk0UvpjUAh510upuO+QYO1MV0hMTG/eAYzc0upqpgbqYVQ2OIzIKtAz",
    "WYd/gEMMlkwob9XDU6kd9z8zvFXI2v6/NmN+vTc3vW9navX1MnXa7elBt3R/T2Z6ic63APqBUAE",
    "cu4MhE7vH1vSl8aQZfMnXN89son3//So5fGe+USqULdnojx2cth1vPbPX7kx+eflg9/vHX8pP9X",
    "9787q15/EsX+Jcmdvr+Fbt91ma2vjmelybVuX+hgJl3P58TB2/n4sCs5UdaPvB9eNBt9b0vtt17",
    "wb5/V9ZSer+tXy7v1Zy84/u3zIyGyZvWAuG2vGy/ZtZUj/YRhv7HU/Kuz7HHxlQ8EfLHZ8vhb1a",
    "K5M1Gzl5mPaDDcyP6dBwvLs9WZTl8sTrwWk4fs04E9Bvca8fyjM5PxC5Oy9naYELCSDJDnln6lH",
    "P6bI2VeUorWRf6R+zyovhnVp02/sEttFCZh1bCP4+/Gvmn8vVL5Z959fN6zj/Xp+tBOkLzya5wJ",
    "fxUORr56fHDFfHTrefipxs5P91Iv1UcUzORwvH5yWez4FxxWV+3xZH/cSuBK/0H9Ssy1195hvuB",
    "WTjynHHL6me7X3nR39++pN6S3PtbK6xH/rrovnXV9PrZcs54N1t/OvleWgtY6M34YpM93gXqz3r",
    "6ksT3n5b2G++jG8Z+2R9rDz+o4vA3lGy0jxrfbgvz/8jkkQAqZ38H+zf6yTL7kgHjXjyQ79++c/",
    "fOMv3pLw2LPlI=",
    ""
  };

  static char newstr [1665] = "";
  newstr[0] = '\0';
  for (i = 0; i < 24; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_aSPPAOAIW(SimStruct *S)
{
  const char* newstr = sf_c1_aSPPAOAIW_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3232933354U));
  ssSetChecksum1(S,(3294576950U));
  ssSetChecksum2(S,(1319437030U));
  ssSetChecksum3(S,(360518367U));
}

static void mdlRTW_c1_aSPPAOAIW(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_aSPPAOAIW(SimStruct *S)
{
  SFc1_aSPPAOAIWInstanceStruct *chartInstance;
  chartInstance = (SFc1_aSPPAOAIWInstanceStruct *)utMalloc(sizeof
    (SFc1_aSPPAOAIWInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_aSPPAOAIWInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_aSPPAOAIW;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c1_aSPPAOAIW;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_aSPPAOAIW;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c1_aSPPAOAIW;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_aSPPAOAIW;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_aSPPAOAIW;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_aSPPAOAIW;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_aSPPAOAIW;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_aSPPAOAIW;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c1_aSPPAOAIW;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_aSPPAOAIW;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_aSPPAOAIW;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_aSPPAOAIW(chartInstance);
}

void c1_aSPPAOAIW_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_aSPPAOAIW(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_aSPPAOAIW(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_aSPPAOAIW(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_aSPPAOAIW_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
