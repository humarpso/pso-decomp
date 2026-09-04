#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdSinglePlyChrSelectGC__sub_801FCBA0(void);
int TAdSinglePlyChrSelectGC__sub_801FCC18(void);
int TAdSinglePlyChrSelectGC__sub_801FCCB4(void);
int TAdSinglePlyChrSelectGC__sub_801FCCC0(void);
int TAdSinglePlyChrSelectGC__sub_801FCCDC(void);
int TAdSinglePlyChrSelectGC__sub_801FCD04(void);
int TAdSinglePlyChrSelectGC__sub_801FCD3C(void);
s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 pso_system_load_gc(void);
void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v);
void setup__23TAdSinglePlyChrSelectGCFi(int a0);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
int set_quest_download_server__23TAdSinglePlyChrSelectGCFi(void);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv();

int TAdSinglePlyChrSelectGC__sub_801FCBA0(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_801FCC18(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_801FCCB4(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_801FCCC0(void) { return 0; }

void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x0); }

int TAdSinglePlyChrSelectGC__sub_801FCCDC(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_801FCD04(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_801FCD3C(void) { return 0; }

    extern unsigned char lbl_804C89BC[];
    extern int lbl_805D49B4;
    extern int lbl_805D5F80;
    extern int lbl_805D5F88;
    extern int lbl_805D5F98;
void setup__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5F80 = a0; set_quest_download_server__23TAdSinglePlyChrSelectGCFi(); lbl_805D49B4 = 1; draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)(lbl_805D5F80), lbl_804C89BC, (void*)(lbl_805D5F98), (void*)(lbl_805D5F88)); }

extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F6C;
extern s32 lbl_805D5F8C;

s32 pso_system_load_gc(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F6C != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F8C, lbl_804C8914);
        if (var_r31 == 0) {
            if (try_confirm_selection__23TAdSinglePlyChrSelectGCFv() != 0) {
                var_r31 = TAdSinglePlyChrSelectGC__sub_801FD990(lbl_805D5F8C);
                if (var_r31 == 0) {
                    set_player_index__23TAdSinglePlyChrSelectGCFi(0xF);
                }
            }
        }
    }
    return var_r31;
}

}
