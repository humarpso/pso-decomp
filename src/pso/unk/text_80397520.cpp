#include "types.h"
struct Block_80397520 { Block_80397520 *prev; Block_80397520 *next; u32 max_size; u32 size; };

struct SubBlock_80397520 { u32 size; Block_80397520 *block; SubBlock_80397520 *prev; SubBlock_80397520 *next; };

struct FixBlock_80397520 { FixBlock_80397520 *prev_; FixBlock_80397520 *next_; u32 client_size_; };

struct PoolObj_80397520 { Block_80397520 *start_; u8 fix_start[0x30]; };

extern "C" {
void TLobby__sub_8039739C(Block_80397520 *);
void fn_80397654(PoolObj_80397520 *, void *, u32);
void fn_8039790C(Block_80397520 *, SubBlock_80397520 *);
void *memset(void *, int, u32);
extern PoolObj_80397520 lbl_80549410;
extern u8 lbl_805D7328;
void free(void *ptr);
}

extern "C" {

static inline PoolObj_80397520 *get_malloc_pool(void) {
    if (!lbl_805D7328) {
        memset(&lbl_80549410, 0, sizeof(PoolObj_80397520));
        lbl_805D7328 = 1;
    }
    return &lbl_80549410;
}
static inline Block_80397520 *unlink_80397520(PoolObj_80397520 *pool_obj, Block_80397520 *bp) {
    Block_80397520 *result = bp->next;
    if (result == bp) {
        result = 0;
    }
    if (pool_obj->start_ == bp) {
        pool_obj->start_ = result;
    }
    if (result != 0) {
        result->prev = bp->prev;
        result->prev->next = result;
    }
    bp->next = 0;
    bp->prev = 0;
    return result;
}
static inline int block_empty(Block_80397520 *bp) {
    SubBlock_80397520 *_sb = (SubBlock_80397520 *)((char *)bp + 16);
    int r = 0;
    if (!(_sb->size & 2) && (_sb->size & 0xFFFFFFF8) == (bp->size & 0xFFFFFFF8) - 24) {
        r = 1;
    }
    return r;
}
static inline void deallocate_from_var_pools(PoolObj_80397520 *pool_obj, void *ptr) {
    SubBlock_80397520 *sb = (SubBlock_80397520 *)((char *)ptr - 8);
    Block_80397520 *bp = (Block_80397520 *)((u32)sb->block & ~1);
    fn_8039790C(bp, sb);
    if (block_empty(bp)) {
        unlink_80397520(pool_obj, bp);
        TLobby__sub_8039739C(bp);
    }
}
static inline void pool_free(PoolObj_80397520 *pool, void *ptr) {
    PoolObj_80397520 *pool_obj;
    u32 size;
    if (ptr == 0) {
        return;
    }
    pool_obj = pool;
    size = !(*(u32 *)((char *)ptr - 4) & 1) ? (*(FixBlock_80397520 **)((char *)ptr - 4))->client_size_
                                            : (((SubBlock_80397520 *)((char *)ptr - 8))->size & 0xFFFFFFF8) - 8;
    if (size <= 68) {
        fn_80397654(pool_obj, ptr, size);
    } else {
        deallocate_from_var_pools(pool_obj, ptr);
    }
}
#pragma dont_inline off
#pragma inline_depth(8)
void free(void *ptr) {
    pool_free(get_malloc_pool(), ptr);
}

}
