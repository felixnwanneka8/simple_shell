#ifndef MAIN_H
#define MAIN_H


int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
int _myhistory(info_t *info);
int _myexit(info_t *info);
int _myenv(info_t *info);
int _erratoi(char *s);
void _eputs(char *str);
char *_strncpy(char *dest, char *src, int n);
char **get_environ(info_t *info);
void clear_info(info_t *info);
ssize_t input_buf(info_t *info, char **buf, size_t *len);
char *get_history_file(info_t *info);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str, int num);
int main(int ac, char **av);
int bfree(void **ptr);
int is_cmd(info_t *info, char *path);
char *_memset(char *s, char b, unsigned int n);
int hsh(info_t *info, char **av);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char **strtow(char *str, char *d);
int is_chain(info_t *info, char *buf, size_t *p);

#endif

