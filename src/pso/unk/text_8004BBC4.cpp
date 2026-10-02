#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8004C0D4_lbl_80484D74 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8004C0D4_lbl_80484D74_size[sizeof(RecoveredGlobal_8004C0D4_lbl_80484D74) == 0x10 ? 1 : -1];

typedef s32 M2C_UNK;
typedef struct Msg_8004BFA4 {
    u8 code;
    u8 size;
    u16 id;
    s16 action;
    u8 pad6[2];
    s32 arg;
} Msg_8004BFA4;

extern "C" {
M2C_UNK TBoss4DarkFalz__sub_8004B084(void *);
M2C_UNK TBoss4DarkFalz__sub_8004B0F8(void *);
M2C_UNK TBoss4DarkFalz__sub_8004B20C(void *, int);
M2C_UNK update_visible_flag__14TBoss4DarkFalzFPv(void *);
M2C_UNK TBoss4DarkFalz__sub_8004BAC4(void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 query_teammate_state__9TObjEneDDFPv();
void run_task__14TBoss4DarkFalzFv(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK fn_802E52AC();
M2C_UNK init_uro_link__14TBoss4DarkFalzFv();
extern RecoveredGlobal_8004C0D4_lbl_80484D74 lbl_80484D74;
extern int lbl_805D4D58;
void TBoss4DarkFalz__sub_8004C0D4(void);
M2C_UNK TBoss4DarkFalz__sub_8004B20C(void *, int);
s32 get_phase__9TBoss4UroFPv(void *);
void swap_bytes__14TBoss4DarkFalzFPv(void *);
void TBoss4Type2__sub_80053BF4(void *, s32);
void TBoss4Type2__sub_80056EA8(void *, s32);
void TBoss4Type3__sub_80059DCC(void *, s32);
void *get_enemy_entity(u16);
extern void *TBoss4DarkFalz__data_805D4D5C;
extern void *TBoss4DarkFalz__data_805D4D60;
extern void *TBoss4DarkFalz__data_805D4D64;
void handle_6x19_dark_falz_actions(Msg_8004BFA4 *arg0);
void queue_destruction__7TObjectFv(void *);
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv(void);
u8 * __dt__9TObjEnemyFv(void *, s16);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void __dl__7TObjectFPv(s32);
M2C_UNK TBoss4DarkFalz__sub_8004BA18(void *);
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK TLobby__sub_8022743C();
extern M2C_UNK __vt__14TBoss4DarkFalz[];
extern void *TBoss4DarkFalz__data_805D4D5C;
extern void *TBoss4DarkFalz__data_805D4D60;
extern void *TBoss4DarkFalz__data_805D4D64;
extern s32 lbl_805D4D74;
u8 *__dt__14TBoss4DarkFalzFv(u8 *arg0, s16 arg1);
}

extern "C" {

void TBoss4DarkFalz__vt61(void);
void cleanup_global__14TBoss4DarkFalzFv(void);
s32 create__14TBoss4DarkFalzFi(s32 arg0);
void render__14TBoss4DarkFalzFv(void);
s32 TBoss4DarkFalz__ct(s32, s32, s32);
int TBoss4DarkFalz__sub_8030AD38(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int free_global_instance__14TBoss4DarkFalzFv(void);

void render__14TBoss4DarkFalzFv(void) {  }

void run_task__14TBoss4DarkFalzFv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x37C) != 0) && (check_demo_mode__10TObjPlayerFv() != 0)) {
        TBoss4DarkFalz__sub_8004B20C((void *) (arg0), (int) (0));
    }
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        update_visible_flag__14TBoss4DarkFalzFPv((void *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x378) == 0) {
            TBoss4DarkFalz__sub_8004B0F8((void *) (arg0));
        }
        TBoss4DarkFalz__sub_8004B084((void *) (arg0));
        TBoss4DarkFalz__sub_8004BAC4((void *) (arg0));
    }
}

void TBoss4DarkFalz__vt61(void) {  }

    extern int lbl_805D4D58;

u8 *__dt__14TBoss4DarkFalzFv(u8 *arg0, s16 arg1) {
    s32 temp_r0;
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss4DarkFalz;
        switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
        case 10:
        case 14:
        case 15:
            send_entity_set_flags__6TLobbyFPv(arg0);
            break;
        }
        TBoss4DarkFalz__sub_8004BA18((void *) (arg0));
        TCameraCtrl__sub_80069DA8();
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() == 0) {
            TLobby__sub_8022743C();
        }
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x398));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x398) = NULL;
        }
        if ((void *) TBoss4DarkFalz__data_805D4D5C != NULL) {
            queue_destruction__7TObjectFv(TBoss4DarkFalz__data_805D4D5C);
            TBoss4DarkFalz__data_805D4D5C = NULL;
        }
        if ((void *) TBoss4DarkFalz__data_805D4D60 != NULL) {
            queue_destruction__7TObjectFv(TBoss4DarkFalz__data_805D4D60);
            TBoss4DarkFalz__data_805D4D60 = NULL;
        }
        if ((void *) TBoss4DarkFalz__data_805D4D64 != NULL) {
            queue_destruction__7TObjectFv(TBoss4DarkFalz__data_805D4D64);
            TBoss4DarkFalz__data_805D4D64 = NULL;
        }
        lbl_805D4D74 = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void handle_6x19_dark_falz_actions(Msg_8004BFA4 *arg0) {
    void *ent;
    s32 arg;
    swap_bytes__14TBoss4DarkFalzFPv(arg0);
    ent = get_enemy_entity(arg0->id);
    if (ent == NULL) {
        return;
    }
    if (arg0->action != -1 && arg0->action >= 0 && arg0->action < 16 &&
        arg0->action != get_phase__9TBoss4UroFPv(ent)) {
        TBoss4DarkFalz__sub_8004B20C(ent, arg0->action);
    }
    arg = arg0->arg;
    if (arg == -1) {
        return;
    }
    switch (get_phase__9TBoss4UroFPv(ent)) {
    case 5:
    case 6:
        if (TBoss4DarkFalz__data_805D4D5C != NULL) {
            TBoss4Type2__sub_80053BF4(TBoss4DarkFalz__data_805D4D5C, arg);
        }
        break;
    case 7:
    case 8:
    case 9:
        if (TBoss4DarkFalz__data_805D4D60 != NULL) {
            TBoss4Type2__sub_80056EA8(TBoss4DarkFalz__data_805D4D60, arg);
        }
        break;
    case 12:
    case 13:
    case 14:
        if (TBoss4DarkFalz__data_805D4D64 != NULL) {
            TBoss4Type3__sub_80059DCC(TBoss4DarkFalz__data_805D4D64, arg);
        }
        break;
    }
}

void cleanup_global__14TBoss4DarkFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); TBoss4DarkFalz__sub_8030AD38(); TLobby__sub_8001FE7C((void*)(lbl_805D4D58), (void*)1); lbl_805D4D58 = 0; }

extern s32 tl_04;

void TBoss4DarkFalz__sub_8004C0D4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_80484D74.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D4D58) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        init_uro_link__14TBoss4DarkFalzFv();
        fn_802E52AC();
    }
}

s32 create__14TBoss4DarkFalzFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3AC);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4DarkFalz__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
