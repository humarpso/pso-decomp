#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8020d1bc { char pad[0x18]; };
struct VObj_8020d1bc : VBase_8020d1bc {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

extern "C" {

void assign_objects_to_slots__6TLobbyFPvi(u8 *arg0, s32 arg1);
u8 *TLobby__sub_8020D054(void *);

extern s32 TLobby__data_805D6140;

void assign_objects_to_slots__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r3;
    s16 temp_r0;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = arg0;
    for (i = 0; i < arg1; i++, ptr += 0x44) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 0x10) || (temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xA) == 0))) {
            temp_r3_2 = TLobby__sub_8020D054(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x40) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj_8020d1bc *) temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
            } else {
                M2C_FIELD(ptr, void **, 0x40) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
