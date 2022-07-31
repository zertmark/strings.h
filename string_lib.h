#include <stdlib.h>
#define size_t unsigned long long int
int max(const int a, const int b);
int min(const int a, const int b);
size_t string_len(const char * string);
size_t is_sub_string_in (const char *string, const char *sub_string);
char *locate_sub_string(char *string, char *sub_string);
size_t is_char_in_string (const char *string, int character );
char *locate_char_in_string(const char *string, int character);
char *locate_last_char_in_string(const char *string, int character);
char *string_copy(char *destination_string, const char *source_string);
char *string_ncopy(char *destination_string, const char *source_string, size_t num);
void concat(char *destination_string, const char *source_string);
void concatn(char *destination_string, const char *source_string, size_t num);
char *create_string_in_heap(char *stack_string);
int memory_compare(void *ptr_to_memory_block_1, void *ptr_to_memory_block_2, size_t num);
void* memory_copy ( void *ptr_to_memory_block_destination, const void *ptr_to_memory_block_source, size_t num );
void *memory_move(void *ptr_to_memory_block_destination, const void *ptr_to_memory_block_source, size_t num);
void *locate_char_in_memory (const void *ptr_to_memory_block_source, int character, size_t num);
void memory_set (void *ptr_to_memory_block, int value, size_t num);
int string_compare (const char *string_one, const char *string_two);
int string_comparen(const char *string_one, const char *string_two, size_t num);
size_t string_span (const char *string_one, const char *string_two );
size_t string_span_c (const char *string_one, const char *string_two);
char *locate_any_characters_in_string (const char * string_one, const char * string_two );

