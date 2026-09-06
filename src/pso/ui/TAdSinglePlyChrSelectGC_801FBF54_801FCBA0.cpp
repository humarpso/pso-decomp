#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TAdSinglePlyChrSelectGC__sub_801FCCB4(u8 *arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FC4F4(void *, s32);
extern u8 *lbl_805D5F60;
s32 TAdSinglePlyChrSelectGC__sub_801FCE2C(s32 arg0);
s32 __ct__12TPlyCharDataFv(s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FC984(s32);
M2C_UNK memset(int, int, int);
void TAdSinglePlyChrSelectGC__sub_801FCC18(s32 arg0);
}

extern "C" {

int TAdSinglePlyChrSelectGC__sub_801FCBA0(void);
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

void TAdSinglePlyChrSelectGC__sub_801FCC18(s32 arg0) {
  s32 temp_r3_2;
  s32 var_r0;
  s32 temp_r3;
  s32 var_r0_2;
  s32 var_r31;
  u8 *temp_r30;
  s32 var_r29;
  var_r29 = 0;
  var_r31 = 0;
  do
  {
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x41C);
    var_r0 = temp_r3;
    temp_r30 += 0;
    if (var_r0 != 0)
    {
      var_r0 = __ct__12TPlyCharDataFv(temp_r3);
    }
    temp_r30 = (u8 *) (arg0 + var_r31);
    *((s32 *) (((s8 *) temp_r30) + 0)) = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x2370);
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0)
    {
      var_r0_2 = TAdSinglePlyChrSelectGC__sub_801FC984(temp_r3_2);
    }
    *((s32 *) (((s8 *) temp_r30) + 0x10)) = var_r0_2;
    memset((int) (*((s32 *) (((s8 *) temp_r30) + 0))), (int) 0, (int) 0x41C);
    memset((int) (*((s32 *) (((s8 *) temp_r30) + 0x10))), (int) 0, (int) 0x2370);
    var_r29 += 1;
    var_r31 += 4;
  }
  while (var_r29 < 4);
}

void TAdSinglePlyChrSelectGC__sub_801FCCB4(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x11568) = arg1;
}

s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x11568);
}

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

s32 TAdSinglePlyChrSelectGC__sub_801FCE2C(s32 arg0) {
    if ((void *) lbl_805D5F60 != NULL) {
        TAdSinglePlyChrSelectGC__sub_801FC4F4(lbl_805D5F60, arg0);
        return 1;
    }
    return 0;
}

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
