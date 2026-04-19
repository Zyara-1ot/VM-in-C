#include <stdio.h>
#include <stdint.h>

uint16_t program[] = {
    0xF026, // read number  R0
    0x1220, // R1 = R0
    0xF026, // read second number  R0
    0x1240, // R1 = R1 + R0
    0x1060, // R0 = R1
    0xF027, // print R0
    0xF025  // HALT
};

int main() {
    FILE *f = fopen("sum.obj", "wb");
    fwrite(program, sizeof(uint16_t),
           sizeof(program)/sizeof(uint16_t), f);
    fclose(f);
    return 0;
}
