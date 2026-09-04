#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TItemEquipBase__sub_8010A77C(void);
int TItemEquipBase__sub_8010A82C(void);
int TItemEquipBase__sub_8010A89C(void);
int TItemEquipBase__sub_8010AC60(void);
s32 set_parent__7TObjectFP7TObject(s32, s32);
int TObjPlayer__sub_8010A770(void);
int fn_8010A710(void);
void TWindowSubComCard__sub_80244888(s32 arg0);
s32 TWindowCtrlMain__sub_8024CE24();
int fn_8010A710(void);
int TObjPlayer__sub_8010A770(void);
int TItemEquipBase__sub_8010A77C(void);
int TItemEquipBase__sub_8010A82C(void);
int TItemEquipBase__sub_8010A89C(void);
int TItemEquipBase__sub_8010AC60(void);
s32 set_parent__7TObjectFP7TObject(s32, s32);
extern M2C_UNK __vt__14TItemEquipBase[];
void TWindowSubComCard__sub_80244888(s32 arg0);
}

extern "C" {

int TWindowSubComCard__sub_80244774(void);
f32 calc_offset__17TWindowSubComCardFPv(void *arg0);
s32 get_field_20__17TWindowSubComCardFPv(void* p);
void save_position__17TWindowSubComCardFPv(void* p);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TWindowCtrlMain__sub_8024CE24();
s32 TWindowSubAreaMapDisp__sub_80246948();
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
s32 set_parent__7TObjectFP7TObject(s32, s32);

    extern int lbl_805D3614;
int TWindowSubComCard__sub_80244774(void) {  return lbl_805D3614; }

s32 get_field_20__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x20); }

extern M2C_UNK lbl_8044E678;
extern f32 lbl_805DCAC8;
extern f32 lbl_805DCACC;

f32 calc_offset__17TWindowSubComCardFPv(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 0x22);
    if (temp_r3 != 0) {
        return lbl_805DCAC8 - ((f32) temp_r3 / lbl_805DCACC);
    }
    return lbl_805DCAC8;
}

struct Base_8010B054_8010A710 { char pad[0x18]; };
struct VObj_8010B054_8010A710 : Base_8010B054_8010A710 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19();
};
void TWindowSubComCard__sub_80244888(s32 arg0) {
    set_parent__7TObjectFP7TObject((s32)((void*)((void*)(arg0))), (s32)((void*)((void*)(TWindowCtrlMain__sub_8024CE24()))));
}

void save_position__17TWindowSubComCardFPv(void* p) { *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x30); *(f32*)((char*)p + 0x44) = *(f32*)((char*)p + 0x34); *(f32*)((char*)p + 0x48) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)p + 0x3c); }

}
