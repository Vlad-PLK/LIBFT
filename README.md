<p align="center">
  LIBFT
</p>

Here you can find the very first project of 42's common core named LIBFT.
The goal is to create a library composed of various C functions.
Throught this project I acquired a lot of C basic skills and knowledge that I used even more in more complex subjects. 
This library is a really strong fondation for every C programmer.

I will now go throught some categories of functions related to specific C variables and I will explain the most important ones.

1. Character type
\
\
   First of all, what is a character in C and how does it work ?
\
   A character is a variable that stores an integer corresponding to a certain position in the ASCII table.
   You can define it with it integer value, or directly with the character that you want it to be.
   For example :
   ```c
   #include <stdio.h>

   int  main(void)
   {
       char c1 = 71
       char c2 = 'G'

       printf("Here is c1 : %c and here is c2 : %c\n", c1, c2);
   }
   ```
   Both declaration are equivalent because 71 is the number corresponding to the G in the ascii table. It is crucial to understand the relation between char type and the ascii table because it teaches you how you should manipulate this type of variable easily.
   For instance, in this library you can find a bunch of simple functions that tells you if a character is a digit or in capital letter or even if it's in the ASCII.

3. Character string type
4. Integer
5. Linked Lists


