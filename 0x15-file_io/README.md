<h1>File I/O</h1>
This directory was created on Nov 27, 2023 to hold my answers/submissions for
the project '0x15. C - File I/O' of  ALX SE Foundations.

<h3>File descriptors</h3>
Every time that we open or createa file using the open syscall (or something
similar), a new entry is made into the system wide table of opened files which
holds open file descriptions. File descriptors that are returned by the open
function can be though of as indices to this table, and others to access the
file for reading, writing, and the like.

<h3>C file handling</h3>
The C programming language (or the standard library to be precise) offer a set
of functions that allow us to create, open, read from, write into, and close
files (which technically also includes directories). The most commonly used of
these functions (syscalls) are:

1. open - Used to open a file for accessing. If successful, it returns a file
descriptor to the file specified in the argument, if not it returns -1.

2. close - Used to close a file that has been opened by a previous open syscall.
This syscall returns 0 on success, and -1 if an error is encountered

3. read - Used to read from an opened file (whose file descriptor is given as
an argument). It also expects as arguments a buffer to which the read data is
places, and the number of characters to read. If successful, it returns the
number of characters read. Otherwise, -1 is returned.

4. write - Used to write to an opened file (whose file descriptor is given as
an argument). It also expects the address of the data to write, and the number
of characters to write. On success, it returns the number of characters written,
otherwise, -1 is returned.

5. dprintf - Used to print (write) characters to a given file based on a format
string. It is basically like printf, except the data is printed to the file to
which the given file descriptor refers instean of stdout.

Other functions like getc, fgetc, gets, fgets, getw, fscanf (for reading), and
putc, fputc, puts, fputs, putw, fprintf (for writing) can also be used.

<h3>Tasks</h3>

1. 0-read_textfile.c: The function receives a file name and the number of chars
to read and write from that file. It uses the open, read, and write function to
perform the task. If successful, it returns the number of characters printed. If
any of open, read, or write functions encounter an error, if the given file name
is NULL, or if the number of actual written chars is different from the expected
number, it returns 0.

2. 1-create_file.c: The function creates a new file (if it doesn't exist already
, it truncates the file if it exists) with the mode rw------- and names it with
a given name. It then inserts a given string to it. The creation / truncation
is achieved using the O_CREAT and O_TRUNC flags with the open function. The mode
is set using the mode parameter of the function. 0600 represents read and write
access for the user which is what we desire. Lastly, the string is written into
the file usingf the write function.

3. 2-append_text_to_file.c: The function receives a file name, and a null
terminated string, and it appends the string to the file if it exists. This is
done using the open function with the O_APPEND flag. If the file does not exist,
or the write operation fails, the function returns -1, otherwise 1 is returned.

4. 3-cp.c: The program expects two command line arguments that represent file
names. It then copies the content of first file (if it exists and can be
accessed) to the second file (if it can be created or written into). If an
error is encountered, an appropriate error message is printed to stderr, and
the program exits.
