#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t program[] = {
    0x5260,
    0x5920,
    0x192A,
    0xE406,
    0x6680,
    0x14A1,
    0x1243,
    0x193F,
    0x03FB,
    0xF025,
    0x0001,
    0x0002,
    0x0001,
    0x0002,
    0x0003,
    0x0001,
    0x0002,
    0x0001,
    0x0002,
    0x0001,
};

int main(int argc, char* *argv){
    char *outf = "simple_program.obj";
    FILE *f = fopen(outf, "wb");
    if(NULL==f){
        fprintf(stderr, "cannot write to file %s\n", outf);
    }
    size_t writ = fwrite(program, sizeof(uint16_t), sizeof(program), f);
    fprintf(stdout, "written size_t=%lu to file %s\n",writ, outf);
    fclose(f);
    return 0;

}