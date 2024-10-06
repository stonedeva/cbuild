#define CROSSBUILD_IMPLEMENTATION
#include "crossbuild.h"

int main(void)
{
    Builder* builder = cb_init("fox");
    cb_add_target(builder, "src/test1.c");
    cb_add_target(builder, "src/test2.c");
    cb_add_target(builder, "src/test3.c");
    cb_add_target(builder, "src/test4.c");

    cb_build(builder);

    return 0;
}
