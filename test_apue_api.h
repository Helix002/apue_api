#ifndef TEST_APUE_API_H
#define TEST_APUE_API_H

#include <stdio.h>
#include <stdlib.h>

static inline void _test_failed(const char *file, int line)
{
  fprintf(stderr,"\n ***************************************************\n");
  fprintf(stderr," ***         A fatal error was detected.         ***\n");
  fprintf(stderr," ***************************************************\n");
  fprintf(stderr,"[INFO] Please make check %s at line %d.\n", file, line);

  abort();
}

#define test_failed() _test_failed(__FILE__, __LINE__);
#define test_assert(cond) {if (!(cond)) {test_failed();}}

int test_file_io_api();
int test_files_directories_api();
int test_standard_io_api();
int test_system_data_files_api();
int test_process_env_api();
int test_process_control_api();
int test_process_relationships_api();
int test_signals_api();
int test_threads_api();
int test_threads_control_api();
int test_daemon_processes_api();
int test_advanced_io_api();
int test_ipc_api();   /* interprocess communication */
int test_network_ipc_sockets_api();
int test_advanced_ipc_api();
int test_terminal_io_api();
int test_pseudo_terminals_api();
int test_database_library_api();

#endif