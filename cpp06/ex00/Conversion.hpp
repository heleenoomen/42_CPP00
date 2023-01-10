/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoomen <hoomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:45:14 by hoomen            #+#    #+#             */
/*   Updated: 2022/12/21 17:49:46 by hoomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>


class Conversion;

typedef void (Conversion::*convertType)() const;

enum InputType { charType, intType, floatType, doubleType, pseudoLiteral };

class Conversion {
 private:
  std::string const input_;
  int type_;
  static int const nbrOfConversions = 5;
  
  convertType conversionTable_[nbrOfConversions];

  void convertChar() const;
  void convertInt() const;
  void convertFloat() const;
  void convertDouble() const;
  void convertPseudoLiteral() const;

  void launchConversionTable();
  void determineType();
  bool isPseudoLiteral() const;

 public:
  /* default constructor */
  Conversion();
  Conversion(std::string const& input);

  /* copy constructor */
  Conversion(Conversion const& src);

  /* copy assignment operator */
  Conversion& operator=(Conversion const& rhs);

  /* default destructor */
  ~Conversion();

  /* getters */
  std::string const& getInput() const;

  /* public methods */
  void convert() const;
};

#endif