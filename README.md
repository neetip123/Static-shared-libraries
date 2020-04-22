# Static-shared-libraries
A library is a collection of precompiled object files which can be linked into programs. The most common use of libraries is to provide system functions, such as the square root function sqrt found in the C math library. External libraries are usually provided in two forms: static libraries and shared libraries. I have created some static and shared libraries.

# static library
Static Libraries are typically stored in special archive files with the extension .a They are created from object files with
a separate tool, the GNU archiver ar, and used by the linker to resolve references to functions at compile-time. When
a program is linked against a static library, the machine code from the object files for any external functions used by
the program is copied from the library into the final executable.

# shared library
Shared libraries are handled with a more advanced form of linking, which makes the executable file smaller. They use the
extension .so, which stands for shared object. An executable file linked against a shared library contains only a small
table of the functions it requires, instead of the complete machine code from the object files for the external functions.
Before the executable file starts running, the machine code for the external function is copied into memory from the shared
library file on disk by the operating system − a process referred to as dynamic linking.

# Task
The database of 20 students is created with name , cpi and roll no.
1. Create a dynamic library named libstud.so which provides the following function APIs. A header file name stud.h
containing this function declarations have to be put in place.
(a) int readfile(student *student rec, char* filename) : the function reads the record from file filename and populates
a structure of type student. It also returns the number of complete entries in the file (which can have some
incomplete entries)
(b) void display list(student *student rec, int no of record) : the function displays the first no of record number of
entries from the student database
(c) void display record name(student *student rec, char *name) : the function displays the record of a student with
name *name
(d) void display record roll(student *student rec, int roll) : the function displays the record of a student with roll
number roll
2. Create a static library named libsort.a which provides the following function APIs. A header file named sorting.h
containing this function declarations have to be put in place.
(a) void Quick sort roll (student *student rec, student *student rec1, int no of record)
(b) void Quick sort name (student *student rec, student *student rec1, int no of record)
(c) void Quick sort cpi (student *student rec, student *student rec1, int no of record)
Each of the Quick sort functions sorts the database with handler student rec having no of record number of valid
entries and populates the database with handler student rec1. The sorting is with respect to roll, name and cpi.
3. Write a test program which takes as input the file containing the student records, reads the file into the structure nd provides the user - the provisions for sorting and displaying.
