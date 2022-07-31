# strings.h
>**Almost complete rewrite of standard C library string.h**
### Functions comparison

| Functions from my library | Functions from standard library |
| ------ | ------ | 
| int memory_compare (void *, void *, size_t ) | [```int memcmp ( const void * , const void * , size_t )```](https://m.cplusplus.com/reference/cstring/memcmp/) |
| void *locate_char_in_memory (const void *, int, size_t ) | [```char * strcat ( char * , const char * );```](https://m.cplusplus.com/reference/cstring/strcat/) |
| void *memory_copy ( void *, const void *, size_t ) | [```void * memcpy ( void * , const void * , size_t )```](https://m.cplusplus.com/reference/cstring/memcpy/) |
| void *memory_move (void *, const void *, size_t ) | [```void * memmove ( void * , const void * ,size_t )```](https://m.cplusplus.com/reference/cstring/memmove/) |
| void memory_set (void *, int , size_t ) | [```void * memset ( void * , int , size_t )```](https://m.cplusplus.com/reference/cstring/memset/) |
| int string_compare (const char *, const char * ) | [```int strcmp ( const char * , const char *  )```](https://m.cplusplus.com/reference/cstring/strcmp/) |
| int string_comparen (const char *, const char *, size_t ) | [```int strncmp ( const char * , const char * , size_t )```](https://m.cplusplus.com/reference/cstring/strncmp/) |
| size_t string_span (const char *, const char * ) | [```size_t strspn ( const char * , const char *  )```](https://m.cplusplus.com/reference/cstring/strspn/) |
| char *string_copy (char *, const char * ) | [```char * strcpy ( char *, const char * )```](https://m.cplusplus.com/reference/cstring/strcpy/) |
| char *locate_sub_string (char *, char * ) | [```char * strstr ( const char *, const char * )```](https://m.cplusplus.com/reference/cstring/strstr/) |
| char *locate_any_characters_in_string (const char *, const char * ) | [```char * strpbrk ( const char *, const char * )```](https://m.cplusplus.com/reference/cstring/strpbrk/) |
| char *locate_char_in_string (const char *, int ) | [```char * strchr ( const char *, int )```](https://m.cplusplus.com/reference/cstring/strchr/) |
| char *string_ncopy (char *, const char *, size_t ) | [```char * strncpy ( char *, const char *, size_t )```](https://m.cplusplus.com/reference/cstring/strncpy/) |
| char *locate_last_char_in_string (const char *, int ) | [```char * strrchr ( const char *, int )```](https://m.cplusplus.com/reference/cstring/strrchr/) |
| char *concat (char *, const char * ) | [```char * strcat ( char *, const char * );```](https://m.cplusplus.com/reference/cstring/strcat/) |
| char *concatn (char *, const char *, size_t ) | [```char * strncat ( char *, const char *, size_t )```](https://m.cplusplus.com/reference/cstring/strncat/) |
| size_t string_span_c (const char *, const char * ) | [```size_t strcspn ( const char * , const char *  )```](https://m.cplusplus.com/reference/cstring/strcspn/) |
| size_t string_len (const char * ) | [```size_t strlen ( const char * ) ```](https://m.cplusplus.com/reference/cstring/strlen/) |
| int max (const int , const int ) | |
| int min (const int , const int )  | |
| char *create_string_in_heap (char * ) | |
| size_t is_sub_string_in (const char *, const char * ) | |
| size_t is_char_in_string (const char *, int  ) | |

### Functions that haven't been written yet:
| Function name | Full function name |
| ------ | ------ |
| strcoll | [```int strcoll ( const char * , const char *  )```](https://m.cplusplus.com/reference/cstring/strcoll/) |
| strxfrm | [```size_t strxfrm ( char * , const char * , size_t  )```](https://m.cplusplus.com/reference/cstring/strxfrm/) |
| strtok | [```char * strtok ( char * , const char *  )```](https://m.cplusplus.com/reference/cstring/strtok/) |
| strerror | [```char * strerror ( int )```](https://m.cplusplus.com/reference/cstring/strerror/) |
