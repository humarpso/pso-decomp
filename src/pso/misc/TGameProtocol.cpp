#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TGameProtocol__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__13TGameProtocol[];
extern void *TGameProtocol__class_name;
extern void * TGameProtocol__instance;
extern void *game_protocol_instance;

void *TGameProtocol__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TGameProtocol;
    M2C_FIELD(arg0, void **, 0x0) = TGameProtocol__class_name;
    TGameProtocol__instance = arg0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = ((void * (*)(void *, void *))__ct__7TObjectFP7TObject)(o, arg0);
    }
    game_protocol_instance = o;
    return arg0;
}

}
