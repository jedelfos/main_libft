/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jedelfos <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 02:05:40 by jedelfos     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 02:07:43 by jedelfos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

void	fonctiontest(void *res)
{
	char *result;

	result = res;

	if (result[13] == '-')
	{
		result[13] = 'E';
		printf ("\n\nerreur\n\n");
	}
	else
		result[13] = '-';

}

int		main()
{
	char test[] = "test-test-test1";
	t_list *struc = ft_lstnew(test);

	t_list **testt;
	testt = &struc;


	char test2[] = "test-test-test2";
	t_list *struc2 = ft_lstnew(test2);

	ft_lstadd_front(testt, struc2);

	char test3[] = "test-test-test3";
	t_list *struc3 = ft_lstnew(test3);

	ft_lstadd_front(testt, struc3);

	char test4[] = "test-test-test4";
	t_list *struc4 = ft_lstnew(test4);

	ft_lstadd_front(testt, struc4);

	char test5[] = "test-test-test5";
	t_list *struc5 = ft_lstnew(test5);

	t_list *hhhh = *testt;


	printf("%s	  4\n", hhhh->content);
	printf("%s	  3\n", hhhh->next->content);
	printf("%s	  2\n", hhhh->next->next->content);
	printf("%s	  1\n", hhhh->next->next->next->content);
	printf("%d		  4\n",ft_lstsize(hhhh));
	printf("%s	  1\n",ft_lstlast(hhhh)->content);
	ft_lstadd_back(testt,struc5);
	printf("\n%s	  4\n", hhhh->content);
	printf("%s	  3\n", hhhh->next->content);
	printf("%s	  2\n", hhhh->next->next->content);
	printf("%s	  1\n", hhhh->next->next->next->content);
	printf("%s	  5\n", hhhh->next->next->next->next->content);
	printf("%d		  5\n",ft_lstsize(hhhh));

	ft_lstiter(hhhh,fonctiontest);

	printf("\n%s	 -4\n", hhhh->content);
	printf("%s	 -3\n", hhhh->next->content);
	printf("%s	 -2\n", hhhh->next->next->content);
	printf("%s	 -1\n", hhhh->next->next->next->content);
	printf("%s	 -5\n", hhhh->next->next->next->next->content);

}
