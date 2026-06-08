#ifndef _DOLPHIN_CARDDIR_H_
#define _DOLPHIN_CARDDIR_H_

typedef struct CARDDirCheck {
 u8 padding0[56];
 u16 padding1;
 s16 checkCode;
 u16 checkSum;
 u16 checkSumInv;
} CARDDirCheck;

#endif
