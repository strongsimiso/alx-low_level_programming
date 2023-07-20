#include <stdarg.h>
#include <stdio.h>
/**
    * print_all - prints anything
    * @format: a list of types of arguments passed to the function
    * c: char
    * i: integer
    * f: float
    * s: char * (if the string is NULL, print (nil) instead
    * any other char should be ignored
    */
void print_all(const char * const format, ...) {
    int i = 0;
    char *sep = "";
    va_list args;
    va_start(args, format);
    while (format[i]) {
        if (format[i] == 'c') {
            printf("%s%c", sep, va_arg(args, int));
            sep = ", ";
        } else if (format[i] == 'i') {
            printf("%s%i", sep, va_arg(args, int));
            sep = ", ";
        } else if (format[i] == 'f') {
            printf("%s%f", sep, va_arg(args, double));
            sep = ", ";
        } else if (format[i] == 's') {
            char *s = va_arg(args, char *);
            if (s == NULL) {
                printf("%s(nil)", sep);
            } else {
                printf("%s%s", sep, s);
            }
            sep = ", ";
        }
        i++;
    }
    va_end(args);
    puts("");
}
