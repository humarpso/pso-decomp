#ifndef OS_TIME_H
#define OS_TIME_H
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

#define __OSSystemTime (OSTime*)0x800030D8

#define OSDiffTick(tick1, tick0) ((s32)(tick1) - (s32)(tick0))

typedef s64 OSTime;
typedef u32 OSTick;

OSTime OSGetTime(void);
OSTime __OSGetSystemTime(void);
OSTick OSGetTick(void);

typedef struct OSCalendarTime_s {
  int sec;
  int min;
  int hour;
  int mday;
  int mon;
  int year;
  int wday;
  int yday;

  int msec;
  int usec;
} OSCalendarTime;

OSTime OSCalendarTimeToTicks(OSCalendarTime* td);
void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* td);

#define USEC_MAX     1000
#define MSEC_MAX     1000
#define MONTH_MAX    12
#define WEEK_DAY_MAX 7
#define YEAR_DAY_MAX 365

#define SECS_IN_MIN  60
#define SECS_IN_HOUR (SECS_IN_MIN * 60)
#define SECS_IN_DAY  (SECS_IN_HOUR * 24)
#define SECS_IN_YEAR (SECS_IN_DAY * 365)

#define BIAS 0xB2575

#ifdef __cplusplus
}
#endif
#endif
