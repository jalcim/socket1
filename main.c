#include <unistd.h>
#include <stdio.h>
void shell_server();
void init_chat();
void start_chat();
int main()
{
  init_chat();
  shell_server();
  sleep(100);
  printf("start_chat\n");
  start_chat();
  sleep(10);

  return (0);
}
