#!/bin/bash
ls *.c | xargs gcc -c | ls *.o | xargs ar rcs liball.a
