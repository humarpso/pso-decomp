#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802793E4___vt__19TWindowSubEquipList { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_802793E4___vt__19TWindowSubEquipList_size[sizeof(RecoveredGlobal_802793E4___vt__19TWindowSubEquipList) == 0x20 ? 1 : -1];

extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK draw_selected_list_entry(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(void *, int);
void render__19TWindowSubEquipListFv(u8 *arg0);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TShopJudgmentItemWindow__sub_80267F9C(void *, int);
u8 *create_equip_list_window(s32 arg0, s32 arg1, s16 arg2);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 ensure_status_display__20TWindowSubStatusDispFPvi(void *, int);
s32 fn_802683F4(void *, void *, int, void *);
extern M2C_UNK __vt__19TWindowSubEquipList[];
extern s32 lbl_805D3A40;
u8 *TWindowSubEquipList__ct(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void *__dt__19TWindowSubEquipListFv(void *arg0, s16 arg1);
int run_task__19TWindowSubEquipListFv(void* p);
int TWindowSubStatusDisp__sub_80268048(void*);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);

u8 *create_equip_list_window(s32 arg0, s32 arg1, s16 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TShopJudgmentItemWindow__sub_80267F9C((void *) (arg1), (int) (8));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x88));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowSubEquipList__ct((u8 *)(temp_r3), (s32)(arg0), arg2));
    }
    return var_r0;
}

#pragma push
#pragma fp_contract on
void render__19TWindowSubEquipListFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    draw_selected_list_entry((void *) (arg0), (int) (temp_r3));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, void **, 0x80), (int) (temp_r3));
    }
}
#pragma pop

int run_task__19TWindowSubEquipListFv(void* p) { return TWindowSubStatusDisp__sub_80268048(p); }

extern M2C_UNK __vt__19TWindowSubEquipList[];

void *__dt__19TWindowSubEquipListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubEquipList;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowSubEquipList__ct(u8 *arg0, s32 arg1, s16 arg2) {
    fn_802683F4((void *) (arg0), (void *) (arg1), (int) (8), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802793E4___vt__19TWindowSubEquipList *)&__vt__19TWindowSubEquipList).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A40;
    ensure_status_display__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x25))));
    return arg0;
}

}
