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
:two: <ins>**Character string type**</ins>
\
\
Now, we are moving to char strings. When it comes to character strings you need to understand that in C a string is an array of characters composed of all of it characters and the null terminating character : '\0'. It is placed at the last index of the array.
<p align="center">
  <img width=60% alt="string_demo" src="https://github.com/Vlad-PLK/LIBFT/assets/61476758/e53f650a-1ee9-496d-80e0-afab3f12234d">
</p>
It is crucial to have a good understanding of strings and pointers if you want to be able to manipulate those variables. There are a lot of very usefull functions in this part such as split, strjoin, strlen and many others. Basically, at least 50% of every project I made in C is composed of multiple string manipulation, simple and double string arrays etc...

```C
#include <unistd.h>

/*
	ft_strlen -> returns the number of characters in str
*/

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
```

```C
#include "libft.h"

/*
	ft_strjoin -> create a new str with a size of s1 + s2 and copies both strings
	in it.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{	
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (s1 && s2)
	{	
		str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!str)
			return (0);
		while (s1[++i])
			str[i] = s1[i];
		while (s2[++j])
		{
			str[i] = s2[j];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
```
\
:three: <ins>**Integer**</ins>
\
\
In this part, I will only talk about two functions atoi and itoa. As I explained earlier, a char is equivalent to an int in the ASCII table.
Indeed, when we want to create an ascii to integer or integer to ascii function we will use this rule.
For example if we have char c = '5', we can just convert it to an int by substraction of '5' by '0' in ascii values :
'5' = 53 '0' = 48
So : '5' - '0' = 53 - 48 = 5
That's it, now we have converted a char to an int.
For an int to ascii convertion I let you do your own researches, the most important fact here is to learn correctly how a putnbr works in C.
\
\
:four: <ins>**Linked Lists**</ins>
\
\
In the subject of this project, linked lists are part of the bonus section but this data structure is so important for all incoming projects and so usefull in general that is fells like an unskippable part.
Let's define what is in fact a linked list :
A linked list is a linear data structure, made of a chain of nodes in which each node contains a value and a pointer to the next node in the chain.
Basically all nodes are connected one after the other and the last one points to NULL to indicate the end of the chain. The best advantage of a linked list compared to an array is that the size of the linked list is not fixed and you can add a node at any moment. It becomes very usefull when dealing with problems where you have an unknown quantity of variables or when it can change really fast.
\
Here is an example of a structure for a linked list : 
```C
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```
We have here a 'void' pointer so we can cast any type of variable that we want to for the content of the nodes. Of course the 'next' s_list pointer is here to link all nodes together and as I write it upwards the last node points to NULL.
\
Here are some basic functions to manipulate linked lists such as ft_lstnew to create a new node, or ft_lstsize to calculate the size of the list : 
```C
#include "libft.h"

/*
	ft_lstnew -> allocate a new node, set the content and point to NULL
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	else
	{
		lst->content = content;
		lst->next = NULL;
	}
	return (lst);
}
```

```C
#include "libft.h"

/*
	ft_lstsize -> if lst exists, returns the size of it
*/

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	else
	{
		while (lst)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}
```


