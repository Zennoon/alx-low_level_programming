Dynamic Libraries

A dynamic library is a collection of pre-compiled code that programs can access
and use at runtime (unlike static libraries where the code is included in the
executable, in dynamic libraries, the executable only contains a link to the
address in memory of the code which is loaded when a program needs it). This
minimizes the size of the executable. If multiple programs are using the library
 only one copy is loaded into memory. Additionally, when the library is updated,
none of the programs using the library need to be recompiled.
