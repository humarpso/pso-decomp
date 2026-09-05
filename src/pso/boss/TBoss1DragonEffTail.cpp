#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual M2C_UNK m20(s32, f32);
};
extern "C" {
M2C_UNK TBoss1Dragon__sub_8002AB6C(void *);
s32 check_v2_mode__9TObjEneDDFv();
extern const f32 lbl_805D8158;
void TBoss1DragonEffTail__vt20(u8 *arg0, u8 *arg1);
}

extern "C" {

void TBoss1DragonEffTail__vt18(s32 arg0, s32 arg1);
void *__dt__19TBoss1DragonEffTailFv(void *arg0, s16 arg1);
void disable__19TBoss1DragonEffTailFPv(void* p);
void enable__19TBoss1DragonEffTailFPv(void* p);
int is_visible__19TBoss1DragonEffTailFPv(void* p);
void render__19TBoss1DragonEffTailFv(void);
M2C_UNK TBoss4Zako__sub_803D8910(s32, s32, s32);
void TBoss8Dragon__sub_800BC5A0(void *, int);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
int fn_8002B094(void*);

void render__19TBoss1DragonEffTailFv(void) {  }

void TBoss1DragonEffTail__vt18(s32 arg0, s32 arg1) {
    TBoss4Zako__sub_803D8910(arg1 + 0x308, arg0 + 0xC0, arg0);
}

void TBoss1DragonEffTail__vt20(u8 *arg0, u8 *arg1) {
    ((VObj_18 *)(arg1))->m20(M2C_FIELD(arg0, s32 *, 0xAC), lbl_805D8158);
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        TBoss1Dragon__sub_8002AB6C((void *) (arg1));
    }
}

void enable__19TBoss1DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 1; is_visible__19TBoss1DragonEffTailFPv((void*)(p)); }
void disable__19TBoss1DragonEffTailFPv(void* p) { *(int*)((char*)p + 0xbc) = 0; is_visible__19TBoss1DragonEffTailFPv((void*)(p)); }
int is_visible__19TBoss1DragonEffTailFPv(void* p) { return fn_8002B094(*(void**)((char*)p + 0xb8)); }

extern M2C_UNK __vt__19TBoss1DragonEffTail[];

void *__dt__19TBoss1DragonEffTailFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TBoss1DragonEffTail;
        TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0xB8), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0xB8) = 0;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
