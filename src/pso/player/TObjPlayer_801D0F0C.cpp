#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_801D0F0C { char pad[0x8]; };
struct VObj_801D0F0C : Base_801D0F0C {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual int m23();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

short query_child_state2__10TObjPlayerFPv(void *arg0);
void release_control_lock__10TObjPlayerFPv(void* p);
void clear_flag_200__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D0F70(void* p);
void* get_field4_ptr__10TObjPlayerFPv(void* p);
int copy_position__10TObjPlayerFPv(void* p);
void set_float_param__10TObjPlayerFis(s32 arg0, s16 arg1);
M2C_UNK set_field_3c__10TObjPlayerFPvf(s32, f32);
int VecCopy__FP3VecPC3Vec(void*);

short query_child_state2__10TObjPlayerFPv(void *arg0) {
    struct VObj_801D0F0C *o = (struct VObj_801D0F0C *)M2C_FIELD(arg0, void **, 0x380);
    return o->m23();
}

void release_control_lock__10TObjPlayerFPv(void* p) { clear_flag_200__10TObjPlayerFPv((void*)(p)); }
void clear_flag_200__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x334) &= 0xfffffdff; }
void TObjPlayer__sub_801D0F70(void* p) { *(u32*)((char*)p + 0x334) |= 0x200; }
void* get_field4_ptr__10TObjPlayerFPv(void* p) { return (char*)p + 0x4; }
int copy_position__10TObjPlayerFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x4); }

void set_float_param__10TObjPlayerFis(s32 arg0, s16 arg1) {
    set_field_3c__10TObjPlayerFPvf(arg0 + 0x4AC, (f32) (s32) arg1);
}

}
