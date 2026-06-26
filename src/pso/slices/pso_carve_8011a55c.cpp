#include "types.h"

extern "C" {

int fn_8011A55C(void);
int fn_8011A580(void);
void fn_8011A5A4(void);
int fn_80336E54(void*);

int fn_8011A55C(void) { return fn_80336E54((void*)(2)); }
int fn_8011A580(void) { return fn_80336E54((void*)(1)); }
void fn_8011A5A4(void) {  }

}
