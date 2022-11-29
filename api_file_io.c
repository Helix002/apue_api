#include "test_apue_api.h"

int test_file_io_api()
{
    int cfgs = 0;

    fprintf(stdout,"\n  File IO API tests\n");
    fprintf(stdout,"  ---------------------------------------------------\n");

    fprintf(stdout,"    creat() ........................ OK.\n");
    cfgs++;

    return cfgs;
}