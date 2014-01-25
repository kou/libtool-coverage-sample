/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sample/greeter.h>

int
main(int argc, char *argv)
{
    const char *expected_greeting;
    const char *actual_greeting;

    expected_greeting = "Hello!";
    actual_greeting = sample_greeter_greet();
    if (strcmp(expected_greeting, actual_greeting) == 0) {
        return EXIT_SUCCESS;
    } else {
        printf("expected: <%s>\n", expected_greeting);
        printf("  actual: <%s>\n", actual_greeting);
        return EXIT_FAILURE;
    }
}
