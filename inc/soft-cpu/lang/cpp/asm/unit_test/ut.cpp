
#include "cpp/dsl_to_cpp.h"

#include "../asm.h"

int main() {

    printf("code: %lu\n", GetInstruction("hlt").code);
    printf("code: %lu\n", GetInstruction("add").code);
    printf("code: %lu\n", GetInstruction("div").code);
    printf("code: %lu\n", GetInstruction("mul").code);
    printf("code: %lu\n", GetInstruction("pop").code);
    printf("code: %lu\n", GetInstruction("push").code);
    printf("code: %lu\n", GetInstruction("sub").code);
    printf("code: %lu\n", GetInstruction("tututu").code);
    printf("code: %lu\n", GetInstruction("").code);

    return 0;
}

