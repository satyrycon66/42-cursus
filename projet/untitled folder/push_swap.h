/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siroulea <siroulea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:29:55 by siroulea          #+#    #+#             */
/*   Updated: 2023/08/29 10:21:22 by siroulea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;

}					t_stack;

int					ft_strcmp(const char *s1, const char *s2);
int					no_double(int argc, char **argv);
int					no_character(char **argv, int i, int j);
int					parsing(int argc, char **argv);
long long			ft_atoi(const char *str);
int					a_is_sort(t_stack **list_a);
int					index_on_all(t_stack **list_a);
void				index_stack(t_stack **list_a);
void				print_index(t_stack *data, char name);
void				print_pile(t_stack *data, char name);
void				sa(t_stack *list_a);
void				sb(t_stack *list_b);
void				ss(t_stack *list_a, t_stack *list_b);
void				pa(t_stack **list_b, t_stack **list_a);
void				pb(t_stack **list_a, t_stack **list_b);
void				ra(t_stack **list_a);
void				rb(t_stack **list_b);
void				rr(t_stack *list_a, t_stack *list_b);
void				rra(t_stack **list_a);
void				rrb(t_stack **list_b);
void				rrr(t_stack *list_a, t_stack *list_b);
int					list_len(t_stack *lst);
void				print_pile(t_stack *data, char name);
void				sort_big_stack(t_stack **list_a, t_stack **list_b);
void				sort_3nbr(t_stack **list_a);
void				sort_4nbr(t_stack **list_a, t_stack **list_b);
void				sort_5nbr(t_stack **list_a, t_stack **list_b);
void				sort(t_stack **list_a, t_stack **list_b, int argc);
void				best_way(t_stack **list_a, int nbr);
int					how_manyshot_ra(t_stack **list, int nbr);

#endif
