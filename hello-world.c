#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#ifdef BRANCH_1
#define VAL 1
#else
#define VAL 0
#endif

int main(int argc, char* argv[]) {
  int a,b;


  if ( VAL ) {
    printf("Hello, World!\n");
  }
  else {
   printf("Bye, World!\n");
   assert(a<b);
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);

  if ( a<b ) {
    printf("2: Hello, World!\n");
  }
  else {
   printf("2: Bye, World!\n");
   assert(a!=0 && b!=0);
  }

   return 0;
}
