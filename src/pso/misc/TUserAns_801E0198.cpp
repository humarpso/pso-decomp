#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct In_801E0198 { s32 w[16]; };

struct Big_801E0198 { s32 w[17]; };

struct Blk_801E0198 { s32 d; Big_801E0198 b; };

struct Pair_801E0198 { u8 bytes[8]; };

struct Tag_801E0198 { u8 b[8]; };

struct TUserAns_801E0198 {
    s32 a;
    Tag_801E0198 tag;
    s32 c;
    Pair_801E0198 p;
    Blk_801E0198 blk;
    u8 rest[0x20];
};

extern "C" {
int __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
void *fn_801DF61C(void *, void *);
TUserAns_801E0198 *__ct__8TUserAnsFRC8TUserAns(TUserAns_801E0198 *dst, TUserAns_801E0198 *src);
}

extern "C" {

TUserAns_801E0198 *__ct__8TUserAnsFRC8TUserAns(TUserAns_801E0198 *dst, TUserAns_801E0198 *src) {
    dst->a = src->a;
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&dst->tag, &src->tag);
    dst->c = src->c;
    dst->p = src->p;
    dst->blk = src->blk;
    fn_801DF61C(&dst->rest, &src->rest);
    return dst;
}

}
