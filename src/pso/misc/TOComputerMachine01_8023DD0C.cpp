#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8023DD0C { u8 type; u8 pad[3]; u32 f4; };

struct Tbl_8023DD0C { Ent_8023DD0C *entries; u32 count; };

struct Ent_8023DD60 { u8 type; u8 pad[3]; u32 f4; };

struct Tbl_8023DD60 { Ent_8023DD60 *entries; u32 count; };

struct UV_8023DDC8 { s16 u; s16 v; };

struct Arr_8023DDC8 { u8 type; u8 pad; u16 count; u8 pad2[4]; UV_8023DDC8 *uv; u8 pad3[4]; };

struct Model_8023DDC8 { Arr_8023DDC8 *arrays; u8 pad[4]; void *s0; void *s1; };

extern "C" {
void TObjPlayer__sub_8023E034(void **arg0);
s32 has_texture_scroll_entry(Tbl_8023DD0C *t, u16 id);
void set_ginja_texture_wrap_repeat(Tbl_8023DD60 *t);
s32 has_texture_scroll_entry(Tbl_8023DD0C *t, u16 id);
void set_ginja_texture_wrap_repeat(Tbl_8023DD60 *t);
void DCFlushRangeNoSync(void *, u32);
void scroll_ginja_mesh_uvs(Model_8023DDC8 *self, s16 du, s16 dv, u16 cmd, s32 rewrite);
void TObjPlayer__sub_8023E034(void **arg0);
void TObjPlayer__sub_8023DEE0(s16 *p, s16 a, s16 b, u16 id);
}

extern "C" {

s32 has_texture_scroll_entry(Tbl_8023DD0C *t, u16 id) {
    s32 found = 0;
    if (t != 0) {
        Ent_8023DD0C *e = t->entries;
        u32 i;
        for (i = 0; i < t->count; i++) {
            if (e->type == 8 && id == (e->f4 & 0x1FFF)) {
                found = 1;
            }
            e++;
        }
    }
    return found;
}

void set_ginja_texture_wrap_repeat(Tbl_8023DD60 *t) {
    if (t != 0) {
        Ent_8023DD60 *e = t->entries;
        u32 i;
        for (i = 0; i < t->count; i++, e++) {
            if (e->type == 8) {
                e->f4 &= ~0xC0000;
                e->f4 |= 0x40000;
                e->f4 &= ~0x30000;
                e->f4 |= 0x10000;
            }
        }
    }
}

void scroll_ginja_mesh_uvs(Model_8023DDC8 *self, s16 du, s16 dv, u16 cmd, s32 rewrite) {
    s32 found = 0;
    Arr_8023DDC8 *a;
    if (self->s0 != 0 && has_texture_scroll_entry((Tbl_8023DD0C *)(self->s0), cmd) == 1) {
        found = 1;
        if (rewrite != 0) {
            set_ginja_texture_wrap_repeat((Tbl_8023DD60 *)(self->s0));
        }
    }
    if (self->s1 != 0 && has_texture_scroll_entry((Tbl_8023DD0C *)(self->s1), cmd) == 1) {
        found = 1;
        if (rewrite != 0) {
            set_ginja_texture_wrap_repeat((Tbl_8023DD60 *)(self->s1));
        }
    }
    if (found != 0) {
        for (a = self->arrays; a != 0 && a->type != 0xFF; a++) {
            if (a->type == 5 || a->type == 6) {
                u16 n = a->count;
                UV_8023DDC8 *uv = a->uv;
                s32 i;
                for (i = 0; i < n; i++) {
                    uv->u += du;
                    uv->v += dv;
                    uv++;
                }
                DCFlushRangeNoSync(a->uv, a->count * 4);
            }
        }
    }
}

void TObjPlayer__sub_8023DEE0(s16 *p, s16 a, s16 b, u16 id) {
    s16 dy;
    s16 dx;
    s32 t;
    u16 n;
    s16 c;
    dx = a % 256;
    dy = b % 256;
    while ((t = (u8)*p) != 0xFF) {
        if (t == 8 && (p[1] & 0x1FFF) == id) {
            *p &= ~0x3000;
            TObjPlayer__sub_8023E034((void **)&p);
            p += 2;
            n = *p & 0x1FFF;
            p++;
            while (n != 0) {
                c = *p;
                if (c < 0) {
                    c = -c;
                }
                p++;
                while (c != 0) {
                    c--;
                    *++p += dx;
                    *++p += dy;
                    p++;
                }
                n--;
            }
        } else {
            TObjPlayer__sub_8023E034((void **)&p);
        }
    }
}

void TObjPlayer__sub_8023E034(void **arg0) {
    s16 temp_r0;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0));
    temp_r0 = M2C_FIELD(temp_r5, s16 *, 0);
    if ((s32) (u8) temp_r0 == 0xFF) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 2;
        return;
    }
    if ((s16) (u8) temp_r0 == 0) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 2;
        return;
    }
    if ((s16) (u8) temp_r0 == 1) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 2;
        return;
    }
    if ((s16) (u8) temp_r0 == 2) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 2;
        return;
    }
    if ((s16) (u8) temp_r0 == 3) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 2;
        return;
    }
    if ((s16) (u8) temp_r0 == 5) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 2;
        return;
    }
    if ((s16) (u8) temp_r0 == 4) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 2;
        return;
    }
    if ((s16) (u8) temp_r0 == 8) {
        M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + 4;
        return;
    }
    M2C_FIELD(arg0, u8 **, 0) = (u8 *)(temp_r5) + ((M2C_FIELD(temp_r5, s16 *, 2) + 2) * 2);
}

}
