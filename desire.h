/* ------- file: -------------------------- desire.h ----------------

       Version:       DeSIRe v1.4
       Author:        epm@iac.es
       Last modified: July 31 2019

       --------------------------                      ----------RH-- */

#ifndef __DESIRE_H__
#define __DESIRE_H__


// 10/10/19 epm: Structure to pass Barklem data from SIR to RH.
typedef struct
{
  int    nlines;
  int   *anumber, *stage, *low, *up;
  float *alpha, *sigma, *wave;
}
SIRBarklem;

// 04/04/20 epm: Structure to pass SIR configuration to RH.
typedef struct
{
  int flagv;
}
SIRconfig;


#endif /* !__DESIRE_H__ */

/* ------- end ---------------------------- desire.h ---------------- */
