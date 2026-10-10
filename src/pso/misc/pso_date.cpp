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
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_801E2B24 { s32 v[12]; };

struct DateStamp_801E2B24 {
    u16 year;
    u8 month;
    u8 day;
    u8 hour;
    u8 min;
    u8 sec;
};

extern "C" {
void render_model_tree__10TObjPlayerFPv(void *arg0);
void bind_motion_blend_channels(void *);
void prepare_ginja_model(void *);
void end_ginja_model_draw();
void draw_ginja_model_lists();
extern void *model_draw_context;
void draw_ginja_model_tree__10TObjPlayerFPvPv(void *arg0, void *arg1);
extern Tbl_801E2B24 lbl_804496D0[];
void DateToSeconds__FP9DateStampPi(DateStamp_801E2B24 *ds, s32 *out);
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

#pragma push
#pragma opt_propagation off
void DateToSeconds__FP9DateStampPi(DateStamp_801E2B24 *ds, s32 *out) {
    s32 tbl[12];
    *(Tbl_801E2B24 *)tbl = *lbl_804496D0;
    s32 y = ds->year - 0x7D0;
    u32 t = y + 2;
    s32 d = (t >> 2) + y * 0x16D;
    if ((t & 3) == 0 && ds->month <= 2) {
        d -= 1;
    }
    d += tbl[ds->month - 1];
    d += ds->day - 1;
    *out = ds->sec + ((ds->min + ((ds->hour + d * 0x18) * 0x3C))) * 0x3C;
}
#pragma pop

void fn_801E2C50(void) {  }
void reset_system(void) { VISetBlack(1); VIFlush(); VIWaitForRetrace(); OSResetSystem(1, 0, 0); }
void system_reset(void) { VISetBlack(1); VIFlush(); VIWaitForRetrace(); OSResetSystem(1, 0, 1); }
void draw_ginja_model_tree__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    bind_motion_blend_channels(arg1);
    void *g = model_draw_context;
    M2C_FIELD(g, void (**)(), 0xC) = draw_ginja_model_lists;
    prepare_ginja_model(g);
    render_model_tree__10TObjPlayerFPv(arg0);
    end_ginja_model_draw();
}

}
