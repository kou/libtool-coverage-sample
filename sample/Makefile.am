AM_CPPFLAGS =					\
	-I$(top_builddir)			\
	-I$(top_srcdir)

AM_CFLAGS =					\
	$(COVERAGE_CFLAGS)

lib_LTLIBRARIES =				\
	libsample.la

libsample_la_SOURCES =				\
	greeter.c				\
	greeter.h

libsample_la_LIBADD =				\
	$(COVERAGE_LIBS)
