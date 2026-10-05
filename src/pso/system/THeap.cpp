// Adapted from pso-gc-reference (mrb0nk500) for GPOE8P (MWCC 2.6)

#include "pso/THeap.h"
#include <string.h>

THeap *obj_heap;
THeap *alt_heap;

#include "types.h"
struct V3_801412D0 { f32 x, y, z; };

extern "C" {
u32 calc_gx_tile_index(u32 x, u32 y, s16 w);
s32 is_in_range__10TObjPlayerFf(f32);
f64 TPlyPhotonChair__sub_80142624(f32);
s32 TObjPlayer__sub_801412D0(V3_801412D0 *v, V3_801412D0 *out);
}

void xfree(void *ptr);

void *xmalloc(size_t size);

void THeap::heap_free(void *ptr) {
    #define heap_ptr &ptr_u8[-sizeof(heap_node)]
    #define ptr_heap ((heap_node *)heap_ptr)
    const u8 *ptr_u8 = (u8 *)ptr;
    if (ptr == NULL) {
        return;
    } else {
        heap_node *prev_node = heap_nodes;
        heap_node *node;

        for (; node = prev_node->next, node < ptr_heap; prev_node = node);

        if (((u8 *)&ptr_heap->next + ptr_heap->remaining_size) == (u8 *)&node->next) {
            ptr_heap->next = node->next;
            ptr_heap->remaining_size += node->remaining_size;
        } else {
            ptr_heap->next = node;
        }

        if (((u8 *)&prev_node->next + prev_node->remaining_size) == heap_ptr) {
            prev_node->next = ptr_heap->next;
            prev_node->remaining_size += ptr_heap->remaining_size;
        } else {
            prev_node->next = ptr_heap;
        }
    }
    #undef ptr_heap
    #undef heap_ptr
}

void *THeap::heap_zalloc(size_t size) {
    void *ptr = heap_alloc(size);
    if (ptr != NULL) {
        memset(ptr, 0, size);
    }
    return ptr;
}

void *THeap::heap_alloc(size_t size) {
    heap_node *prev_node = heap_nodes;
    heap_node *node;
    heap_node *tmp;

    u32 node_size = (sizeof(heap_node) - 1) + align + size;
    node_size &= -align;

    for (; node = prev_node->next, node != NULL; prev_node = node) {
        if (node->remaining_size >= node_size) {
            if (node_size == node->remaining_size) {
                prev_node->next = node->next;
            } else {
                const u8 *next_u8 = (u8 *)&node->next;
                tmp = (heap_node *)&next_u8[node_size];

                tmp->next = node->next;
                tmp->remaining_size = node->remaining_size - node_size;

                node->remaining_size = node_size;
                prev_node->next = tmp;
            }
            return node + 1;
        }
    }
    return NULL;
}

THeap::~THeap() {
    xfree(heap_nodes);
}

THeap::THeap(size_t size, int alignment) {
    mbr_0x0C = 0;
    mbr_0x10 = 0;
    align = alignment;
    heap_nodes = (heap_node *)xmalloc(size);
    if (heap_nodes != NULL) {
        heap_node *tmp_node;
        heap_node *next_tmp_node;

        memset(heap_nodes, 0, size);

        tmp_node = heap_nodes;
        next_tmp_node = &tmp_node[1];
        tmp_node->next = next_tmp_node;

        heap_nodes->remaining_size = 0;

        next_tmp_node->next = NULL;
        next_tmp_node->remaining_size = size - sizeof(heap_node);
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __dl__5THeapFPv(void);
void __nw__5THeapFUl(void);
int GXSetTevSwapMode(int, int, int);
int GXSetTevSwapModeTable(int, int, int, int, int);
void setup_tev_swap__10TObjPlayerFv(void);
M2C_UNK xfree__FPv();
M2C_UNK xmalloc__FUl();

void __dl__5THeapFPv(void) {
    xfree__FPv();
}

void __nw__5THeapFUl(void) {
    xmalloc__FUl();
}

#pragma push
#pragma fp_contract on
s32 TObjPlayer__sub_801412D0(V3_801412D0 *v, V3_801412D0 *out) {
    V3_801412D0 a;
    V3_801412D0 b;
    V3_801412D0 n;
    f32 sq;
    f32 len;
    a.x = v[1].x - v[0].x;
    a.y = v[1].y - v[0].y;
    a.z = v[1].z - v[0].z;
    b.x = v[2].x - v[0].x;
    b.y = v[2].y - v[0].y;
    b.z = v[2].z - v[0].z;
    n.x = a.y * b.z - a.z * b.y;
    n.y = a.z * b.x - a.x * b.z;
    n.z = a.x * b.y - a.y * b.x;
    sq = n.x * n.x + n.y * n.y + n.z * n.z;
    if (is_in_range__10TObjPlayerFf(sq) != 0) {
        return 0;
    }
    len = TPlyPhotonChair__sub_80142624(sq);
    out->x = n.x / len;
    out->y = n.y / len;
    out->z = n.z / len;
    return 1;
}
#pragma pop

u32 calc_gx_tile_index(u32 x, u32 y, s16 w) {
    u32 r = ((x >> 2) << 4) + (x & 3);
    r += ((y >> 2) * w) << 2;
    r += (y & 3) << 2;
    return r;
}

}
