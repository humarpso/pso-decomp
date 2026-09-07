#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8030946C_lbl_804E7370 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030946C_lbl_804E7370_size[sizeof(RecoveredGlobal_8030946C_lbl_804E7370) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8030946C_lbl_804E7370 lbl_804E7370;
extern u32 TBoss7Crawfish__data_805D6A60;
void TBoss7Crawfish__sub_8030946C(void);
}

extern "C" {

void TBoss7Crawfish__vt42(void);
void TBoss7Crawfish__vt43(void);
void TBoss7Crawfish__vt44(void);
void TBoss7Crawfish__vt45(void);
void TBoss7Crawfish__vt46(void);
void TBoss7Crawfish__vt47(void);
void TBoss7Crawfish__vt48(void);
void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1);
void destroy_instance__14TBoss7CrawfishFv(void);
f32 get_health__14TBoss7CrawfishFPv(void* p);
void run_task__14TBoss7CrawfishFv(u8 *arg0);
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss7Crawfish__sub_80308BEC(void *);
M2C_UNK TBoss7Crawfish__sub_80308D1C(void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK check_band_and_destroy__14TBoss7CrawfishFi(void *);
M2C_UNK clear_obj_links(void *);
int fn_80269078(void*);
M2C_UNK free_child__14TBoss7CrawfishFPv(void *);
int get_item_count__24TShopEquipmentSellWindowFPv(void* p);
int initialize_subwindow__9TWindowDDFPv(void*);
s32 obj_testFlags30(void *, int);
M2C_UNK update__14TBoss7CrawfishFi(void *);
M2C_UNK update_attack_state__14TBoss7CrawfishFPv(void *);
M2C_UNK update_motion_and_release__14TBoss7CrawfishFPv(void *);

extern const f32 lbl_805DF0FC;

void run_task__14TBoss7CrawfishFv(u8 *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) && (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0)) {
        TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (4));
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        update_attack_state__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 1:
        TBoss7Crawfish__sub_80308D1C((void *) (arg0));
        break;
    case 2:
        update_motion_and_release__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 3:
        update__14TBoss7CrawfishFi((void *) (arg0));
        break;
    case 4:
        TBoss7Crawfish__sub_80308BEC((void *) (arg0));
        break;
    case 5:
        check_band_and_destroy__14TBoss7CrawfishFi((void *) (arg0));
        break;
    }
    TObjPlayer__sub_80154E3C((void *) (arg0));
    if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x02000000)) {
        TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
    }
    TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DF0FC));
    TBoss1Dragon__sub_80143504((void *) (arg0));
}

extern M2C_UNK __vt__14TBoss7Crawfish[];

void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss7Crawfish;
        TObjPlayer__sub_80154A00(arg0);
        clear_obj_links(arg0);
        free_child__14TBoss7CrawfishFPv(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TBoss7Crawfish__data_805D6A60;

void destroy_instance__14TBoss7CrawfishFv(void) {
    if ((u32) TBoss7Crawfish__data_805D6A60 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss7Crawfish__data_805D6A60, 1);
        TBoss7Crawfish__data_805D6A60 = 0U;
    }
}

void TBoss7Crawfish__sub_8030946C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804E7370.value, 0, 0, 0));
    }
    (*(s32 *)&TBoss7Crawfish__data_805D6A60) = var_r0;
}

void TBoss7Crawfish__vt42(void) {  }
void TBoss7Crawfish__vt43(void) {  }
void TBoss7Crawfish__vt44(void) {  }
void TBoss7Crawfish__vt45(void) {  }
void TBoss7Crawfish__vt46(void) {  }
void TBoss7Crawfish__vt47(void) {  }
void TBoss7Crawfish__vt48(void) {  }
f32 get_health__14TBoss7CrawfishFPv(void* p) { return *(f32*)((char*)p + 0xc8); }
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v) { *(s16*)((char*)p + 0xb8) = v; }

}
