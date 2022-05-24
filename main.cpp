// cmake --build . --config Release

/* compilation: gcc -o client client.c -lssl -lcrypto */

/*

# Configure the build
cmake -S . -B build/Debug -D CMAKE_BUILD_TYPE=Release

# Actually build the binaries
cmake --build build/Debug
Для генераторов с несколькими конфигурациями немного по-другому (Ninja Multi-Config, Visual Studio)

# Configure the build
cmake -S . -B build

# Actually build the binaries
cmake --build build --config Debug

*/

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <openssl/bio.h> /* BasicInput/Output streams */
#include <openssl/err.h> /* errors */
#include <openssl/ssl.h> /* core library */
#include <openssl/rsa.h> // Алгоритм RSA
#include <openssl/pem.h>

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <stdlib.h>



int main() {
  

return 0;
}