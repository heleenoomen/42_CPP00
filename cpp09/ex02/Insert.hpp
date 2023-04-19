/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoomen <hoomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:45:14 by hoomen            #+#    #+#             */
/*   Updated: 2023/01/10 22:01:08 by hoomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSERT_HPP
#define INSERT_HPP

#include <string>
#include <vector>
#include <utility>
// #include <iostream>

class Insert {
  typedef std::vector<int>::iterator vecIt;
  typedef std::vector<std::pair<int, int> > pairVec;
  typedef pairVec::iterator pairsIt;

 private:
  static int const jacobsThalStartAt = 2;
  int n_;
  int addedNonJacobsthal_;
  int previousJacobsthalNb_;
  int JacobsthalNb_;
  int nbPending_;
  std::vector<int>& mainChain_;
  pairVec& pairs_;
  int indexNextA;
  /* private methods*/

 public:
  /* default constructor */
  /* constructor */
  Insert(std::vector<int>& mainChain, pairVec& pairs);
  // Insert();
  vecIt binSearch(int i, vecIt begin, vecIt end);
  void insertPending();
  void insertInMainChain(int elementNbr);
  void insertJacobsthal(int elementNbr);
  void insertNonJacobsthal(int elementNbr);
  void printMainChain();
  void printPairs();

  /* copy constructor */
  Insert(Insert const& src);

  /* copy assignment operator */
  Insert& operator=(Insert const& rhs);

  /* default destructor */
  ~Insert();

  /* getters */

  /* setters */

  /* exceptions */

  /* public methods */
  void printClass();
};

/* insertion operator */
std::ostream& operator<<(std::ostream& o, Insert const& cname);

#endif