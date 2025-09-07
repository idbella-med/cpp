/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohidbel <mohidbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:42:59 by mohidbel          #+#    #+#             */
/*   Updated: 2025/08/25 17:43:00 by mohidbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; av[i]; i++)
    {
        for(int j = 0; av[i][j]; j++)
        {
            if (isalpha(av[i][j]))
                std::cout << (char)std::toupper(av[i][j]);
            else
                std::cout << av[i][j];
        }
    }
    std::cout << std::endl;
    return 0;
}