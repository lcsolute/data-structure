#include "stackli.h"
#include <stdio.h>

int main()
{
  Stack S;
  int i;
  
  S = CreateStack();
  for ( i = 0; i < 10; i ++ )
    Push(i, S);
  
  for ( i = 0; i < 10; i ++ )
  {
    printf("%d\n", Top( S ));
    Pop( S );
  }
  
  DisposeStack( S );
  return 0;
}