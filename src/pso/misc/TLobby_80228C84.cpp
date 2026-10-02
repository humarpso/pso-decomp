#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80228C84 { char pad[0x18]; };
struct VObj_80228C84 : Base_80228C84 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};

extern "C" {

void refresh_player_status__6TLobbyFv(void);
void *get_player_by_client_id();
M2C_UNK text_builder_append();

void refresh_player_status__6TLobbyFv(void) {
    struct VObj_80228C84 *o = (struct VObj_80228C84 *)get_player_by_client_id();
    if (o != NULL) {
        o->m10();
        text_builder_append();
    }
}

}
