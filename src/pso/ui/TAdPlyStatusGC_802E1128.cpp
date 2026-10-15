#include "types.h"

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
extern char ply_status_date_format[];
extern char ply_status_date_format_mdy[];
extern char lbl_8047296C[];
extern s32 current_language;
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
s32 TWindow__close(void *);

s32 get_field_498__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x498); }
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x1b8; }
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x49c); }
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a0); }
void* get_status_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x324; }
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a4); }
void* get_status_sub__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x490; }

    extern int ply_status_chcr_load_afs;
void set_status_param__14TAdPlyStatusGCFii(int a0, int a1) { ply_status_chcr_load_afs = a1; }

    extern int ply_status_gc_instance;
int get_index__14TAdPlyStatusGCFv(void) {  return ply_status_gc_instance; }

    extern int ply_status_index;
void set_status_index__14TAdPlyStatusGCFii(int a0, int a1) { ply_status_index = a1; }

extern s32 TAdPlyStatusGC__window_offset_index;

void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1) {
    TAdPlyStatusGC__window_offset_index = arg1;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x6C));
        *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
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
        switch (current_language) {
        case 0:
            sprintf(buf, ply_status_date_format, date.year, date.month, date.day, get_localized_text_entry(0x1C, wd));
            s = buf;
            w = lbl_805DE8F0 * (f32)calc_text_width(s);
            break;
        default:
            sprintf(buf, ply_status_date_format_mdy, date.month, date.day, date.year, get_localized_text_entry(0x1C, wd));
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
