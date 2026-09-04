#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4DarkFalz__sub_801D94C0(void* p);
void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1);
void TObjPlayer__sub_801D8A38(void* a0);
void TObjPlayer__sub_801D92A4(void);
int TObjPlayer__sub_801D9470(void* p);
void create_player_ending_motion(void);
s32 get_current_state_field__10TObjPlayerFv(void);
s32 get_falz_phase__10TObjPlayerFPv(void* p);
int get_instance_count__14TBoss4DarkFalzFv(void);
void* init_inventory__10TObjPlayerFPv(void* p);
s32 init_inventory_items__10TObjPlayerFi(s32 arg0);
void load_ply_level_tbl(void);
int TLobby__sub_800F957C(void*);
int TObjPlayer__sub_801BDFC4(void);
int TObjPlayer__sub_801BFF80(void*);
int TObjPlayer__sub_801C6E40(void*);
void *TObjPlayer__sub_801D9250();
void __dl__7TObjectFPv(void *);
void __dt__10TObjPlayerFv(void *, int);
int create_named_object(void*);
int fn_800F9990(void*);
M2C_UNK init__17TPlyInventoryItemFv(s32);

    extern unsigned char lbl_80447190[];
    extern int lbl_805D5E08;
void create_player_ending_motion(void) { TObjPlayer__sub_801BDFC4(); lbl_805D5E08 = create_named_object(lbl_80447190); }

extern M2C_UNK lbl_804C4540[];

void *TObjPlayer__sub_801D89E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4540;
        __dt__10TObjPlayerFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DC3F8;
void TObjPlayer__sub_801D8A38(void* a0) { *(short*)((char*)a0 + 0x0) = 1; *(float*)((char*)a0 + 0x4) = lbl_805DC3F8; }

void* init_inventory__10TObjPlayerFPv(void* p) { init_inventory_items__10TObjPlayerFi((s32)((s32)((char*)p + 0x50))); TObjPlayer__sub_801BFF80((char*)p + 0xac); TObjPlayer__sub_801D8A38((void*)((void*)((char*)p + 0xc0))); return p; }

s32 init_inventory_items__10TObjPlayerFi(s32 arg0) {
    s32 var_r30;
    s32 var_r31;

    var_r31 = 0;
    var_r30 = 0;
    do {
        init__17TPlyInventoryItemFv(arg0 + var_r30);
        var_r31 += 1;
        var_r30 += 0x1C;
    } while (var_r31 < 2);
    return arg0;
}

s32 get_current_state_field__10TObjPlayerFv(void) {
    return M2C_FIELD(TObjPlayer__sub_801D9250(), s32 *, 8);
}

    extern int lbl_805D5E10;
void TObjPlayer__sub_801D92A4(void) { TLobby__sub_800F957C((void*)(lbl_805D5E10)); }

    extern unsigned char lbl_804492E8[];
    extern int lbl_805D5E10;
void load_ply_level_tbl(void) { lbl_805D5E10 = fn_800F9990(lbl_804492E8); }

int TObjPlayer__sub_801D9470(void* p) { return TObjPlayer__sub_801C6E40((char*)p + 0x360); }
s32 get_falz_phase__10TObjPlayerFPv(void* p) { return TBoss4DarkFalz__sub_801D94C0((void*)((char*)p + 0x7cc)); }

    extern int lbl_805D4D68;
int get_instance_count__14TBoss4DarkFalzFv(void) {  return lbl_805D4D68; }

s32 TBoss4DarkFalz__sub_801D94C0(void* p) { return *(s32*)((char*)p + 0x14); }

}
