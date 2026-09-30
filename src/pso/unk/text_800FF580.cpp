#include "types.h"
struct Vec_800FF8CC {
    f32 x, y, z;
};

struct Src_800FF8CC {
    s8 count;
    u8 pad[3];
    Vec_800FF8CC rot;
    u8 pad2[8];
};

struct Pos_800FF8CC {
    u32 f0;
    Vec_800FF8CC v;
};

struct Self_800FF8CC {
    u8 pad[0x1C];
    s32 num;
    Src_800FF8CC *src;
    Pos_800FF8CC *pos;
    s32 arg;
    Vec_800FF8CC *out;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_800FF8CC *, const Vec_800FF8CC *);
Vec_800FF8CC *alloc__22TQuestVmDownLoadServerFPv(s32);
void TBoss4Zako__sub_803D8910(Vec_800FF8CC *, Vec_800FF8CC *);
void fn_800FF8CC(Self_800FF8CC *self, Src_800FF8CC *src, Pos_800FF8CC *pos, s32 arg);
}

extern "C" {

void fn_800FF8CC(Self_800FF8CC *self, Src_800FF8CC *src, Pos_800FF8CC *pos, s32 arg) {
    s32 total;
    Src_800FF8CC *s;
    Pos_800FF8CC *p;
    Vec_800FF8CC *out;
    s32 n;
    total = 0;
    self->src = src;
    self->pos = pos;
    self->arg = arg;
    self->num = 0;
    for (s = src; s->count >= 2; s++) {
        total += s->count;
        self->num++;
    }
    self->out = alloc__22TQuestVmDownLoadServerFPv(total * 0xC);
    s = self->src;
    p = self->pos;
    out = self->out;
    for (; s->count >= 2; s++, p++) {
        Vec_800FF8CC v = p->v;
        for (n = s->count; n > 0; n--, out++) {
            VecCopy__FP3VecPC3Vec(out, &v);
            TBoss4Zako__sub_803D8910(&v, &s->rot);
        }
    }
}

}
