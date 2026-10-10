#include "pso/misc/TWindowSubStatusDisp.h"
extern "C" {
s8 get_type__20TWindowSubStatusDispFPv(s32);
extern "C" u8 lbl_805DD6E0[];
extern "C" u8 lbl_805DD6E4[];
extern "C" u8 lbl_805DD6E8[];
extern "C" u8 lbl_805DD6EC[];
extern "C" u8 lbl_805DD6F0[];
void *TWindowSubStatusDisp__summary_page_layout[135] = {
    (void *)0x12, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x43520000, (void *)0x0,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E0,
    (void *)0x4, (void *)0x43868000, (void *)0x0, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x1, (void *)0x3,
    (void *)0x0, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x3, (void *)0x0,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x7, (void *)0x43878000, (void *)0x41a00000,
    (void *)0x42000000, (void *)0x42000000, (void *)0x0, (void *)0x0,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x4, (void *)0x3,
    (void *)0x0, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x3, (void *)0x43000000,
    (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x43670000, (void *)0x42700000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x3, (void *)0x43670000, (void *)0x42700000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E8, (void *)0x3,
    (void *)0x0, (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x3, (void *)0x43000000,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x43670000, (void *)0x42a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x3, (void *)0x43670000, (void *)0x42a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E8, (void *)0x3,
    (void *)0x0, (void *)0x42c80000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x3, (void *)0x43000000,
    (void *)0x42c80000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x43670000, (void *)0x42c80000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x3, (void *)0x43670000, (void *)0x42c80000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0,
};
void *TWindowSubStatusDisp__stat_page_layout[254] = {
    (void *)0x24, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42600000, (void *)0x0,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4,
    (void *)0x4, (void *)0x42e20000, (void *)0x0, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42e60000, (void *)0x0, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6EC, (void *)0x4, (void *)0x432b0000,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x432b0000, (void *)0x0,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6F0,
    (void *)0x3, (void *)0x0, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42600000, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x42e20000,
    (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42e60000, (void *)0x41a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6EC,
    (void *)0x4, (void *)0x432b0000, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x432b0000, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6F0, (void *)0x3, (void *)0x0,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42600000, (void *)0x42200000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4,
    (void *)0x4, (void *)0x42e20000, (void *)0x42200000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42e60000, (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6EC, (void *)0x4, (void *)0x432b0000,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x432b0000, (void *)0x42200000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6F0,
    (void *)0x3, (void *)0x0, (void *)0x42700000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42600000, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x42e20000,
    (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42e60000, (void *)0x42700000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6EC,
    (void *)0x4, (void *)0x432b0000, (void *)0x42700000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x432b0000, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6F0, (void *)0x3, (void *)0x0,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42600000, (void *)0x42a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4,
    (void *)0x4, (void *)0x42e20000, (void *)0x42a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42e60000, (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6EC, (void *)0x4, (void *)0x432b0000,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x432b0000, (void *)0x42a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6F0,
    (void *)0x3, (void *)0x0, (void *)0x42c80000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42600000, (void *)0x42c80000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x42e20000,
    (void *)0x42c80000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42e60000, (void *)0x42c80000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6EC,
    (void *)0x4, (void *)0x432b0000, (void *)0x42c80000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x432b0000, (void *)0x42c80000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6F0,
};
void *TWindowSubStatusDisp__resistance_layout[212] = {
    (void *)0x1e, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42600000, (void *)0x0,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4,
    (void *)0x4, (void *)0x42e20000, (void *)0x0, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42e60000, (void *)0x0, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6EC, (void *)0x4, (void *)0x432b0000,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x432b0000, (void *)0x0,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6F0,
    (void *)0x3, (void *)0x0, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42600000, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x42e20000,
    (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42e60000, (void *)0x41a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6EC,
    (void *)0x4, (void *)0x432b0000, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x432b0000, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6F0, (void *)0x3, (void *)0x0,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42600000, (void *)0x42200000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4,
    (void *)0x4, (void *)0x42e20000, (void *)0x42200000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42e60000, (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6EC, (void *)0x4, (void *)0x432b0000,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x432b0000, (void *)0x42200000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6F0,
    (void *)0x3, (void *)0x0, (void *)0x42700000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42600000, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x42e20000,
    (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42e60000, (void *)0x42700000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6EC,
    (void *)0x4, (void *)0x432b0000, (void *)0x42700000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x432b0000, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6F0, (void *)0x3, (void *)0x0,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42600000, (void *)0x42a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4,
    (void *)0x4, (void *)0x42e20000, (void *)0x42a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42e60000, (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6EC, (void *)0x4, (void *)0x432b0000,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x432b0000, (void *)0x42a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6F0,
};
void *TWindowSubStatusDisp__record_summary_layout[114] = {
    (void *)0x10, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x0, (void *)0x41a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x3, (void *)0x42600000, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4,
    (void *)0x430a0000, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x3, (void *)0x0,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x42600000, (void *)0x42200000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4,
    (void *)0x4, (void *)0x430a0000, (void *)0x42200000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x0, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x3, (void *)0x42600000,
    (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x430a0000, (void *)0x42700000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x3, (void *)0x0, (void *)0x42a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x3,
    (void *)0x42600000, (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4, (void *)0x430a0000,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x0, (void *)0x42c80000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
    (void *)0x3, (void *)0x43060000, (void *)0x42c80000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x0, (void *)&lbl_805DD6E4, (void *)0x4,
    (void *)0x43580000, (void *)0x42c80000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x0, (void *)0x0,
};
void *TWindowSubStatusDisp__rank_time_records_layout[114] = {
    (void *)0x10, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x0, (void *)0x41a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x2, (void *)0x0,
    (void *)0x3, (void *)0x42d40000, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x2, (void *)&lbl_805DD6E4, (void *)0x3,
    (void *)0x42e80000, (void *)0x41a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x2, (void *)0x0, (void *)0x3, (void *)0x0,
    (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x2,
    (void *)0x0, (void *)0x3, (void *)0x42d40000, (void *)0x42200000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x2, (void *)&lbl_805DD6E4,
    (void *)0x3, (void *)0x42e80000, (void *)0x42200000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x2, (void *)0x0, (void *)0x3,
    (void *)0x0, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x2, (void *)0x0, (void *)0x3, (void *)0x42d40000,
    (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x2,
    (void *)&lbl_805DD6E4, (void *)0x3, (void *)0x42e80000, (void *)0x42700000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x2, (void *)0x0,
    (void *)0x3, (void *)0x0, (void *)0x42a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x2, (void *)0x0, (void *)0x3,
    (void *)0x42d40000, (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x2, (void *)&lbl_805DD6E4, (void *)0x3, (void *)0x42e80000,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x2,
    (void *)0x0, (void *)0x3, (void *)0x0, (void *)0x42c80000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x2, (void *)0x0,
    (void *)0x3, (void *)0x42d40000, (void *)0x42c80000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x2, (void *)&lbl_805DD6E4, (void *)0x3,
    (void *)0x42e80000, (void *)0x42c80000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x2, (void *)0x0,
};
void *TWindowSubStatusDisp__numbered_times_layout[72] = {
    (void *)0xa, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x0,
    (void *)0x0, (void *)0x3, (void *)0x0, (void *)0x41a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x2, (void *)0x0,
    (void *)0x3, (void *)0x0, (void *)0x42200000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x2, (void *)0x0, (void *)0x3,
    (void *)0x0, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x2, (void *)0x0, (void *)0x3, (void *)0x0,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x2,
    (void *)0x0, (void *)0x3, (void *)0x0, (void *)0x42c80000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x2, (void *)0x0,
    (void *)0x3, (void *)0x43200000, (void *)0x41a00000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x2, (void *)0x0, (void *)0x3,
    (void *)0x43200000, (void *)0x42200000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x2, (void *)0x0, (void *)0x3, (void *)0x43200000,
    (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x2,
    (void *)0x0, (void *)0x3, (void *)0x43200000, (void *)0x42a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x2, (void *)0x0,
};
void *TWindowSubStatusDisp__window_layout[5] = {
    (void *)0x439c0000, (void *)0x43200000, (void *)0x47438200, (void *)0x0,
    (void *)0x3,
};
#define TWindowSubStatusDisp__window_layout ((u8 *)TWindowSubStatusDisp__window_layout)

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct SD_80281760 { s32 f0; u8 pad4[0x14]; void *vt; u8 pad1c[4]; s16 f20; u8 pad22[0x3E]; s16 f60; s16 f62; u8 pad64[4]; void *f68; f32 f6c; f32 f70; };

extern "C" {
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK update_window_entry_list(void *, void *);
M2C_UNK destroy_all_items__20TWindowSubStatusDispFPv(void *);
M2C_UNK fn_8026C7AC(int, int);
s32 handle_list_page_flip_input(int);
M2C_UNK dispatch_page_update__20TWindowSubStatusDispFv(void *);
M2C_UNK dispatch_page_init__20TWindowSubStatusDispFv(void *);
extern M2C_UNK lbl_805DD6F4;
void TWindowSubStatusDisp__sub_80281644(u8 *arg0);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
void construct_base__9TWindowDDFPvPvsPv(void *, void *, s16, s32);
void *init__21TWindowSubComCardListFPviii(void *, int, int, s32);
s32 get_window_layout_position(int);
M2C_UNK dispatch_page_init__20TWindowSubStatusDispFv(void *);

extern M2C_UNK __vt__20TWindowSubStatusDisp[];
extern s32 TWindowSubStatusDisp__class_name;
extern const f32 lbl_805DD70C;
SD_80281760 *TWindowSubStatusDisp__ct(SD_80281760 *arg0, s32 arg1);
}

extern "C" {

void *dt__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void update_status__20TWindowSubStatusDispFPv(u8 *arg0);
u32 get_player_by_client_id(s16);
s32 setup_window_draw_context(void *, void *);
M2C_UNK draw_window_frame(void *, s32);
M2C_UNK draw_visible_window_entries(void *, void *, s32);
M2C_UNK draw_list_page_indicator(s32, s32);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);

}
#pragma defer_codegen on
void TWindowSubStatusDisp::dispatch_page_init() {
    static void (TWindowSubStatusDisp::*page0[3])() = {
        &TWindowSubStatusDisp::vt0, &TWindowSubStatusDisp::vt1, &TWindowSubStatusDisp::vt2,
    };
    static void (TWindowSubStatusDisp::*page1[4])() = {
        &TWindowSubStatusDisp::vt3, &TWindowSubStatusDisp::vt4, &TWindowSubStatusDisp::vt5,
        &TWindowSubStatusDisp::vt5,
    };
    static void (TWindowSubStatusDisp::*page2[4])() = {
        &TWindowSubStatusDisp::vt7, &TWindowSubStatusDisp::vt4, &TWindowSubStatusDisp::vt5,
        &TWindowSubStatusDisp::vt5,
    };

    switch (m_60) {
    case 0:
        (this->*page0[get_type__20TWindowSubStatusDispFPv(m_68)])();
        break;
    case 1:
        (this->*page1[get_type__20TWindowSubStatusDispFPv(m_68)])();
        break;
    case 2:
        (this->*page2[get_type__20TWindowSubStatusDispFPv(m_68)])();
        break;
    }
}

void TWindowSubStatusDisp::dispatch_page_update() {
    static void (TWindowSubStatusDisp::*page0[3])() = {
        &TWindowSubStatusDisp::vt11, &TWindowSubStatusDisp::vt12, &TWindowSubStatusDisp::vt13,
    };
    static void (TWindowSubStatusDisp::*page1[4])() = {
        &TWindowSubStatusDisp::vt14, &TWindowSubStatusDisp::vt15, &TWindowSubStatusDisp::vt16,
        &TWindowSubStatusDisp::vt16,
    };
    static void (TWindowSubStatusDisp::*page2[4])() = {
        &TWindowSubStatusDisp::vt18, &TWindowSubStatusDisp::vt15, &TWindowSubStatusDisp::vt16,
        &TWindowSubStatusDisp::vt16,
    };

    switch (m_60) {
    case 0:
        (this->*page0[get_type__20TWindowSubStatusDispFPv(m_68)])();
        break;
    case 1:
        (this->*page1[get_type__20TWindowSubStatusDispFPv(m_68)])();
        break;
    case 2:
        (this->*page2[get_type__20TWindowSubStatusDispFPv(m_68)])();
        break;
    }
}

#pragma defer_codegen off

extern "C" {
void update_status__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    if (get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20)) != 0U) {
        temp_r3 = setup_window_draw_context(arg0, arg0 + 0x6C);
        draw_window_frame(arg0, temp_r3);
        draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
        draw_list_page_indicator(M2C_FIELD(arg0, s32 *, 0x68), temp_r3);
    }
}

extern M2C_UNK __vt__20TWindowSubStatusDisp[];

void TWindowSubStatusDisp__sub_80281644(u8 *arg0) {
  s16 temp_r3;
  if (!((*((s32 *) (((s8 *) arg0) + 0x2C))) & 2))
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = 0x01000000;
  }
  if ((handle_list_page_flip_input((int) (*((s32 *) (((s8 *) arg0) + 0x68)))) != 0) || (((s16) (*((s16 *) (((s8 *) arg0) + 0x60)))) != ((s16) (*((s16 *) (((s8 *) arg0) + 0x62))))))
  {
    temp_r3 = *((s16 *) (((s8 *) arg0) + 0x62));
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x60)))) != temp_r3)
    {
      *((s16 *) (((s8 *) arg0) + 0x60)) = *((s16 *) (((s8 *) arg0) + 0x62));
      fn_8026C7AC((int) (*((s32 *) (((s8 *) arg0) + 0x68))), (int) ((s8) (*((u8 *) (((s8 *) (((u8 *) (&lbl_805DD6F4)) + (*((s16 *) (((s8 *) arg0) + 0x60))))) + 0)))));
    }
    destroy_all_items__20TWindowSubStatusDispFPv((void *) (((u8 *) arg0) + 0x24));
    dispatch_page_init__20TWindowSubStatusDispFv((void *) arg0);
  }
  dispatch_page_update__20TWindowSubStatusDispFv((void *) arg0);
  initialize_subwindow__9TWindowDDFPv((void *) arg0);
  update_window_entry_list((void *) arg0, (void *) (((u8 *) arg0) + 0x24));
}

void *dt__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowSubStatusDisp;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x68), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
SD_80281760 *TWindowSubStatusDisp__ct(SD_80281760 *arg0, s32 arg1) {
    void *w;
    construct_base__9TWindowDDFPvPvsPv(arg0, TWindowSubStatusDisp__window_layout, arg1, get_window_layout_position(0x19));
    arg0->vt = ((u8 *)&__vt__20TWindowSubStatusDisp);
    arg0->f0 = TWindowSubStatusDisp__class_name;
    arg0->f20 = arg1;
    arg0->f60 = 0;
    arg0->f62 = arg0->f60;
    arg0->f6c = lbl_805DD70C;
    arg0->f70 = lbl_805DD70C;
    w = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
    if (w != NULL) {
        w = init__21TWindowSubComCardListFPviii(w, 0, 3, arg1);
    }
    arg0->f68 = w;
    dispatch_page_init__20TWindowSubStatusDispFv(arg0);
    return arg0;
}

}
