/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcassaun <lcassaun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 21:31:21 by lcassaun          #+#    #+#             */
/*   Updated: 2020/07/11 14:29:14 by lcassaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FT_PRINTF_H
# define FT_PRINTF_FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct				s_part
{
	va_list					*arg;
	int						len;
	long int				nb_ll;
	char					d;
	char					s;
	char					l;
	char					ll;
	char					space;
	char					hashtag;
	char					minus;
	char					plus;
	char					zero;
	char					quot;
	int						i;
	int						k;
	int						n;
	char					*tmp;
	int						int_out;
	char					point;
	int						field;
	int						size;
	int						obj;
	char					lll;
	char					hh;
	char					h;
	char					j;
	char					z;
	char					*format;
	char					*num;
	char					negative;
	char					points;
	char					flags;
	char					*number;
	double					dnum;
	int						e;
	long double				ldnum;
	unsigned long long int	nb_z;
	char					f;
}							t_part;

int							ft_printf(const char *format, ...);
void						ft_unumber(struct s_part *part);
int							ft_upart_minus(struct s_part *part);
int							ft_upart_nominus(struct s_part *part);
int							ft_uflag(char *str, struct s_part *part);
int							ft_int_out(struct s_part *this, int i);
void						ft_dnumber(struct s_part *part);
int							ft_filler(struct s_part *this, long int i, char k);
int							ft_part_minus(struct s_part *part);
int							ft_ox_part_minus(struct s_part *part, char type);
int							ft_part_nominus(struct s_part *part);
int							ft_ox_part_nominus(struct s_part *part, char type);
void						ft_oxnumber(struct s_part *part, char type);
void						ft_parsing(struct s_part *part,
		char **str, char flag);
void						ft_fill_struct(struct s_part *this);
int							ft_oxflag(char *str,
		struct s_part *part, char type);
int							ft_perflag(char *str, struct s_part *part);
int							ft_cflag(char *str, struct s_part *part);
int							ft_dflag(char *str, struct s_part *part, char type);
int							ft_sflag(char *str, struct s_part *part);
int							ft_flag(struct s_part *part);
int							ft_pflag(char *str, struct s_part *part, char type);
int							ft_fflag(char *str, struct s_part *part);
char						*bin2str(char *str);
void						flnumber(struct s_part *part);
void						norm_for_ft_oxnumber(struct s_part *part);
void						help_for_ft_helpforparsing(struct s_part *part,
		char **str);
void						help_for_ft_fill_struct(struct s_part *this);
int							ft_help_for_ft_flag(struct s_part *part, char *str);

#endif
