#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

int _strlen(const char *s)
{
    int i;

    if (!s)
        return (0);
    for (i = 0; *s != '\0'; s++)
        i++;
    return (i);
}

void _putchar(const char *c)
{
    write(STDOUT_FILENO, c, _strlen(c));
}
char *read_command(void)
{
 char *buf = NULL;
 size_t buf_size = 0;
 ssize_t x;
 char *token, **array;
 int i;
 pid_t child_pid;
 char* command;
 char** arguments;
  
    _putchar("#cisfun$ ");
    x = getline(&buf, &buf_size, stdin);
 if (x == -1)
 {
  free(buf);
  return (NULL);
 }
      token = strtok(buf, " \t\n");  

    array = malloc(sizeof(char *) * 1024);

    for (i = 0; token; i++)
    {
        array[i] = token;
        token = strtok(NULL, " \t\n"); 
    }
    array[i] = NULL;

    if (i > 0)
    {
        child_pid = fork();

        if (child_pid == -1)
        {
            perror("./shell");
            exit(EXIT_FAILURE);
        }
        else if (child_pid == 0)
        {
            command = array[0];
            arguments = &array[0]; 

            execve(command, arguments, NULL);
            perror("./shell");
            exit(EXIT_FAILURE);
        }
        else
            wait(NULL);
i = 0;
free(array);
return (buf);
        
    }
}
int main(int argc, char **argv)
{
 char *line = NULL;
 int status = 0;
 (void) argc;
    (void) argv;
    
 while(1)
 {
  line = read_command();
  if (line == NULL)
  {
   _putchar("\n");
   return (status);
  }
  free(line);
 }
}

