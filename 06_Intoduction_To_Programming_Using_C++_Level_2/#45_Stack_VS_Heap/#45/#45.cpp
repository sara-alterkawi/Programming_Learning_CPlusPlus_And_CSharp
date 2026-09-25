// Stack vs Heap
// the difference between stack and heap memory allocation in C++
// Stack memory is used for static memory allocation, which includes local variables and function call management.
// It is automatically managed by the compiler, meaning that memory is allocated and deallocated as functions are called and return.
// Stack memory is generally faster to allocate and deallocate,
// but it has a limited size, which can lead to stack overflow if too much memory is used.

// Heap memory, on the other hand, is used for dynamic memory allocation.
// It is managed manually by the programmer using operators like new and delete.
// Heap memory is larger than stack memory and can grow as needed, but it is slower to allocate and deallocate.
// Additionally, heap memory can lead to fragmentation and memory leaks if not managed properly.
