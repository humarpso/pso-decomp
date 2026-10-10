#include "types.h"
#include "pso/protocol/subcommand_validation.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8036B6D0_lbl_804F3660 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8036B6D0_lbl_804F3660_size[sizeof(RecoveredGlobal_8036B6D0_lbl_804F3660) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8036B6D0_lbl_804F3660 TObjBoss8DemoRoom__resource_desc;
extern u32 TObjBoss8DemoRoom__shared_resource_object;
void load_resource__17TObjBoss8DemoRoomFv(void);
}

extern "C" {

void *__ct__17TObjBoss8DemoRoomFv(void *arg0);
void free_static_instance__17TObjBoss8DemoRoomFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__17TObjBoss8DemoRoom[];
extern void *lbl_805D44E4;

void *__ct__17TObjBoss8DemoRoomFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss8DemoRoom;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D44E4;
    return arg0;
}

extern u32 TObjBoss8DemoRoom__shared_resource_object;

void free_static_instance__17TObjBoss8DemoRoomFv(void) {
    if ((u32) TObjBoss8DemoRoom__shared_resource_object != 0U) {
        TLobby__sub_8001FE7C((void*)TObjBoss8DemoRoom__shared_resource_object, 1);
        TObjBoss8DemoRoom__shared_resource_object = 0U;
    }
}

void load_resource__17TObjBoss8DemoRoomFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &TObjBoss8DemoRoom__resource_desc.value, 0, 0, 0));
    }
    (*(s32 *)&TObjBoss8DemoRoom__shared_resource_object) = var_r0;
}

s32 validate_6x0E_clear_negative_status_effects(G_ClientIDHeader *packet) {
    return validate_subcommand_client(packet) ? 1 : 0;
}

}
