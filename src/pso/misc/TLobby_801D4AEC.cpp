#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801D4AEC { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_801D4AEC : Base_801D4AEC {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m27(s16);
VA
VA
VA
VA
VA
VA
    virtual s32 m34();
    virtual void m35(s32);
};

extern "C" {

void TLobby__sub_801D4C28(void* a0, int a1, int a2, int a3);
void reduce_item_amount__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
int set_globals_and_notify__6TLobbyFPvii(void* a0, int a1, int a2);
void set_globals_and_update__6TLobbyFPvii(void* a0, int a1, int a2);
s32 use_item__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int TLobby__sub_801D5004(void*);
int reduce_child_item_amounts__6TLobbyFPv(void*);
M2C_UNK try_spend_actor_meseta(s32, s32);
s32 is_item_equipped(void *);
int TObjPlayer__sub_801D52A8(void*);
void *get_owner_if_alive__10TObjPlayerFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);
s32 start_inventory_update__10TObjPlayerFPvi(s32, s32);
M2C_UNK unequip_item__10TObjPlayerFiPv(s32, void *);

void reduce_item_amount__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    VObj_801D4AEC *temp_r3;

    temp_r3 = (VObj_801D4AEC *)get_owner_if_alive__10TObjPlayerFPv(arg2);
    if ((temp_r3 != NULL) && (arg3 >= 0)) {
        if ((temp_r3->m34() - arg3) > 0) {
            temp_r3->m35(arg3);
            return;
        }
        if (is_item_equipped(temp_r3) != 0) {
            unequip_item__10TObjPlayerFiPv(arg1, temp_r3);
        }
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
        temp_r3->m27(temp_r4);
        queue_destruction__7TObjectFv(arg2);
    }
}

s32 use_item__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 == -1) {
        try_spend_actor_meseta(arg1, arg3);
        return 1;
    }
    temp_r3 = start_inventory_update__10TObjPlayerFPvi(arg0, arg2);
    if (temp_r3 == 0) {
        return 0;
    }
    reduce_item_amount__6TLobbyFPviii((void *)(arg0), (s32)(arg1), (s32)(temp_r3), (s32)(arg3));
    return 1;
}

    extern int lbl_805D5DE0;
    extern unsigned char lbl_805D5E04;
    extern unsigned char lbl_805D5E05;
void TLobby__sub_801D4C28(void* a0, int a1, int a2, int a3) { lbl_805D5DE0 = a1; lbl_805D5E04 = a2; lbl_805D5E05 = a3; TLobby__sub_801D5004((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DE0;
    extern unsigned char lbl_805D5E04;
void set_globals_and_update__6TLobbyFPvii(void* a0, int a1, int a2) { lbl_805D5DE0 = a1; lbl_805D5E04 = a2; reduce_child_item_amounts__6TLobbyFPv((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DE4;
    extern int lbl_805D5DF4;
int set_globals_and_notify__6TLobbyFPvii(void* a0, int a1, int a2) { lbl_805D5DE4 = a2; lbl_805D5DF4 = 0; TObjPlayer__sub_801D52A8((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

}
