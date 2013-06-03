This brainfuck compiler has been written by Felix Schneider (feider).
This file is aviable at feider.taurus.uberspace.de (soon www.feider.org)
You can do with it whatever you want, just name me as the author.

And: Have fun! :)


There are two possibilitys how to use the interpreter.

First, just start the bfip binary you created. You will be asked to enter the filename of the brainfuck sourcecode.

Second, start it with the filename in the commandline like this:
./bfip <sourcecode>

There are two examples you can try:
helloworld.bf is a hello world program I took from Wikipedia
add.bf is a simple adding program I wrote myself

Q: I don't find a .exe! I can't start it!
A: There is no .exe file. Even if you use a Microsoft system, you should have a compiler installed. I recommend the gcc compiler. (The makefile produces a binary without .exe at the and.. but you should be able to rename it ;) )

Q:I started the add.bf example. But I can't use it! I can only enter one value!
A:The interpreter sees the "enter" key as a normal character. If you want to type two or more values, type them in one line. If you want to add 1 and 4 in the add.bf example, just type in 14 .


