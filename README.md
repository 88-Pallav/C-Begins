# C++ by Tim

Classic C++ - Pre C++ 11 Standard
Modern C++ - C++ 11/14/17 Standards

Be explicit in your commands, programs do, exactly what you ask for.
Donot leave anything for assumptions.

*Programming Languages:* Source Code --> High-level -->For Humans

*Editors:* Used to enter program script
*Extensions:* .cpp and .h

*Binary or other low level-representation:* object code --> for computers

*Compiler:* Translates from high level to low level.
(Takes source code and outputs object code)

*Linker:* Links together our code with our other libraries
    - creates executable program

*Testing and Debugging:* Finding and fixing errors.

Source Code (.cpp) --> C++ Compiler  --> Object Code (.obj) --> Linker --> executable file (.exe)

We use editor to enter or edit c++ code. Then compiler gernerates code file 
for each source file. For Windows (.obj extension) For UNIX/Mac (.o extension)
Compiler coverts source code (file.cpp) to object code (file.obj)
Linker links any object files with libraries which must be linked together.
Finally, we get an executable file (main.exe) which can run.
For Windows (.exe extension and for UNIX/MAC we have no extension as such)
Then we debug the program for any errors.

Integrated Developnment Environment (IDEs'): 

Editor --> Compiler --> Linker --> Debugger --> Sync

*Installation process:* 
winlibs.com --> Download GCC latest version --> Unzip the file --> Extract all to a desired simple location --> open mgwin64 --> go to bin --> Copy path of file --> Got to environmnet variable --> path --> new --> paste path of file --> click ok.

*Verification:* Go to cmd --> gcc --verion (command which will show current status)

*VS Code configuration:*

https://code.visualstudio.com/docs/cpp/config-mingw  

*Note: * If 'gcc' is giving problem use 'g++' while using Visual code. 
