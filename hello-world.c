#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#ifdef BRANCH_1
#define VAL 1
#else
#define VAL 0
#endif

int main(int argc, char* argv[]) {
  int a,b,c;

  a = atoi(argv[1]);
  b = atoi(argv[2]);

  /* Test coverage eval with preprocessor macros */
  if ( VAL ) {
    printf("Hello, World!\n");
    assert(a!=0);
    assert(a!=0 && b!=0);
  }
  else {
    printf("Bye, World!\n");
    assert(a!=0);
    assert(a!=0 && b!=0);
  }


  if ( a<b ) {
    printf("2: Hello, World!\n");
  }
  else {
    printf("2: Bye, World!\n");
    assert(a);
    assert(a!=0 && b!=0);
  }

  c = 10;

  /* Partial coverage: branch coverage is false, line coverage too */
  for (int i=0; i<10; ++i ) {
    if ( i>c ) {
      continue;
    }
  }

  /* Partial coverage: branch coverage is false: i>c never executed */
  for (int i=0; i<10; ++i ) {
    if ( i<c ) {
      continue;
    }
  }


  /* Full coverage: both possible branches of the if are executed */
  for (int i=0; i<20; ++i ) {
    if ( i<c ) {
      continue;
    }
  }

  return 0;
}
