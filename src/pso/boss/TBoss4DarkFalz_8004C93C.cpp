#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TBoss4DarkFalz__sub_8004D990(u8 *arg0);
}

extern "C" {

void TBoss4DarkFalz__sub_8004D29C(void* p);
int TBoss4DarkFalz__sub_8004D8C8(void);
int TBoss4DarkFalz__sub_8004D92C(void);
void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v);
void init_timer__14TBoss4DarkFalzFPv(void* a0);
void start_demo__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004AB90(void*, void*);
int TBoss4DarkFalz__sub_8004B20C(void*, void*);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004B8F8(void*);
int TBoss4DarkFalz__sub_8004BA70(void*);
int TLobby__sub_80227220(void*);
int check_demo_mode__10TObjPlayerFv(void*);
int create__11TObjDFDemoFFPv(void*);
int create__14TObjDFUsoTowerFPv(void);
int fn_8036A514(void*);

    extern int lbl_805D4D68;
void init_timer__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 30; lbl_805D4D68 = 1; *(int*)((char*)a0 + 0x394) = create__14TObjDFUsoTowerFPv(); TBoss4DarkFalz__sub_8004B77C(a0); }

void start_demo__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004B8F8(p); TBoss4DarkFalz__sub_8004AB90(p, (void*)1); TBoss4DarkFalz__sub_8004BA70(p); create__11TObjDFDemoFFPv(p); TLobby__sub_80227220((void*)1); fn_8036A514((void*)23); *(int*)((char*)p + 0x380) = 120; }

void TBoss4DarkFalz__sub_8004D29C(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TBoss4DarkFalz__sub_8004B20C(p, (void*)1); } }

int TBoss4DarkFalz__sub_8004D8C8(void) { return 0; }
int TBoss4DarkFalz__sub_8004D92C(void) { return 0; }

s32 TBoss4DarkFalz__sub_8004D990(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x388) - M2C_FIELD(arg0, s32 *, 0x38C);
}

void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }

}
