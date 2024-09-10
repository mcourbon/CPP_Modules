/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:46:54 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 18:46:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <inttypes.h>

struct Data
{
    char    a;
    int     b;
    float   c;
    double  d;
};

class Serializer 
{
    private:
        Serializer();
        Serializer(const Serializer &src);
        ~Serializer();

    public:
        static uintptr_t    serialize(Data *ptr);
        static Data         *deserialize(uintptr_t serialized);

        Serializer          &operator=(const Serializer &rhs)
        
};

#endif