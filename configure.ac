AC_PREREQ(2.65)

AC_INIT([libtool-sample], [1.0.0], [kou@clear-code.com])
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_MACRO_DIR([m4])

AC_CONFIG_SRCDIR([sample/greeter.h])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([1.11 foreign])
AM_SILENT_RULES([yes])

AC_PROG_CC
LT_INIT

AC_MSG_CHECKING([for enabling coverage])
AC_ARG_ENABLE([coverage],
              AS_HELP_STRING([--disable-coverage],
                             [Disable coverage.]),
              [enable_coverage=$enableval],
              [enable_coverage=yes])

COVERAGE_CFLAGS=
COVERAGE_LIBS=
if test "$enable_coverage" = "yes"; then
  if test "$GCC" = "yes"; then
    COVERAGE_CFLAGS="--coverage"
    COVERAGE_LIBS="-lgcov"
  else
    enable_coverage=no
  fi
fi
AC_SUBST(COVERAGE_CFLAGS)
AC_SUBST(COVERAGE_LIBS)
AC_MSG_RESULT($enable_coverage)

AC_CONFIG_FILES([
  Makefile
  sample/Makefile
  test/Makefile
])

AC_OUTPUT
