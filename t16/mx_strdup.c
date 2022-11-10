int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str){
    int size = mx_strlen(str);
    char *new = mx_strnew(size);
    return mx_strcpy(new, str);;
}


