#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd;
    char buffer[10];

    // 1. getpid() - Get current process ID
    pid_t pid = getpid();

    // 2. open() - Attempt to open a file
    fd = open("testfile.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);

    // 3. write() - Attempt tp write to a file
    write(fd, "Hello", 5);

    // 4. read() - Attempt to read from the file 
    read(fd, buffer, 10);

    // 5. close() - Close the file descriptor
    close(fd);

    return 0;
}
