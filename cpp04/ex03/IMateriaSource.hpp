/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoomen <hoomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:58:28 by hoomen            #+#    #+#             */
/*   Updated: 2022/12/12 13:02:05 by hoomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASRC_HPP
#define IMATERIASRC_HPP

#include "ICharacter.hpp"

#include <string>

class ICharacter;

class IMateriaSource {
 public:
  /* constructor */
  IMateriaSource();

  /* copy constructor */
  IMateriaSource(IMateriaSource const&);

  /* copy assignment operator */
  IMateriaSource& operator=(IMateriaSource const&);

  /* destructor */
  virtual ~IMateriaSource();

  /* public methods*/
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif