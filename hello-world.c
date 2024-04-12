#include <stdio.h>
#include<assert.h>

#ifdef BRANCH_1
#define VAL 1
#else
#define VAL 0
#endif

int main(int argc, char* argv[]) {
  int a=2, b=3;

  if ( VAL ) {
    printf("Hello, World!\n");
  }
  else {
   printf("Bye, World!\n");
   assert(a<b);
  }

   return 0;
}
