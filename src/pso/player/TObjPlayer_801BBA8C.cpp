#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801BBA8C(u8 *arg0, u8 *arg1);
s32 TFontSmallLobby__sub_801AFEE0();
u32 TLockOnCursor__ct(u32, void *, s32);
int TLockOnCursor__sub_8013DAB0(void*);
s32 TObjPlayer__sub_80019248(void *);
M2C_UNK TObjPlayer__sub_801AF7E0(void *);
M2C_UNK TObjPlayer__sub_801B130C(void *);
int TObjPlayer__sub_801B35AC(void*);
void TObjPlayer__sub_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void TObjPlayer__sub_801BBC2C(void* p);
void TObjPlayer__sub_801BBC64(void);
int clear_links__10TObjPlayerFPv(void* p);
s32 is_ready__10TObjPlayerFPv(void *);
M2C_UNK set_play_time__10TObjPlayerFPvi(void *, int);
M2C_UNK TObjPlayer__sub_801BF93C(void *, void *);
s8 TObjPlayer__sub_801C21AC(void *);
s8 TObjPlayer__sub_801C21B4(void *);
s8 TObjPlayer__sub_801C21BC(void *);
u32 __nw__7TObjectFUl(s32);
s32 check_camera_mode__10TObjPlayerFv();
M2C_UNK disable_drop_weapon_on_death__10TObjPlayerFPv(void *);
int clear_obj_links(void*);
s32 is_alive_and_ready__10TObjPlayerFi(void *);
s32 is_single_screen__10TObjPlayerFv();
s32 obj_getField1c(void *);
s32 obj_isState2_324();
s32 obj_isState3_324(void *);
M2C_UNK set_flag_10000__10TObjPlayerFPv(void *);
void update_lock_on_cursor__10TObjPlayerFPv(void* p);

#include "types.h"
extern "C" {

void TObjPlayer__sub_801BBA8C(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x32E) = (s16) M2C_FIELD(arg0, s16 *, 0x2BA);
    if ((obj_isState2_324() != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (check_camera_mode__10TObjPlayerFv() == 0)) {
        TObjPlayer__sub_801B130C((void *) (arg0));
    }
    if (is_ready__10TObjPlayerFPv((void *) (arg0)) != 0) {
        set_flag_10000__10TObjPlayerFPv((void *) (arg0));
    }
    if (is_alive_and_ready__10TObjPlayerFi((void *) (arg0)) != 0) {
        TObjPlayer__sub_801AF7E0((void *) (arg0));
    }
    set_play_time__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(arg1, u8 *, 3)));
    TObjPlayer__sub_801BF93C((void *) (arg0 + 0x5B0), (void *) (obj_getField1c((void *) (arg0))));
    disable_drop_weapon_on_death__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s8 *, 0x338) = TObjPlayer__sub_801C21BC((void *) (arg1));
    M2C_FIELD(arg0, s8 *, 0x339) = TObjPlayer__sub_801C21B4((void *) (arg1));
    M2C_FIELD(arg0, s8 *, 0x33A) = TObjPlayer__sub_801C21AC((void *) (arg1));
}

}

}
