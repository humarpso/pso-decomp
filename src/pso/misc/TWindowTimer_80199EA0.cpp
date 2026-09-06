#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0);
void TWindowTimer__sub_8019A6F8(void* p);
    extern int lbl_8050DD50[];
int set_timer_value__12TWindowTimerFii(int a0, int a1);
int TWindowCtrl__sub_8024A4EC(void*);
int TWindowTimer__sub_8019A770(void* p);
}

extern "C" {

void *destroy_player_obj__12TWindowTimerFPvs(void *arg0, s16 arg1);
void send_gogo_ball__12TWindowTimerFi(s32 arg0);
void update_best_time__12TWindowTimerFPv(void *arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TWindowTimer__sub_8019A44C(void *, s32);
M2C_UNK __dl__7TObjectFPv(void *);
s32 bswap_32__FPUl(s32);
M2C_UNK clear_obj_links(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
s32 read_be16_field2__10TObjPlayerFPv();

extern M2C_UNK lbl_8050DDAC[];

void update_best_time__12TWindowTimerFPv(void *arg0) {
    if ((M2C_FIELD(lbl_8050DDAC, s16 *, 0x12) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x354) <= (s32) M2C_FIELD(lbl_8050DDAC, s32 *, 0x14))) {
        M2C_FIELD(arg0, s32 *, 0x354) = (s32) M2C_FIELD(lbl_8050DDAC, s32 *, 0x14);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(lbl_8050DDAC, f32 *, 8);
        TWindowTimer__sub_8019A44C(arg0, M2C_FIELD(lbl_8050DDAC, s32 *, 0xC));
    }
    M2C_FIELD(lbl_8050DDAC, s16 *, 0x12) = 1;
}

extern M2C_UNK lbl_804B8E18[];

void *destroy_player_obj__12TWindowTimerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B8E18;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        clear_obj_links(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void send_gogo_ball__12TWindowTimerFi(s32 arg0) {
    bswap_6x79_gogo_ball__12TWindowTimerFi((s32)(arg0));
    TLobby__send_and_handle_60((void *) (arg0));
}
void bswap_6x79_gogo_ball__12TWindowTimerFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
}
void TWindowTimer__sub_8019A6F8(void* p) { *(u8*)((char*)p + 0x0) = 121; *(u8*)((char*)p + 0x1) = 6; }
int set_timer_value__12TWindowTimerFii(int a0, int a1) { lbl_8050DD50[a0] = a1; return (int)lbl_8050DD50; }
int TWindowTimer__sub_8019A770(void* p) { return TWindowCtrl__sub_8024A4EC(p); }

}

}
