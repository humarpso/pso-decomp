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

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void render_model_tree__10TObjPlayerFPv(void *arg0);
void bind_motion_blend_channels(void *);
void prepare_ginja_model(void *);
void end_ginja_model_draw();
void draw_ginja_model_lists();
extern void *lbl_805D4698;
void TObjPlayer__sub_801E2CCC(void *arg0, void *arg1);
}

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
int VIWaitForRetrace(void);
int VIFlush(void);
int VISetBlack(int);

void fn_801E2C50(void) {  }
void reset_system(void) { VISetBlack(1); VIFlush(); VIWaitForRetrace(); OSResetSystem(1, 0, 0); }
void system_reset(void) { VISetBlack(1); VIFlush(); VIWaitForRetrace(); OSResetSystem(1, 0, 1); }
void TObjPlayer__sub_801E2CCC(void *arg0, void *arg1) {
    bind_motion_blend_channels(arg1);
    void *g = lbl_805D4698;
    M2C_FIELD(g, void (**)(), 0xC) = draw_ginja_model_lists;
    prepare_ginja_model(g);
    render_model_tree__10TObjPlayerFPv(arg0);
    end_ginja_model_draw();
}

}
