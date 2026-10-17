#include "types.h"
#include "pso/TObjItemOKWindow.h"

void *TObjItemOKWindow::create(void *arg0) {
    void *o = new TObjItemOKWindow((TObject *)arg0);
    return o;
}
