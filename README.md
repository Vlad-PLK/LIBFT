<p>
  <h1 align="center">LIBFT :open_book:</h1>
</p>

Here you can find the very first project of 42's common core named LIBFT.
The goal is to create a library composed of various C functions.
Throught this project I acquired a lot of C basic skills and knowledge that I used even more in more complex subjects. 
This library is a really strong fondation for every C programmer.

I will now go throught some categories of functions related to specific C variables and I will explain the most important ones.

:one: <ins>**Character type**</ins>
\
\
   First of all, what is a character in C and how does it work ?
\
   A character is a variable that stores an integer corresponding to a certain position in [the ASCII table](https://fr.wikipedia.org/wiki/Fichier:ASCII-Table-wide.svg).
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

<p align="center">
  <img width=40% alt="char_demo" src="https://github.com/Vlad-PLK/LIBFT/assets/61476758/026365a7-18fe-4b0a-9a24-639709e6e900">
</p>
   Both declaration are equivalent because 71 is the number corresponding to the G in
   the ASCII table. 
   It is crucial to understand the relation between char type and the ascii table because it teaches you how you should manipulate this type of variable easily.

   For instance, in this library you can find a bunch of simple functions that tells you if a character is a digit or in capital letter or even if it's in the ASCII.
```C
int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}
```
\
:two: Character string type
\
\
Now, we are moving to char strings. When it comes to character strings you need to understand that in C a string is an array of characters composed of all of it characters and the null terminating character : '\0'. It is placed at the last index of the array.
It is crucial to have a good understanding of strings and pointers if you want to be able to manipulate those variables. There are a lot of very usefull functions in this part such as split, strjoin, strlen and many others. Basically, at least 50% of every project I made in C is composed of multiple string manipulation, simple and double string arrays etc...


:three: Integer
:four: Linked Lists


