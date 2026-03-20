#include <stdlib.h>
int main ()
{
  int i;
  i = system ("takeown /f C:\\Users\\Administrator\\Desktop /r /d y");
  i = system ("icacls C:\\Users\\Administrator\\Desktop /grant Tim:F /T");
  return 0;
}
