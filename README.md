**[Source available on GitHub](https://github.com/adamyaxley/Unformat)**

# Unformat

Parsing and extraction of original data from brace style "{}" formatted strings. It basically _unformats_ what you thought was formatted for good. It is developed and maintained by [Adam Yaxley](https://github.com/adamyaxley).

<br>

## Installation

Run:

```sh
$ npm i unformat.cxx
```

And then include `unformat.h` as follows:

```cxx
// main.cxx
#include <unformat.h>

int main() { /* ... */ }
```

Finally, compile while adding the path `node_modules/unformat.cxx` to your compiler's include paths.

```bash
$ clang++ -I./node_modules/unformat.cxx main.cxx  # or, use g++
$ g++     -I./node_modules/unformat.cxx main.cxx
```

You may also use a simpler approach with the [cpoach](https://www.npmjs.com/package/cpoach.sh) tool, which automatically adds the necessary include paths of all the installed dependencies for your project.

```bash
$ cpoach clang++ main.cxx  # or, use g++
$ cpoach g++     main.cxx
```

<br>

## Quick Example

Unformat is simple to use and works on all basic types. See the below example for extracting a `std::string` and an 'int'
```c++
std::string name;
int age;

unformat("Harry is 18 years old.", "{} is {} years old.", name, age);
// name == "Harry" and age == 18
```
As an optimisation, if the format string is known at compile time, it can be parsed into a constant expression by making use of `ay::make_format`. In tests, this increases runtime speed by a factor of 3 or 4.
```c++
std::string name;
int age;

constexpr auto format = ay::make_format("{} is {} years old.");
unformat("Harry is 18 years old.", format, name, age);
// name == "Harry" and age == 18
```

<br>

## How do I use this library?

Unformat is a single-file header only library so integration is easy. All you need to do is copy `unformat.h` into your project, and away you go.

<br>

## Public Domain

This software is completely open source and in the public domain. See LICENSE for details.

<br>

## Contributing

Pull requests are very welcome. You may also create Issues and I will have a look into it as soon as I can.

<br>

## Speed

Unformat is super awesome back to the future style lightning fast compared to traditional parsing methods. Below is the output from Google Benchmark on unformat_benchmark.cpp. Great Scott!

```bash
Run on (16 X 2993 MHz CPU s)
03/13/19 18:10:57
--------------------------------------------------------------------
Benchmark                             Time           CPU Iterations
--------------------------------------------------------------------
Unformat                             72 ns         71 ns    8960000
Unformat_ConstChar                   69 ns         70 ns    8960000
Unformat_ConstexprMakeFormat         36 ns         35 ns   19478261
StdStringStream                     844 ns        854 ns     896000
StdRegex                           9975 ns      10010 ns      64000
StdScanf                           1716 ns       1726 ns     407273
```

<br>
<br>


[![](https://raw.githubusercontent.com/qb40/designs/gh-pages/0/image/11.png)](https://wolfram77.github.io)<br>
[![SRC](https://img.shields.io/badge/src-repo-green?logo=Org)](https://github.com/adamyaxley/Unformat)
[![ORG](https://img.shields.io/badge/org-nodef-green?logo=Org)](https://nodef.github.io)
![](https://ga-beacon.deno.dev/G-RC63DPBH3P:SH3Eq-NoQ9mwgYeHWxu7cw/github.com/nodef/unformat.cxx)
