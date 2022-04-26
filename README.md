# get_next_line

[![cboutier's 42 get_next_line Score](https://badge42.vercel.app/api/v2/cl1f9y1k8000609jsc4a29jay/project/2184341)](https://github.com/JaeSeoKim/badge42)

Validated on June 4th, 2021

100/100

This project is about programming a function that returns a line read from a file descriptor, using a buffer_size.

The prototype is: char *get_next_line(int fd);

**HOW TO USE THE FUNCTION**  
`gcc main.c get_next_line.c get_next_line_utils.c`  
The following command will read from the file `main.c` 5 bytes at a time.  
`./a.out main.c -D BUFFER_SIZE=5`  

**Return value:**  
1 if it is not the EOF (End Of File),  
0 if it reached the EOF (End Of File).
