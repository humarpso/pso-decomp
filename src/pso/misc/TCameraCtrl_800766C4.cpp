#include "types.h"

extern "C" {

short get_screen_width__11TCameraCtrlFv(void);
short get_screen_height__11TCameraCtrlFv(void);

    extern short TCameraCtrl__data_805D4DFC;
short get_screen_width__11TCameraCtrlFv(void) {  return TCameraCtrl__data_805D4DFC; }

    extern short TCameraCtrl__data_805D4DFA;
short get_screen_height__11TCameraCtrlFv(void) {  return TCameraCtrl__data_805D4DFA; }

}
