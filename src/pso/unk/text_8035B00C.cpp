#include "types.h"
struct W_8035B00C
{
  s16 a;
  u16 b;
  s16 c;
  s16 d;
  s16 e;
};

extern "C" {
s16 ret_801D26AC();
void fn_8035B00C(W_8035B00C *arg0);
}

extern "C" {

typedef struct W_8035B00C W_8035B00C;
void fn_8035B00C(W_8035B00C *arg0) {
  int new_var;
  arg0->a = ret_801D26AC() & 0xFFFFu;
  arg0->b = 0xFFFF;
  arg0->e = (((new_var = (arg0->d = (arg0->c = 0)) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu;
}

}
