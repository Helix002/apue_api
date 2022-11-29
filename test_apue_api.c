#include "test_apue_api.h"


int main (int argc, char **argv)
{
    int total = 0;

    total += test_file_io_api();

    fprintf(stdout,"\nAll API tests passed. \nThe APUE API was invoked %d times.\n",total);

    return 0;
}