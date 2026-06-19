#include "types.h"
#include "dolphin/os/OSTime.h"

struct DateStamp {
    u16 year;
    u8 month;
    u8 day;
    u8 hour;
    u8 minute;
    u8 second;
    u8 weekday;
    u8 _pad;
};

int getDateStamp(DateStamp* out) {
    OSCalendarTime cal;
    OSTicksToCalendarTime(OSGetTime(), &cal);
    out->year = cal.year;
    out->month = cal.mon + 1;
    out->day = cal.mday;
    out->hour = cal.hour;
    out->minute = cal.min;
    out->second = cal.sec;
    out->weekday = cal.wday;
    out->_pad = 0;
    return 1;
}
