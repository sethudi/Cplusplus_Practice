/*
 * Animals.h
 *
 *  Created on: 19 Feb 2024
 *      Author: stmap
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace jwp {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace jwp */

#endif /* ANIMALS_H_ */
