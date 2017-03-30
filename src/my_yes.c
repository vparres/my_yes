/*
** my_yes.c for my_yes in /home/exam/work/my_yes/src
** 
** Made by Vincent PARRES
** Login   <vincent.parres@epitech.eu>
** 
** Started on  Sat Mar 18 11:44:38 2017 Vincent PARRES
** Last update Thu Mar 30 15:50:09 2017 exam user
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	show_arg(int choice, char *name)
{
  if (choice == 0)
    printf("my_yes (%s) version 0.1\nBy Vincent PARRES\n\nMade for fun during a boring exam.\n", name);
  else
    printf("Usage : %s (--help, --version) [STRING]\nRepeats a string until stopped.\nIf no arguments are given, it displays a 'y' instead of [STRING] value.\n", name);
  return ;
}

int	check_arg(char **av)
{
  if (strcmp("--help", av[1]) == 0)
    {
      show_arg(1, av[0]);
      return (1);
    }
  else if (strcmp("--version", av[1]) == 0)
    {
      show_arg(0, av[0]);
      return (1);
    }
  else
    return (0);
}

void	do_while(int ac, char **av)
{
  int i;
  
  while (i)
    {
      i = 0;
      while (++i <= (ac - 1))
	{
	  printf("%s ", av[i]);
	}
      printf("\n");
      i = -1;
    }
}

void	do_y()
{
  while (1)
    write(1, "y\n", 2);
  return ;
}

int	main(int ac, char **av)
{
  if (ac == 1)
    do_y();
  else
    {
      if (check_arg(av) == 0)
	do_while(ac, av);
    }
  return (0);
}
