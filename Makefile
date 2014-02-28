#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/15 05:54:35 by jalcim            #+#    #+#              #
#    Updated: 2014/02/28 09:08:47 by jalcim           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRV = server
CLT = client

SSRC = dserver/serveurtcp.c
CSRC = dclient/clienttcp.c
SLSOCK = libsock/ft_inetaddr.c libsock/ft_sock_in_file.c libsock/ft_sock.c libsock/servcom.c
CLSOCK = libsock/ft_inetaddr.c libsock/ft_sock_in_file.c libsock/ft_sock.c
LFT = -L libft/ -lft -g

all : $(SRV) $(CLT)

$(SRV):
	gcc $(LFT) -o $(SRV) $(SSRC) $(SLSOCK)
$(CLT):
	gcc $(LFT) -o $(CLT) $(CSRC) $(CLSOCK)
clean:

fclean: clean
	rm $(SRV)
	rm $(CLT)
re: fclean all
