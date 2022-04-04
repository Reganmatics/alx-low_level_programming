# **project description for 0x0B-malloc_free**

## **Advanced tasks**

task 0. **Float like a butterfly, sting like a bee**
Write a function thatcreates an array of chars, and initializes it with a specific char.
> **Prototype:** __char *create_array(unsigned int size, char c);__
> Returns _NULL_ if size = _0_
> Returns a pointer to the array, or _NULL_ if it fails

task 1. **The woman who has no imagination has no wings**
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
> **Prototype:** __char *_strdup(char *str);__
> The __*_strdup()*__ function returns a pointer to  a new string which is a duplicate of the string _str_. Memory for the new string is obtained with _malloc_, and can be freed with _free_.
> Returns _NULL_ if str = NULL
> On success, the __*_strdup*__ function returns a pointer to the duplicated strings. it returns _NULL_ of insufficient memory was available.

task 2. **He who is not courageous enough to take risks will accomplish nothing in life**
Write a function that concatenates two strings.
> **Prototype:** __char *str_concat(char *s1, char *s2);__
> The returned pointer should point to a newly allocated space in memory which contains the contents of _s1_, followed by the contents of _s2_, and null terminated.
> If _NULL_ is passed, treat it as an empty string
> The function should return _NULL_ on failure.

task 3. **If you even dream of beating me you'd better wake up and apologize.**
Write a function that returns a pointer to a 2- dimensional array of integers.
> **Prototype:** __int **alloc_grid(int width, int height);__
> Each element of the grid should be initialized to _0_.
> The function should return _NULL_ on failure
> If _width_ or _height_ is _0_ or negative., return _NULL_

task 4. **It's not bragging if you can back it up.**
Write a function that frees a2- dimensional grid previously created by your __alloc_grid__ function
> **Prototype:** __coid free_grid(int **grid, int height);__
> Note that we will compile with ypur __allo_grid.c__ file. Make sure it compiles
