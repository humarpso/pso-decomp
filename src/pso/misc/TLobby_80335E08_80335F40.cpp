#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_80335F40(void);
void TLobby__sub_80335FE0(void);
void TLobby__sub_80335FE4(void);
int TLobby__sub_80336030(void* p);
void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1);
void *dt__6TLobbyFPvs(void *arg0, s16 arg1);
void* get_record__6TLobbyFi(int a0);
int TAdTrialAgreementGC__sub_8033596C(void*);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TLobby__sub_80335F40(void) {  }

extern M2C_UNK lbl_804EE470[];

void *dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE470;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804EE470[];

void *ct_with_parent__6TLobbyFPvPv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE470;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}

void TLobby__sub_80335FE0(void) {  }
void TLobby__sub_80335FE4(void) {  }

    extern unsigned char lbl_804EE9A4[];
void* get_record__6TLobbyFi(int a0) {  return (char*)lbl_804EE9A4 + a0 * 32; }

int TLobby__sub_80336030(void* p) { return TAdTrialAgreementGC__sub_8033596C(*(void**)((char*)p + 0x24)); }

}
