/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

#include "fdlibm.h"

#ifdef __STDC__
	double log10(double x)
#else
	double log10(x)
	double x;
#endif
{
	return __ieee754_log10(x);
}
