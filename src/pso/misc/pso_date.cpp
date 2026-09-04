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

void DateToSeconds(DateStamp* date, int* out) {
    int cumdays[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int y = date->year - 2000;
    int days = y * 365 + (u32)(y + 2) / 4;
    if (((y + 2) & 3) == 0 && date->month <= 2) {
        days -= 1;
    }
    days += cumdays[date->month - 1];
    days += date->day;
    days -= 1;
    *out = ((days * 24 + date->hour) * 60 + date->minute) * 60 + date->second;
}

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

#include "types.h"

extern "C" {

void fn_801E2C50(void);
void reset_system(void);
void system_reset(void);
int OSResetSystem(int, int, int);
int fn_8037BC54(void);
int fn_8037C8B8(void);
int fn_8037CA40(int);

void fn_801E2C50(void) {  }
void reset_system(void) { fn_8037CA40(1); fn_8037C8B8(); fn_8037BC54(); OSResetSystem(1, 0, 0); }
void system_reset(void) { fn_8037CA40(1); fn_8037C8B8(); fn_8037BC54(); OSResetSystem(1, 0, 1); }

}
