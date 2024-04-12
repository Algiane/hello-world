#include <stdio.h>
#include<assert.h>

int main(int argc, char* argv[]) {
  int a=2, b=3;

#ifdef BRANCH_1
   printf("Hello, World!\n");
#else
   printf("Bye, World!\n");
   assert(a<b);
#endif

   return 0;
}
