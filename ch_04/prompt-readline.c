/* http://www.buildyourownlisp.com/chapter4_interactive_prompt */

#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {

  /* Print version and Exit information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl-c to Exit\n");

  /* In a never ending loop */
  while (1) {

    /* Output our prompt and get input*/
    char* input = readline("lipsy> ");

    /* Add input to history */
    add_history(input);

    /* Echo input back to user */
    printf("%s\n", input);

    /* Free retrieved input */
    free(input);

  }

  return 0;
}
