ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

SUBDIRS =					\
	sample					\
	test

COVERAGE_INFO_FILE = coverage.info
COVERAGE_REPORT_DIR = coverage

.PHONY: coverage-clean coverage-report coverage

coverage-clean:
	lcov --compat-libtool --directory .	\
	  --zerocounters			\
	  --output-file $(COVERAGE_INFO_FILE)

coverage-report:
	lcov --compat-libtool --directory .		\
	  --capture --output-file $(COVERAGE_INFO_FILE)
	genhtml --highlight --legend			\
	  --output-directory $(COVERAGE_REPORT_DIR)	\
	  --prefix "$(abs_top_srcdir)"			\
	  $(COVERAGE_INFO_FILE)

coverage: coverage-clean check coverage-report

CLAENFILES =					\
	$(COVERAGE_INFO_FILE)

clean-local:
	@rm -rf $(COVERAGE_REPORT_DIR)
