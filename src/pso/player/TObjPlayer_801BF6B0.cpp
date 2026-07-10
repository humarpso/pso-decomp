#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801BF548();
s32 TObjPlayer__sub_801BF640();
int TWindowSubStatusDisp__sub_801059B4(void*);
void* TObjPlayer__sub_801BF72C(void* p);
f32 TObjPlayer__sub_801BF6B0(void* p);
void* TObjPlayer__sub_801BF6B8(void* p);
void TObjPlayer__sub_801BF6C0(void* p, f32 v);
void TObjPlayer__sub_801BF6C8(void* p, f32 a, f32 b);
void TObjPlayer__sub_801BF6D4(void* p, s16 v);
void TObjPlayer__sub_801BF6DC(void* p, s16 v);
int TObjPlayer__sub_801BF6E4(void* p);
int TObjPlayer__sub_801BF708(void* p);
void TObjPlayer__sub_801BF7B8(void* p);
void TObjPlayer__sub_801BF7F4(void* p, s32 v);
void TObjPlayer__sub_801BF7FC(void* p, s16 v);
void TObjPlayer__sub_801BF804(void* p, s16 v);
void TObjPlayer__sub_801BF80C(void* p, s16 v);
f32 TObjPlayer__sub_801BF814(void* p);
int TObjPlayer__sub_801BF81C(void* p);
int TObjPlayer__sub_801BF840(void* p);
int TObjPlayer__sub_801BF864(void* p);
int TObjPlayer__sub_801BF888(void* p);
int TObjPlayer__sub_801BF8AC(void* p);
int TObjPlayer__sub_801BF8CC(void* p);
void TObjPlayer__sub_801BF914(void);
s16 TObjPlayer__sub_801BF92C(void* p);
void* TObjPlayer__sub_801BF934(void* p);
void TObjPlayer__sub_801BF93C(void* p, s16 v);
void* TObjPlayer__sub_801BF944(void* p);
s32 TObjPlayer__sub_801BF94C(void* p);
void TObjPlayer__sub_801BF954(void* p, s32 v);
s32 TObjPlayer__sub_801BF95C(void* p);
int fn_8001BED8(void*, int);
int fn_8001BF40(void*);
int fn_8013DF3C(void*);
int fn_8013DF44(void*);

f32 TObjPlayer__sub_801BF6B0(void* p) { return *(f32*)((char*)p + 0x8); }
void* TObjPlayer__sub_801BF6B8(void* p) { return (char*)p + 0xc; }
void TObjPlayer__sub_801BF6C0(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void TObjPlayer__sub_801BF6C8(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xc) = a; *(f32*)((char*)p + 0x10) = b; }
void TObjPlayer__sub_801BF6D4(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801BF6DC(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
int TObjPlayer__sub_801BF6E4(void* p) { return fn_8013DF3C((char*)p + 0x4); }
int TObjPlayer__sub_801BF708(void* p) { return fn_8013DF44((char*)p + 0x4); }
void* TObjPlayer__sub_801BF72C(void* p) { TWindowSubStatusDisp__sub_801059B4(p); *(short*)((char*)p + 0x18) = 0; *(short*)((char*)p + 0x16) = 0; return p; }
s32 update_timer__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    if (TObjPlayer__sub_801BF548() != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 4) - 1;
        M2C_FIELD(arg0, s32 *, 4) = temp_r0;
        if (temp_r0 < 0) {
            TObjPlayer__sub_801BF7B8(arg0);
        }
    }
    return M2C_FIELD(arg0, s32 *, 4);
}
void TObjPlayer__sub_801BF7B8(void* p) { *(s32*)((char*)p + 0x4) = -1; }
void TObjPlayer__sub_801BF7C4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = TObjPlayer__sub_801BF640();
}
void TObjPlayer__sub_801BF7F4(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801BF7FC(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801BF804(void* p, s16 v) { *(s16*)((char*)p + 0x8) = v; }
void TObjPlayer__sub_801BF80C(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
f32 TObjPlayer__sub_801BF814(void* p) { return *(f32*)((char*)p + 0x0); }
int TObjPlayer__sub_801BF81C(void* p) { return fn_8001BED8(p, 16); }
int TObjPlayer__sub_801BF840(void* p) { return fn_8001BED8(p, 8); }
int TObjPlayer__sub_801BF864(void* p) { return fn_8001BED8(p, 4); }
int TObjPlayer__sub_801BF888(void* p) { return fn_8001BED8(p, 2); }
int TObjPlayer__sub_801BF8AC(void* p) { return TObjPlayer__sub_801BF8CC(p); }
int TObjPlayer__sub_801BF8CC(void* p) { return fn_8001BF40(p); }

}
