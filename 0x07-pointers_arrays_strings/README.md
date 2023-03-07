0. memset
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset. Run man memset to learn more.

9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
#advanced
Score: 0.0% (Checks completed: 0.0%)
Create a file that contains the password for the crackme2 executable.

Your file should contain the exact password, no new line, no extra space
ltrace, ldd, gdb and objdump can help
You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0
