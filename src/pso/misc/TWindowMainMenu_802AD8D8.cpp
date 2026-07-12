#include "types.h"

extern "C" {

extern const float lbl_805DE158;
void TWindowMainMenu__sub_802AD8D8(void *a0)
{
  int new_var;
  char *new_var2;
  *((float *) (((char *) a0) + 0xc)) = (*((float *) (((char *) a0) + 0x8)) = (*((float *) (((char *) a0) + 0x4)) = (*((float *) (((char *) a0) + 0x0)) = lbl_805DE158)));
  new_var2 = (char *) a0;
  *((unsigned char *) (new_var2 + 0x10)) = 0;
  *((unsigned char *) (new_var2 + 0x11)) = -((double) 1);
  *((unsigned char *) (new_var2 + 0x12)) = 0;
  new_var = 0x13;
  *((unsigned char *) (new_var2 + new_var)) = 0;
  *((unsigned char *) (new_var2 + 0x14)) = 0;
}

}
