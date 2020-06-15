//
// File          _______ : rh_sir.c
// Description   _______ : Functions to pass information from SIR to RH.
// Project       _______ : DeSIRe
// Creation date _______ : 31/07/19
// Author        _______ : epm@iac.es
//


#include "desire.h"

extern SIRBarklem sirbarklem;
extern SIRconfig sirconfig;


//____________________________________________________________________________
//
//  Method: sirbarklem_()
//
/** Pass SIR lines with Barklem to RH.
 *  @param  nlines number of lines.
 *  @param  anumber array with the atomic numbers.
 *  @param  stage array with the ionization stages.
 *  @param  low array with the low levels.
 *  @param  up array with the up levels.
 *  @param  alpha array with the alpha values.
 *  @param  sigma array with the sigma values.
 *  @param  wave array with the air wavelength values.
 */
//____________________________________________________________________________

void sirbarklem_( int *nlines, int *anumber, int *stage, int *low, int *up,
                  float *alpha, float *sigma, float *wave )
{
   // We supply collisional broadening for some lines from SIR.
   sirbarklem.nlines = *nlines;
   sirbarklem.anumber = anumber;
   sirbarklem.stage = stage;
   sirbarklem.low = low;
   sirbarklem.up = up;
   sirbarklem.alpha = alpha;
   sirbarklem.sigma = sigma;
   sirbarklem.wave = wave;
}


//____________________________________________________________________________
//
//  Method: sirconfig_()
//
/** Pass SIR configuration to RH.
 *  @param  flagv command line verbose flag.
 */
//____________________________________________________________________________

void sirconfig_( int *flagv )
{
   // SIR command line verbose flag.
   sirconfig.flagv = *flagv;
}


//____________________________________________________________________________
