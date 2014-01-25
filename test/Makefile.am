TESTS = $(check_PROGRAMS)

AM_CPPFLAGS =					\
	-I$(top_builddir)			\
	-I$(top_srcdir)

check_PROGRAMS =				\
	test-greeter

test_greeter_SOURCES =				\
	test-greeter.c

test_greeter_LDADD =				\
	$(top_builddir)/sample/libsample.la
