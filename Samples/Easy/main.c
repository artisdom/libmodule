#include <modules.h>
// #include <module/modules.h>

/*
 * This function is automatically called before initing any module.
 * Use this function to eg: parse config needed to decide
 * whether to start some module.
 * There is no need to explicitly call it.
 */
void modules_pre_start() {
    printf("Press 'c' to start playing with your own doggo...\n");
}

int main() {
    /* Loop on our modules' events */
    modules_loop();
    return 0;
}
