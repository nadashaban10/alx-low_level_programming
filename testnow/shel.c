#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

void freearray(char **array) {
    int i;

    if (!array)
        return;

    for (i = 0; array[i]; i++) {
        free(array[i]);
        array[i] = NULL;
    }
    free(array);
}

char *_strdup(const char *str) { /* double the string*/
    char *ptr;
    int i, len;

    if (str == NULL)
        return (NULL);
    for (len = 0; *str != '\0'; len++)
        str++;
    str = str - len;
    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return (NULL);
    for (i = 0; i <= len; i++)
        ptr[i] = str[i];
    return (ptr);
}
int _strcmp(const char *s1, const char *s2) { /*compare between two strings*/
    int ptr;

    ptr = (int)*s1 - (int)*s2;
    for (; *s1;) {
        if (*s1 != *s2)
            break;
        s1++;
        s2++;
        ptr = (int)*s1 - (int)*s2;
    }
    return (ptr);
}

int _strlen(const char *s) {
    int i;

    if (!s)
        return (0);
    for (i = 0; *s != '\0'; s++)
        i++;
    return (i);
}

char *_strcat(char *dest, char *src) { /*"Hello" + "world" = "Hello world"*/
    char *p = dest;

    while (*p)
        p++;
    while (*src) {
        *p = *src;
        p++;
        src++;
    }
    *p = '\0';
    return (dest);
}
char *_strcpy(char *dest, const char *src)
{ /* copy the string*/
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void _putchar(const char *c) {
    write(STDOUT_FILENO, c, _strlen(c));
}

char *read_command(void) {
    char *line = NULL;
    size_t line_size = 0;
    ssize_t x;

    if (isatty(STDIN_FILENO))
        _putchar("#cisfun$ ");
    x = getline(&line, &line_size, stdin);
    if (x == -1) {
        free(line);
        return (NULL);
    }

    return (line);
}
char **tokenizer(char *line) {
    char *buf = NULL;
    char *token = NULL;
    char **array = NULL;
    int i;

    if (!line)
        return (NULL);

    buf = _strdup(line);
    token = strtok(buf, " \t\n");
    if (token == NULL) {
        free(line);
        free(buf);
        return (NULL);
    }
    for (i = 0; token; i++)
        token = strtok(NULL, " \t\n");
    free(buf);
    array = malloc(sizeof(char *) * (i + 1));
    if (!array) {
        free(line);
        return (NULL);
    }
    token = strtok(line, " \t\n");
    for (i = 0; token; i++) {
        array[i] = _strdup(token);
        token = strtok(NULL, " \t\n");
    }
    free(line);
    array[i] = NULL;
    return (array);
}
char *_getenv(char *ptr) {
    char *buf, *key, *value, *env;
    int i;

    for (i = 0; environ[i]; i++) {
        buf = _strdup(environ[i]);
        key = strtok(buf, "=");
        if (_strcmp(key, ptr) == 0) {
            value = strtok(NULL, "\n");
            env = _strdup(value);
            free(buf);
            return (env);
        }
        free(buf);
    }
    return (NULL);
}
  char *path_env, *cmd, *road;
    int i;
    struct stat st;

    for (i = 0; command[i]; i++) {
        if (command[i] == '/') {
            if (stat(command, &st) == 0)
                return _strdup(command);
            return (NULL);
        }
    }
    path_env = _getenv("PATH");
    if (!path_env)
        return (NULL);
    road = strtok(path_env, ":");
    while (road) {
        cmd = malloc(_strlen(road) + _strlen(command) + 2);
        if (cmd) {
            _strcpy(cmd, road);
            _strcat(cmd, "/");
            _strcat(cmd, command);
            if (stat(cmd, &st) == 0) {
                free(path_env);
                return (cmd);
            }
            free(cmd);
            road = strtok(NULL, ":");
        }
    }
    free(path_env);
    return (NULL);
}
void reverse_str(char *str, int len) {
    char tmp;
    int start;
    int end = len - 1;

    for (start = 0; start < end; start++, end--) {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
    }
}

char *_itoa(int n) {
    char buffer[20];
    int i = 0;

    if (n == 0)
        buffer[i++] = '0';
    else {
        while (n > 0) {
            buffer[i++] = (n % 10) + '0';
            n /= 10;
        }
    }
    buffer[i] = '\0';
    reverse_str(buffer, i);
    return (_strdup(buffer));
}
void printerror(const char *name, const char *cmd, int idx) {
    char *index, msg[] = ": not found\n";

    index = _itoa(idx);
    write(STDERR_FILENO, name, _strlen(name));
    write(STDERR_FILENO, ": ", 2);
    write(STDERR_FILENO, index, _strlen(index));
    write(STDERR_FILENO, ": ", 2);
    write(STDERR_FILENO, cmd, _strlen(cmd));
    write(STDERR_FILENO, msg, _strlen(msg));
    free(index);
}
int ex_command(char **command, char **argv, int idx) {
    char *cmd;
    pid_t child_pid;
    int status;

    cmd = _getpath(command[0]);
    if (!cmd) {
        printerror(argv[0], command[0], idx);
        freearray(command);
        return (127);
    }

    child_pid = fork();
    if (child_pid == 0) {
        if (execve(cmd, command, environ) == -1) {
            free(cmd);
            freearray(command);
        }
    } else {
        waitpid(child_pid, &status, 0);
        freearray(command);
        free(cmd);
    }
    return (WEXITSTATUS(status));
}
void print_env()
{
        int i;

    for ( i = 0; environ[i]; i++) {
        _putchar(environ[i]);
        _putchar("\n");
    }
}
int main(int argc, char **argv)
{
    char *line = NULL;
    char **command;
    int status = 0, index = 0;
    (void) argc;

    while (1) {
        line = read_command();
        if (line == NULL)
        {
                /* for ctrl + D*/
            if (isatty(STDIN_FILENO)) /* to not print $*/
                _putchar("\n");
            return (status);
        }
        index++;
        command = tokenizer(line);
        if (!command)
            continue;

        /* Check for the "exit" command and env */
        if (_strcmp(command[0], "exit") == 0)
        {
            freearray(command);
            return (status);
        }
        else if (_strcmp(command[0], "env") == 0)
        {
        print_env();
        freearray(command);
    }
else {
        status = ex_command(command, argv, index);
    }
}
}













