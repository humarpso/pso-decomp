#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt12(void *arg0);
void TPlayerBattleCtrl4P__vt13(void *arg0);
void TPlayerBattleCtrl4P__vt14(void *arg0);
void TPlayerBattleCtrl4P__vt15(void* p);
M2C_UNK TDuelEffectCtrl__ct(void *, void *, M2C_UNK);
s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void *);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
M2C_UNK TPlayerBattleCtrl4P__sub_803112AC(void *, M2C_UNK);
M2C_UNK TWindow__close(void *);
void *__nw__7TObjectFUl(M2C_UNK);
int TPlayerBattleCtrl4P__sub_80311618(void*);

void TPlayerBattleCtrl4P__vt15(void* p) { TPlayerBattleCtrl4P__sub_80311618(p); set_score__19TPlayerBattleCtrl4PFPvi((void*)(p), (void*)((void*)1)); }

void TPlayerBattleCtrl4P__vt14(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x20);
    if ((u32) temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    }
    TPlayerBattleCtrl4P__sub_803112AC(arg0, 2);
}

void TPlayerBattleCtrl4P__vt13(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(8));
    }
}

void TPlayerBattleCtrl4P__vt12(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24C) = (s32) (M2C_FIELD(arg0, s32 *, 0x24C) - 1);
    if ((check_all_players_flag__19TPlayerBattleCtrl4PFv(arg0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x24C) >= 0)) {
        if (M2C_FIELD(arg0, void **, 0x20) != (void *) 0) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x20));
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        {
            void *temp = __nw__7TObjectFUl(0x28);
            if (temp != 0) {
                TDuelEffectCtrl__ct(temp, arg0, 0);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x240) = 0x96;
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(7));
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80062718
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);

void update_active_player_count__19TPlayerBattleCtrl4PFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6DC) > 0x96) {
            TObjEneDD__sub_800BBA18(arg0, 0xB);
        }
    case 5:
    case 1:
        return;
    case 0:
        if ((TPlayerBattleCtrl4P__sub_801BA74C(0) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(1) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(2) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C(3) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x6DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6DC) + 1);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C4F70
#include "types.h"

extern "C" {

s32 get_state__19TPlayerBattleCtrl4PFPv(void* p);
void set_battle_mode__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);

s32 get_state__19TPlayerBattleCtrl4PFPv(void* p) { return *(s32*)((char*)p + 0x0); }
void set_battle_mode__19TPlayerBattleCtrl4PFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031058C
#include "types.h"

extern "C" {

int TPlayerBattleCtrl4P__sub_8031058C(void* p);
int TPlayerBattleCtrl4P__sub_803104CC(void*);

int TPlayerBattleCtrl4P__sub_8031058C(void* p) { return TPlayerBattleCtrl4P__sub_803104CC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803105AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void);
M2C_UNK init_ctrl_default__19TPlayerBattleCtrl4PFPv(void *);

extern void *TPlayerBattleCtrl4P__data_805D6AA8;

void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void) {
    void *temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__data_805D6AA8;
    if (temp_r3 != NULL) {
        init_ctrl_default__19TPlayerBattleCtrl4PFPv(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803105D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__19TPlayerBattleCtrl4PFv(void);
M2C_UNK inc_player_count__10TObjPlayerFv();
M2C_UNK TLobby__sub_801B09A4();

extern s32 lbl_805D6AAC;

void init__19TPlayerBattleCtrl4PFv(void) {
    TLobby__sub_801B09A4();
    inc_player_count__10TObjPlayerFv();
    lbl_805D6AAC = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80310604
#include "types.h"

extern "C" {

void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2);
int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p);
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p);
int TPlayerBattleCtrl4P__sub_803112AC(void*, int);
int fn_801C23A8(void*, void*);
int TLobby__sub_8022727C(void*);

int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p) { return TPlayerBattleCtrl4P__sub_803112AC(p, 0); }
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2) { TLobby__sub_8022727C(a1); fn_801C23A8((void*)-50, a2); }
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p) { *(s32*)((char*)p + 0x260) = 0; *(s32*)((char*)p + 0x290) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803107C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0);

s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x260) = 2;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803107D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_803107D0 { char pad[0x18]; };
struct VObj_803107D0 : Base_803107D0 {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)
#undef VV
    virtual void v64();
};

extern "C" {

void update_players__19TPlayerBattleCtrl4PFv(void);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);

void update_players__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800)) {
            ((VObj_803107D0 *)temp_r3)->v64();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80310904
#include "types.h"

extern "C" {

void TPlayerBattleCtrl4P__sub_80310904(void* p);

void TPlayerBattleCtrl4P__sub_80310904(void* p) { *(s32*)((char*)p + 0x260) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80310B4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2);
s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK send_code_45_1__10TObjPlayerFi();
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK TWindowChat__sub_8024AD30(u16);
M2C_UNK TWindowCtrl__sub_8024AEF0(u16);

void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_r31;
    s32 temp_r30;

    temp_r31 = (u16)arg1;
    temp_r30 = arg2;
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(temp_r31)) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (temp_r30 != 0) {
        TWindowChat__sub_8024AD30(temp_r31);
        clear_flag__11TWindowCtrlFv();
        TWindowCtrl__sub_8024AEF0(temp_r31);
    }
}

