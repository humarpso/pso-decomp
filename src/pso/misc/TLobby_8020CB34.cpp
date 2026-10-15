#include "types.h"

extern "C" {

s32 spawn_objects_at_pos__6TLobbyFss(s16 arg0, s16 arg1);
u8 *create_set_object_from_row(void *);
u8 *get_object_count__6TLobbyFPv(s32);
s32 get_obj_table_entry__6TLobbyFi(s32);

struct VObj8020 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};
extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D6140;

s32 spawn_objects_at_pos__6TLobbyFss(s16 arg0, s16 arg1) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    var_r29 = get_object_count__6TLobbyFPv(TLobby__data_805D60FC);
    temp_r31 = get_obj_table_entry__6TLobbyFi(TLobby__data_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28++, var_r29 += 0x44) {
        temp_r3 = *(s16 *)((s8 *)var_r29 + 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) *(s16 *)((s8 *)var_r29 + 0xC) == arg0) && ((s16) *(s16 *)((s8 *)var_r29 + 0xA) == arg1)) {
            temp_r3_2 = create_set_object_from_row(var_r29);
            if (temp_r3_2 != NULL) {
                *(void **)((s8 *)var_r29 + 0x40) = temp_r3_2;
                *(s16 *)((s8 *)var_r29 + 2) = (s16) (*(s16 *)((s8 *)var_r29 + 2) | 0x12);
                *(s16 *)((s8 *)temp_r3_2 + 0x28) = (s16) *(s16 *)((s8 *)var_r29 + 0xC);
                *(s16 *)((s8 *)temp_r3_2 + 0x2A) = (s16) *(s16 *)((s8 *)var_r29 + 0xA);
                *(s16 *)((s8 *)temp_r3_2 + 0x2C) = (s16) *(s16 *)((s8 *)var_r29 + 4);
                *(void **)((s8 *)temp_r3_2 + 0x80) = var_r29;
                temp_r0 = *(s16 *)((s8 *)temp_r3_2 + 0x2C);
                if (temp_r0 != -1) {
                    ((VObj8020*)temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
                var_r30 += 1;
            } else {
                *(void **)((s8 *)var_r29 + 0x40) = NULL;
            }
        }
    }
    return var_r30;
}

}
