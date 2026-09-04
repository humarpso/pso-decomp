#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021E524_8021E4C4 { char pad[0x18]; };
struct VObj_8021E524_8021E4C4 : Base_8021E524_8021E4C4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021E55C_8021E4C4 { char pad[0x18]; };
struct VObj_8021E55C_8021E4C4 : Base_8021E55C_8021E4C4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

int TJudgmentSequence__sub_8021E510(int a0);
void TShopGetItemWindow__vt4(void *arg0);
void TShopGetItemWindow__vt5(void *arg0);
void *create__17TJudgmentSequenceFPv(void *arg0);
void *TJudgmentSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TJudgmentSequenceFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TJudgmentSequence__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TJudgmentSequence__data_80513E80[];
int TJudgmentSequence__sub_8021E510(int a0) {  return TJudgmentSequence__data_80513E80[a0]; }

void TShopGetItemWindow__vt5(void *arg0) {
    struct VObj_8021E524_8021E4C4 *o = (struct VObj_8021E524_8021E4C4 *)M2C_FIELD(arg0, void **, 0x5C);
    if (o != NULL) {
        o->m5();
    }
}

void TShopGetItemWindow__vt4(void *arg0) {
    struct VObj_8021E55C_8021E4C4 *o = (struct VObj_8021E55C_8021E4C4 *)M2C_FIELD(arg0, void **, 0x5C);
    if (o != NULL) {
        o->m4();
    }
}

}
