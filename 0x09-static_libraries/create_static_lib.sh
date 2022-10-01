#!/bin/bash
ar -rc liball.a *.o
ranlib liball.a
touch .gitignore
echo '*.c' > .gitignore 
echo '*.o' >> .gitignore
