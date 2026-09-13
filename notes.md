
- when writing long** matrix   = malloc(y_dim*sizeof(long*)); we tell the compiler that we want a list of long pointers (long**) 
when using matrix[y] it knows that matrix is a list of long pointers so it will get the y'th pointer in this list, which now doesnt point to aything
before we call matrix[y] = malloc(x_dim*sizeof(long));

- The type of a pointer is for the compiler to know how many bytes to read for each access. if you make a int* pointer then the compiler knows to only read 4 bytes each time it accesses the data pointed to by the pointer. if you write long* it knows to read 8 bytes each time. 

- making a pointer: int *pointer = malloc(2*sizeof(int)). 

- pointer is the memoryaddress of the data the pointer points to. when using malloc it is the address of the beginning of that data

- *pointer is the actual data that the pointer points to (how much it is depends on how much was allocated by malloc)

- &pointer is the memoryaddress of the pointer (where the pointer variable is stored)