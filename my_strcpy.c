// Description
// Reproduce the behavior of the function strcpy.
// The strcpy() and strncpy() functions copy the string source (src) to destination (dst).

// The first parameter is the destination and the second parameter is the source.
// The strcpy() and strncpy() functions return destination.
char* my_strcpy(char* dest,char* src){
    char* dest_start=dest;
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    dest++;
    *dest='\0';
    return dest_start;
}