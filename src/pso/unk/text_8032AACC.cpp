#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Pos_8032AACC { f32 x, y; };

struct Plate_8032AACC { u8 data[0x3B4]; };

struct Word_8032AACC { s32 v; };

struct Arg_8032AACC { f32 x, y; u8 pad[8]; };

struct Plate_8032AC24 { u8 data[0x3B4]; };

struct Word_8032AC24 { s32 v; };

struct Arg_8032AC24 { f32 x, y; u8 pad[8]; };

extern "C" {
char *realloc_buffer__17TWindowSubComCardFPv(void *);
s32 calc_text_width(void *);
void render_status_disp__23TAdSinglePlyChrSelectGCFPvff(void *, f32, f32);
void free__11TOBoss4RockFUi(char *);
void fn_8025DE10(s32, Pos_8032AACC *);
void TAdEnterSerialAccessGC__sub_802C4B64(void *, void *, void *, int);
void __dt__19TAdPlyChrSelPlateGCFv(void *, int);
void *__ct__19TAdPlyChrSelPlateGCFv(void *, s32, void *);
s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *);
void *memset(void *, int, u32);
s32 strlen(const char *);
extern u8 lbl_80477210[];
extern f32 lbl_80477218[];
extern f32 lbl_80477220[];
extern s32 tl_clipout;
extern void *lbl_805D6CA0;
extern Word_8032AACC lbl_805DF76C;
extern char lbl_805DF774[4];
void draw_masked_password_field(s32 arg0);
void *__ct__19TAdPlyChrSelPlateGCFv(void *, s32, void *);
void __dt__19TAdPlyChrSelPlateGCFv(void *, int);
void TAdEnterSerialAccessGC__sub_802C4B64(void *, void *, void *, int);
extern u8 lbl_80477200[];
extern const f32 lbl_80477208[];
extern s32 tl_clipout;
extern Word_8032AC24 lbl_805DF768;
void fn_8032AC24(void);
}

extern "C" {

void draw_masked_password_field(s32 arg0) {
    char buf[0x80];
    Plate_8032AACC plate;
    char *str;
    s32 len;
    s32 i;
    char *q;
    if (lbl_805D6CA0 != 0) {
        Arg_8032AACC p1;
        p1.x = lbl_80477218[0];
        p1.y = lbl_80477218[1];
        __ct__19TAdPlyChrSelPlateGCFv(&plate, tl_clipout, &p1);
        Word_8032AACC w = lbl_805DF76C;
        TAdEnterSerialAccessGC__sub_802C4B64(&plate, lbl_80477210, &w, 0);
        str = realloc_buffer__17TWindowSubComCardFPv(lbl_805D6CA0);
        len = strlen(str);
        free__11TOBoss4RockFUi(str);
        memset(buf, 0, 0x80);
        q = buf;
        for (i = 0; i < len; i++) {
            *q++ = '*';
        }
        buf[len] = 0;
        len = calc_text_width(lbl_805DF774);
        render_status_disp__23TAdSinglePlyChrSelectGCFPvff(buf, lbl_80477220[0], lbl_80477220[1]);
        Pos_8032AACC p2;
        p2.x = lbl_80477220[0] + (f32) (len * get_field20_state__22TAdEnterSerialAccessGCFPv(lbl_805D6CA0));
        p2.y = lbl_80477220[1];
        fn_8025DE10(arg0, &p2);
        __dt__19TAdPlyChrSelPlateGCFv(&plate, -1);
    }
}
void fn_8032AC24(void) {
    Plate_8032AC24 plate;
    Arg_8032AC24 p1;
    const f32 *src = lbl_80477208;
    p1.x = src[0];
    p1.y = src[1];
    __ct__19TAdPlyChrSelPlateGCFv(&plate, tl_clipout, &p1);
    Word_8032AC24 w = lbl_805DF768;
    TAdEnterSerialAccessGC__sub_802C4B64(&plate, lbl_80477200, &w, 0);
    __dt__19TAdPlyChrSelPlateGCFv(&plate, -1);
}

}
