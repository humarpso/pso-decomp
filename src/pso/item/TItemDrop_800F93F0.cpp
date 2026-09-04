#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TItemDrop__sub_800F9448(void);
int TItemDrop__sub_800F94BC(void);
void *destroy__9TItemDropFPvs(void *arg0, s16 arg1);
int fn_800F953C(void* p);
int fn_800F955C(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
int set_stream_and_load_file__6TLobbyFi(void*);

extern M2C_UNK lbl_8049C658[];

void *destroy__9TItemDropFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C658;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TItemDrop__sub_800F9448(void) { return 0; }
int TItemDrop__sub_800F94BC(void) { return 0; }
int fn_800F953C(void* p) { return safe_free__23TAdSinglePlyChrSelectGCFUi(p); }
int fn_800F955C(void* p) { return set_stream_and_load_file__6TLobbyFi(p); }

}
