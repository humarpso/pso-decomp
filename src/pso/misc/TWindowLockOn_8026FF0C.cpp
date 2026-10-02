#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_8026ff0c;
struct VObj_8026ff0c {
    char pad[0x18];
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8();
    virtual M2C_UNK m9();
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
    virtual M2C_UNK m18();
    virtual M2C_UNK m19();
    virtual M2C_UNK m20();
    virtual M2C_UNK m21();
    virtual M2C_UNK m22();
    virtual M2C_UNK m23();
    virtual M2C_UNK m24();
    virtual M2C_UNK m25();
    virtual M2C_UNK m26();
    virtual M2C_UNK m27();
    virtual M2C_UNK m28();
    virtual M2C_UNK m29();
    virtual M2C_UNK m30();
    virtual M2C_UNK m31();
};

extern "C" {

void update_for_player_index__13TWindowLockOnFPvi(u8 *arg0, s32 arg1);
s32 strcmp(s32, s32);
s32 is_inactive__10TObjPlayerFPv(void *);
struct VObj_8026ff0c *get_player_by_client_id(s32);
u32 get_field_20__17TWindowSubComCardFPv(void *);
M2C_UNK clear_visible_flag__20TWindowSubStatusDispFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(void *, s32, M2C_UNK);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(void *);

void update_for_player_index__13TWindowLockOnFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    struct VObj_8026ff0c *temp_r30;
    u8 *temp_r29;

    temp_r30 = get_player_by_client_id(arg1);
    if (temp_r30 == NULL) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    temp_r29 = (u8 *)temp_r30 + 0x85C;
    if (temp_r29 == NULL) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    temp_r31 = temp_r30->m10();
    if (temp_r31 == 0) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    if (is_inactive__10TObjPlayerFPv(temp_r30) == 0) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    clear_visible_flag__20TWindowSubStatusDispFPv(arg0);
    if ((get_field_20__17TWindowSubComCardFPv(arg0) == 0U) || (strcmp(get_field_20__17TWindowSubComCardFPv(arg0), temp_r31) != 0)) {
        TWindowSubStatusDisp__sub_8025AC50(arg0, temp_r31, 0x20);
    }
    if (temp_r30->m31() != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0xFFFF0000;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r29, s32 *, 0x18);
}

}