s32 obj_testFlags30(u32, s32);

s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    u32 var_r3;

    var_r31 = 0;
loop_1:
    var_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31));
    if ((var_r3 != 0U) && (obj_testFlags30(var_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80310EB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK request_active_window_close();
M2C_UNK fn_8024ACEC(u32);
M2C_UNK TWindowCtrl__sub_8024AEAC(u32);

void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2) {
    u32 id;
    u32 temp;

    id = arg1;
    temp = TPlayerBattleCtrl4P__sub_801BA74C(id);
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg2 != 0) {
        fn_8024ACEC(id);
        request_active_window_close();
        TWindowCtrl__sub_8024AEAC(id);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803112A4
#include "types.h"

extern "C" {

s32 release_attached_resource__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);

void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803112BC
#include "types.h"

extern "C" {

s32 release_attached_resource__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);

void update_all_players__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
            release_attached_resource__10TObjPlayerFPv();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031158C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__19TPlayerBattleCtrl4PFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TPlayerBattleCtrl4P__sub_8031058C();
M2C_UNK obj_set_flag_20000();
M2C_UNK fn_801C5454(s32);
M2C_UNK fn_801F57B4(s32);
M2C_UNK fn_8020910C(s32);
M2C_UNK TLobby__sub_8020BB18();
M2C_UNK TLobby__sub_8020BCE4();

extern s32 tl_00;
extern s32 tl_01;

void update__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    s32 var_r31_2;
    u32 temp_r3;

    TPlayerBattleCtrl4P__sub_8031058C();
    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
            obj_set_flag_20000();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    fn_8020910C(tl_01);
    fn_801F57B4(tl_00);
    TLobby__sub_8020BCE4();
    TLobby__sub_8020BB18();
    var_r31_2 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31_2);
        if (temp_r3 != 0U) {
            fn_801C5454(temp_r3 + 0x7C4);
        }
        var_r31_2 += 1;
    } while (var_r31_2 < 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311800
#include "types.h"

extern "C" {

void TPlayerBattleCtrl4P__vt29(void);
void TPlayerBattleCtrl4P__vt28(void);

void TPlayerBattleCtrl4P__vt29(void) {  }
void TPlayerBattleCtrl4P__vt28(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311808
#include "types.h"

extern "C" {

void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void);
int TKeyBoardControl__sub_8000F950(void);
int clear_counter__6TLobbyFv(void);
int reset_settings_to_default__6TLobbyFPv(void*);

    extern unsigned char lbl_8050EA40[];
    extern int evt2_random_enemies_mode;
void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); reset_settings_to_default__6TLobbyFPv(lbl_8050EA40); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311840
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TPlayerBattleCtrl4P__vt27(void *arg0);
void *init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_00;
extern M2C_UNK reset_random_enemies_mode__19TPlayerBattleCtrl4PFv[];

void TPlayerBattleCtrl4P__vt27(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, reset_random_enemies_mode__19TPlayerBattleCtrl4PFv);
    }
    queue_destruction__7TObjectFv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311890
#include "types.h"

extern "C" {

void TPlayerBattleCtrl4P__vt33(void);

void TPlayerBattleCtrl4P__vt33(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311894
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt32(s32 arg0);
M2C_UNK set_score__19TPlayerBattleCtrl4PFPvi(s32, M2C_UNK);
M2C_UNK TPlayerBattleCtrl4P__sub_80311380();
M2C_UNK set_fade_params__6TLobbyFi(M2C_UNK *);

extern M2C_UNK reset_ctrl_to_default__19TPlayerBattleCtrl4PFv[];
extern s32 lbl_805D6AAC;

void TPlayerBattleCtrl4P__vt32(s32 arg0) {
    if ((s32) lbl_805D6AAC != 0) {
        TPlayerBattleCtrl4P__sub_80311380();
        set_fade_params__6TLobbyFi(reset_ctrl_to_default__19TPlayerBattleCtrl4PFv);
        set_score__19TPlayerBattleCtrl4PFPvi(arg0, 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311958
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt30(void *arg0);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK set_score__19TPlayerBattleCtrl4PFPvi(void *, M2C_UNK);

void TPlayerBattleCtrl4P__vt30(void *arg0) {
    s32 var_r31;
    u32 ret;

    var_r31 = 0;
    do {
        ret = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (ret != 0U) {
            play_effect_default__10TObjPlayerFii(ret, -1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    M2C_FIELD(arg0, s32 *, 0x240) = 0xF;
    set_score__19TPlayerBattleCtrl4PFPvi(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311B20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt24(s32 arg0);
s32 check_flag_100__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK set_score__19TPlayerBattleCtrl4PFPvi(s32, M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);

extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void TPlayerBattleCtrl4P__vt24(s32 arg0) {
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 6) != 0)) {
        set_score__19TPlayerBattleCtrl4PFPvi(arg0, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311D78
#include "types.h"

extern "C" {

void TPlayerBattleCtrl4P__vt21(void* p);
int TPlayerBattleCtrl4P__sub_803101D4(void*);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
int TPlayerBattleCtrl4P__sub_8031012C(void*);
int update_players__19TPlayerBattleCtrl4PFv(void*);

void TPlayerBattleCtrl4P__vt21(void* p) { if (TPlayerBattleCtrl4P__sub_8031012C(p) != 0) { TPlayerBattleCtrl4P__sub_803101D4(p); update_players__19TPlayerBattleCtrl4PFv(p); set_score__19TPlayerBattleCtrl4PFPvi(p, (void*)5); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80311E4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt18(void *arg0);
void TPlayerBattleCtrl4P__vt19(void *arg0);
M2C_UNK set_score__19TPlayerBattleCtrl4PFPvi(void *, M2C_UNK);
M2C_UNK update_all_players__19TPlayerBattleCtrl4PFv();

void TPlayerBattleCtrl4P__vt19(void *arg0) {
    s32 temp_r0;

    update_all_players__19TPlayerBattleCtrl4PFv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x24C) = 0x1E;
        set_score__19TPlayerBattleCtrl4PFPvi(arg0, 8);
    }
}

void TPlayerBattleCtrl4P__vt18(void *arg0) {
    s32 temp_r0;

    update_all_players__19TPlayerBattleCtrl4PFv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x240) = 0x5A;
        set_score__19TPlayerBattleCtrl4PFPvi(arg0, 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80312218
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt10(void *arg0);
M2C_UNK set_score__19TPlayerBattleCtrl4PFPvi(void *, M2C_UNK);

void TPlayerBattleCtrl4P__vt10(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        set_score__19TPlayerBattleCtrl4PFPvi(arg0, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80312388
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt8(void *arg0);
M2C_UNK set_score__19TPlayerBattleCtrl4PFPvi(void *, M2C_UNK);
u8 TLobby__sub_801D7064(M2C_UNK *);

extern M2C_UNK lbl_8050EA40[];

void TPlayerBattleCtrl4P__vt8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        if (TLobby__sub_801D7064(lbl_8050EA40) == 1) {
            set_score__19TPlayerBattleCtrl4PFPvi(arg0, 3);
            return;
        }
        set_score__19TPlayerBattleCtrl4PFPvi(arg0, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803123F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TPlayerBattleCtrl4P__vt7(void *arg0);
void set_score__19TPlayerBattleCtrl4PFPvi(void *, int);
void send_and_handle__6TLobbyFPvii(void *, void *, int);

void TPlayerBattleCtrl4P__vt7(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x20) != NULL) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, void **, 0x20), (void *)((char *)arg0 + 56), 128);
    }
    M2C_FIELD(arg0, u32 *, 0x240) = 240;
    set_score__19TPlayerBattleCtrl4PFPvi(arg0, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031295C
#include "types.h"

extern "C" {

void TPlayerBattleCtrl4P__vt0(void* p);
int TPlayerBattleCtrl4P__sub_803112AC(void*, void*);
int TPlayerBattleCtrl4P__sub_8031171C(void*);

void TPlayerBattleCtrl4P__vt0(void* p) { TPlayerBattleCtrl4P__sub_8031171C(p); TPlayerBattleCtrl4P__sub_803112AC(p, (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80312A80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TPlayerBattleCtrl4PFPvs(void *arg0, s16 arg1);
M2C_UNK TPlayerBattleCtrl4P__sub_803101D4(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK lbl_804E80A8[];
extern s32 TPlayerBattleCtrl4P__data_805D6AA8;

void *__dt__19TPlayerBattleCtrl4PFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E80A8;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        TPlayerBattleCtrl4P__sub_803101D4(arg0);
        TPlayerBattleCtrl4P__data_805D6AA8 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80312BDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_instance_with_text__19TPlayerBattleCtrl4PFii(s32 arg0, s32 arg1);
M2C_UNK TPlayerBattleCtrl4P__ct(void *, void *);
u32 __nw__7TObjectFUl(int);
M2C_UNK strncpy(void *, void *, int);

extern s32 tl_00;
extern u8 *TPlayerBattleCtrl4P__data_805D6AA8;

void init_instance_with_text__19TPlayerBattleCtrl4PFii(s32 arg0, s32 arg1) {
    if ((void *) TPlayerBattleCtrl4P__data_805D6AA8 == NULL) {
        u32 mem = __nw__7TObjectFUl((int) (0x2A0));
        if (mem != 0U) {
            TPlayerBattleCtrl4P__ct((void *) mem, (void *) (tl_00));
        }
    }
    if ((void *) TPlayerBattleCtrl4P__data_805D6AA8 != NULL) {
        strncpy((void *) (TPlayerBattleCtrl4P__data_805D6AA8 + 0x38), (void *) (arg1), (int) (0x200));
        M2C_FIELD(TPlayerBattleCtrl4P__data_805D6AA8, s32 *, 0x1C) = arg0;
    }
}

}
#endif
#endif
