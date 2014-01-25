# GNU libtool and coverage sample

This is a sample C project that uses
[GNU libtool](https://www.gnu.org/software/libtool/) and coverage
feature of [GCC](http://gcc.gnu.org/). This project uses
[LCOV](http://ltp.sourceforge.net/coverage/lcov.php) to generate
a coverage report.

## How to build

```
% ./autogen.sh
% ./configure --prefix=/tmp/local
% make
% make check
% make coverage-report
```

You can find a coverage report `coverage/` directory.

## License

[CC0 (Public Domain)](http://creativecommons.org/publicdomain/zero/1.0/deed)
