|Task Number |Description |

|----------- |----------- |

|Task 0 |Write a function that reads a text file and prints it to the POSIX standard output |
|Task 1 |Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…) |

|Task 2 |Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);
where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file |

|Task 3 |Write a program that copies the content of a file to another file.

Usage: cp file_from file_to
if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
if file_to already exists, truncate it
if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
where NAME_OF_THE_FILE is the first argument passed to your program
if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error |

|Task 4 |Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
Displayed information: (no less, no more, do not include trailing whitespace)
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as readelf -h (version 2.26.1) |

