# **Project description for tasks in 0x0c-more_malloc_free**

## Mandatory tasks

task 0. **Trust no one.**
Write a function that allocates emmory using __malloc__.
> Prototype: __void *malloc_checked(unsigned int b);__
> Returns a pointe to the allocated memory.
> If __malloc__ fails, the __malloc_checked__ functionshould cause normal process termination with a status value of _98_

task 1. **string_nconcat**
Write a function that concatenates two strings.
> Prototype: __char *string_nconcat(char *s1, char *s2, unsigned int n);__
> The returend pointer shall point to a newly allocated space in memory, which contains _s1_, followed by the first _n_ bytes of _s2_, and null terminated.
> If the function fails, it should return _NULL_
> If _n_ is greater or equal to the length of _s2_ then use the entire string _s2_
> If _NULL_ is passed, treat it as an empty string

task 2. **_calloc**
Write a function that allocates memory for an array, using _malloc_
> Prototype: __void *_calloc(unsigned int nmemb, unsigned int size);__
> The *_calloc* function allocates memory fir an array of nmemb elements of _size_ bytes each and returns a pointer to the allocated memory.
> If _nmemb_ or _size_ is _0_, then *_calloc* returns _NULL_
> If _malloc_ fails, then *_calloc_ returns _NULL_
FYI: The standard library provides a different function: _calloc_. Run _man calloc_ to learn more.

task 3. **array_range**
Write a function that creates an array of integers.
> Prototype: __int *array_range(int min, int max);__
> The array created should contain all the vsalues form _min_ (included) to _max_(included), ordered from _min_ to _max_.
> Return: the pointer to the newly created array
> If _min_ > _max_, return _NULL_
> If _malloc_ fails, return _NULL_
