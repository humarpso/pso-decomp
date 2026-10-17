#ifndef PSO_SYSTEM_DATE_H
#define PSO_SYSTEM_DATE_H

#include "types.h"

struct DateStamp;

int getDateStamp(DateStamp *out);
void DateToSeconds(DateStamp *date, int *seconds);

#endif
