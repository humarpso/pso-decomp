#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pt_802E11D4 { f32 x, y; };

struct Date_802E11D4 { u16 year; u8 month; u8 day; u8 hour; u8 min; u8 sec; u8 wday; u32 pad8; };

struct Clock_802E11D4 { u8 pad0[0x1C]; s32 visible; Pt_802E11D4 pos; };

extern "C" {
char *get_localized_text_entry(s32, s32);
u32 calc_text_width(void *);
u32 TWindowSubStatusDisp__sub_80144E9C(void *);
void render_status_disp__23TAdSinglePlyChrSelectGCFPvff(void *, f32, f32);
void getDateStamp__FP9DateStamp(void *);
int sprintf(char *, const char *, ...);
extern char lbl_8047294C[];
extern char lbl_8047295C[];
extern char lbl_8047296C[];
extern s32 lbl_805D5544;
extern const f32 lbl_805DE8E8;
extern const f32 lbl_805DE8EC;
extern const f32 lbl_805DE8F0;
extern const f32 lbl_805DE8F4;
void draw_date_time__23TAdSinglePlyChrSelectGCFPv(Clock_802E11D4 *self);
}

extern "C" {

void TAdPlyStatusGC__sub_802E11BC(void* p);
void TAdPlyStatusGC__sub_802E11C8(void* p);
void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1);
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p);
s32 get_field_498__14TAdPlyStatusGCFPv(void* p);
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p);
int get_index__14TAdPlyStatusGCFv(void);
void* get_status_data__14TAdPlyStatusGCFPv(void* p);
void* get_status_sub__14TAdPlyStatusGCFPv(void* p);
void set_status_index__14TAdPlyStatusGCFii(int a0, int a1);
void set_status_param__14TAdPlyStatusGCFii(int a0, int a1);
M2C_UNK TWindow__close(void *);

s32 get_field_498__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x498); }
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x1b8; }
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x49c); }
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a0); }
void* get_status_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x324; }
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a4); }
void* get_status_sub__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x490; }

    extern int lbl_805D6DAC;
void set_status_param__14TAdPlyStatusGCFii(int a0, int a1) { lbl_805D6DAC = a1; }

    extern int lbl_805D6DA8;
int get_index__14TAdPlyStatusGCFv(void) {  return lbl_805D6DA8; }

    extern int lbl_805D6DB4;
void set_status_index__14TAdPlyStatusGCFii(int a0, int a1) { lbl_805D6DB4 = a1; }

extern s32 TAdPlyStatusGC__data_805D6DB0;

void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1) {
    TAdPlyStatusGC__data_805D6DB0 = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
}

void TAdPlyStatusGC__sub_802E11BC(void* p) { *(s32*)((char*)p + 0x1c) = 0; }
void TAdPlyStatusGC__sub_802E11C8(void* p) { *(s32*)((char*)p + 0x1c) = 1; }
#pragma push
#pragma fp_contract on
void draw_date_time__23TAdSinglePlyChrSelectGCFPv(Clock_802E11D4 *self) {
    char buf[0x24];
    Date_802E11D4 date;
    char *s;
    f32 w;
    s32 wd;
    if (self->visible != 0) {
        Pt_802E11D4 pos = self->pos;
        s = get_localized_text_entry(0x1C, 0xC);
        render_status_disp__23TAdSinglePlyChrSelectGCFPvff(s, -(lbl_805DE8E8 * (f32)calc_text_width(s) - pos.x), pos.y);
        pos.y += lbl_805DE8EC;
        getDateStamp__FP9DateStamp(&date);
        wd = date.wday + 13;
        switch (lbl_805D5544) {
        case 0:
            sprintf(buf, lbl_8047294C, date.year, date.month, date.day, get_localized_text_entry(0x1C, wd));
            s = buf;
            w = lbl_805DE8F0 * (f32)calc_text_width(s);
            break;
        default:
            sprintf(buf, lbl_8047295C, date.month, date.day, date.year, get_localized_text_entry(0x1C, wd));
            s = buf;
            w = lbl_805DE8F0 * (f32)TWindowSubStatusDisp__sub_80144E9C(s);
            break;
        }
        render_status_disp__23TAdSinglePlyChrSelectGCFPvff(s, pos.x + w, pos.y);
        pos.y += lbl_805DE8F4;
        sprintf(buf, lbl_8047296C, date.hour, date.min, date.sec);
        render_status_disp__23TAdSinglePlyChrSelectGCFPvff(buf, -(lbl_805DE8E8 * (f32)calc_text_width(buf) - pos.x), pos.y);
    }
}
#pragma pop

}
