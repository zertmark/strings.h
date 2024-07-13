//TO:DO test most of the functions to avoid errors 
//#include <string.h>
#include "string_lib.h"
/*
void __attribute__ ((constructor)) initLibrary(void) 
{
    printf("Library is loaded\n"); 
}
void __attribute__ ((destructor)) cleanUpLibrary(void) 
{
    printf("Library is unloaded\n"); 
}
*/
int max(const int a, const int b)
{
    return a > b ? a : b;
}
int min(const int a, const int b)
{
    return a > b ? b : a;
}
size_t string_len(const char * string)
{
    char *ptr_to_string = (char *) string;
    register size_t size = 0;
    while(*ptr_to_string)
    {
        size++;
        ptr_to_string++;
    }
    return size;
}
size_t is_sub_string_in (const char *string, const char *sub_string)
{
    char *ptr_to_string = (char *) string;
    char *ptr_to_sub_string = (char *) sub_string;
    register size_t size_of_string = string_len(ptr_to_string);
    register size_t size_of_sub_string = string_len(ptr_to_sub_string);
    register size_t count_size_of_sub_string = size_of_sub_string;
    
    for(size_t c=0;c<size_of_string;c++)
    {
        for(size_t j=0;j<size_of_sub_string;j++)
        {
            if (ptr_to_string[c+j]==ptr_to_sub_string[j])
            {
                count_size_of_sub_string--;    
                if(!count_size_of_sub_string)
                {
                    return 1;
                }
                continue;
            }
            count_size_of_sub_string=size_of_sub_string;    
        }

    }
    return 0;
}
char *locate_sub_string(char *string, char *sub_string)
{
    char *ptr_to_string = (char *) string;
    char *ptr_to_sub_string = (char *) sub_string;
    register size_t size_of_string = string_len(ptr_to_string);
    register size_t size_of_sub_string = string_len(ptr_to_sub_string);
    register size_t count_size_of_sub_string = size_of_sub_string;
    
    for(size_t c=0;c<size_of_string;c++)
    {
        for(size_t j=0;j<size_of_sub_string;j++)
        {
            if (ptr_to_string[c+j]==ptr_to_sub_string[j])
            {
                count_size_of_sub_string--;    
                if(!count_size_of_sub_string)
                {
                    return string+c;
                }
                continue;
            }
            count_size_of_sub_string=size_of_sub_string;    
        }

    }
    return NULL;
}
size_t is_char_in_string (const char *string, int character )
{
    char *ptr_to_string = (char *) string;
    register size_t size_of_string = string_len(ptr_to_string);
    register char chr = character;
    for(size_t c=0;c<=size_of_string;c++)
    {
        if (ptr_to_string[c]==chr)
        {
            return 1;
        }
    }
    return 0;
}
char *locate_char_in_string(const char *string, int character)
{
    char *ptr_to_string = (char *) string;
    register size_t size_of_string = string_len(ptr_to_string);
    register char chr = character;
    for(size_t c=0;c<=size_of_string;c++)
    {
        if(ptr_to_string[c]==chr)
        {
            return ptr_to_string+c; 
        }
    }
    return NULL;
}
char *locate_last_char_in_string(const char *string, int character)
{
    char *ptr_to_string = (char *) string;
    char *ptr_to_char = NULL;
    register size_t size_of_string = string_len(ptr_to_string);
    register char chr = character;
    for(size_t c=0;c<=size_of_string;c++)
    {
        if(ptr_to_string[c]==chr)
        {
            ptr_to_char = ptr_to_string+c; 
        }
    }
    return ptr_to_char;
}
char *string_copy(char *destination_string, const char *source_string)
{
    char *ptr_to_source = (char *) source_string;
    register size_t size_of_destination = max(string_len(destination_string),string_len(ptr_to_source));
    register size_t size_of_source = string_len(ptr_to_source);
    for(size_t c=0;c<size_of_destination;c++)
    {
        if(size_of_source>=c)
        {
            destination_string[c] = ptr_to_source[c];
            continue;
        }
        destination_string[c] = 0;
    }
    destination_string[size_of_destination] = '\0';
    return destination_string;
}
char *string_ncopy(char *destination_string, const char *source_string, size_t num)
{
    char *ptr_to_source = (char *) source_string;
    register size_t size_of_source = string_len(ptr_to_source);
    for(size_t c=0;c<num;c++)
    {
        if(c>=size_of_source)
        {
            destination_string[c] = 0;
            continue;
        }
        destination_string[c] = ptr_to_source[c];
    }
}
void concat(char *destination_string, const char *source_string)
{   
    char *ptr_to_source = (char *) source_string;
    register size_t size_of_destination = string_len(destination_string); 
    register size_t sum_of_lens = size_of_destination+string_len(ptr_to_source)+1;
    for(size_t c=size_of_destination;c<sum_of_lens;c++)
    {
        destination_string[c] = ptr_to_source[c-size_of_destination];
    }
}
void concatn(char *destination_string, const char *source_string, size_t num)
{   
    char *ptr_to_source = (char *) source_string;
    register size_t size_of_destination = string_len(destination_string); 
    register size_t sum_of_lens = size_of_destination+num+1;
    for(int c=size_of_destination;c<sum_of_lens;c++)
    {
        destination_string[c] = source_string[c-size_of_destination];
    }
}
char *create_string_in_heap(char *stack_string)
{
    register size_t stack_string_len = string_len(stack_string);
    char *heap_string = malloc(stack_string_len);
    for(size_t c=0;c<=stack_string_len;c++)
    {
        heap_string[c] = stack_string[c];
    }
    return heap_string;
}
int memory_compare(void *ptr_to_memory_block_1, void *ptr_to_memory_block_2, size_t num)
{
    char *ptr_1 = ptr_to_memory_block_1;
    char *ptr_2 = ptr_to_memory_block_2;
    for(int c=0;c<num;c++)
    {
        /*
        for(int c=0;c<num;c++)
        {
            if (*(ptr_1)>*(ptr_2))
            {
                 return 1;
            }
            if (*(ptr_1)<*(ptr_2))
            {
                 return -1;
            }
            ptr_1++;
            ptr_2++;
        }
        return 0;
        */
        if (*(ptr_1)==*(ptr_2))
        {
            ptr_1++;
            ptr_2++;
            continue;
        }
        if (*(ptr_1)>*(ptr_2))
        {
            return 1;
        }
        return -1;   
    }
    return 0;
}
void* memory_copy ( void *ptr_to_memory_block_destination, const void *ptr_to_memory_block_source, size_t num )
{
    char *ptr_to_destination = ptr_to_memory_block_destination;
    char *ptr_to_source = (char *) ptr_to_memory_block_source;
    for(size_t c=0;c<num;c++)
    {
        ptr_to_destination[c] = ptr_to_source[c];
    }
    return ptr_to_memory_block_destination;
}
void *memory_move(void *ptr_to_memory_block_destination, const void *ptr_to_memory_block_source, size_t num)
{
    char *buffer = (char *) malloc(num);
    char *ptr_to_destination = (char *) ptr_to_memory_block_destination;
    void *ptr_to_source = (void *) ptr_to_memory_block_source; 
    memory_copy(buffer, ptr_to_source, num);
    for(size_t c=0;c<num;c++)
    {
        ptr_to_destination[c] = buffer[c];
    }
    free(buffer);
    return ptr_to_memory_block_destination;
}
void *locate_char_in_memory (const void *ptr_to_memory_block_source, int character, size_t num)
{
    unsigned char *ptr_to_source = (unsigned char * ) ptr_to_memory_block_source;
    unsigned char chr = character;
    for(size_t c=0;c<num;c++)
    {
        if(ptr_to_source[c]==chr)
        {
            return (void *) (ptr_to_source+c);
        }
    }
    return NULL;
}
void memory_set (void *ptr_to_memory_block, int value, size_t num)
{
    char *ptr_1 = (char *) ptr_to_memory_block;
    for(size_t c=0;c<num;c++)
    {
        ptr_1[c] = (char) value;
    }
}
int string_compare (const char *string_one, const char *string_two)
{
    char *ptr_to_string_one = (char *) string_one;
    char *ptr_to_string_two = (char *) string_two;
    register size_t size_of_string_one = string_len(ptr_to_string_one);
    register size_t size_of_string_two = string_len(ptr_to_string_two);
    /*
        I don't know if this is faster than my code  
        const unsigned char *p1 = (const unsigned char *)s1;
        const unsigned char *p2 = (const unsigned char *)s2;

        while (*p1 != '\0') {
            if (*p2 == '\0') return  1;
            if (*p2 > *p1)   return -1;
            if (*p1 > *p2)   return  1;

            p1++;
            p2++;
        }

        if (*p2 != '\0') return -1;

        return 0;
    */
    if(size_of_string_one>size_of_string_two)
    {
        return 1;
    }
    else if(size_of_string_one<size_of_string_two)
    {
        return -1;
    }
    for(size_t c=0;c<size_of_string_one;c++)
    {
        if(*(ptr_to_string_one)==*(ptr_to_string_two))
        {
            ptr_to_string_one++;
            ptr_to_string_two++;
            continue;
        }
        if(*(ptr_to_string_one)>*(ptr_to_string_two))
        {
            return 1;
        }
        return -1;
    }
    return 0;
}
int string_comparen(const char *string_one, const char *string_two, size_t num)
{
    //i don't know what's the point of this function if we have memcmp (memory_compare) already :/
    void *ptr_to_string_one = (void *) string_one;
    void *ptr_to_string_two = (void *) string_two;
    return memory_compare(ptr_to_string_one, ptr_to_string_two, num);
}
size_t string_span (const char *string_one, const char *string_two )
{
    char *ptr_to_string_one = (char *) string_one;
    char *ptr_to_string_two = (char *) string_two;
    register size_t size_of_string_one = string_len(ptr_to_string_one);
    register size_t size_of_string_two = string_len(ptr_to_string_two);
    register size_t counter=1;
    if(!is_char_in_string(ptr_to_string_one, *ptr_to_string_two)){return 0;}
    for(size_t c=1;c<size_of_string_one;c++)
    {
        if(is_char_in_string(ptr_to_string_two, ptr_to_string_one[c]))
        {
            counter++;
            continue;
        }
        break;
    }
    return counter;
}
size_t string_span_c (const char *string_one, const char *string_two)
{
    char *ptr_to_string_one = (char *) string_one;
    char *ptr_to_string_two = (char *) string_two;
    register size_t size_of_string_one = string_len(ptr_to_string_one);
    register size_t counter=0;
    for(;counter<=size_of_string_one;counter++)
    {
        if(is_char_in_string(ptr_to_string_two, ptr_to_string_one[counter]))
        {
            break;
        }
        counter++;
    }
    return counter;
}
char *locate_any_characters_in_string (const char * string_one, const char * string_two )
{   
    char *ptr_to_string_one = (char *) string_one;
    char *ptr_to_string_two = (char *) string_two;
    register size_t size_of_string_one = string_len(ptr_to_string_one);
    for(size_t c=0;c<size_of_string_one;c++)
    {
        if(is_char_in_string(ptr_to_string_two, ptr_to_string_one[c]))
        {
            return ptr_to_string_one+c;
        }
    }
    return NULL;
}
char* strip_string(char* string)
{
    size_t offset = 0;
    size_t len = string_len(string);
    char* output = NULL;
    if (string == NULL || !len || (string[0]!='\n' && string[len-1]!='\n'))
    {
        return string;
    }
    output = calloc(len-(1+(string[0]=='\n' && string[len-1] == '\n')),
                                                         sizeof(char));
    offset = (string[0]=='\n') + 2*(string[len-1] == '\n');
    switch (offset)
    {
        case 1:
            string++;
            len--;
            break;
        case 2:
            len--;
            break;
        case 3:
            string++;
            len-=2;
            break;
        default:
            break;
    }
    string_ncopy(output, string, len);
    output[len] = 0;
    return output;
}
