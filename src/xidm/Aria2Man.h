/*
 * Aria2Man.h
 *
 *  Created on: Jan 22, 2013
 *      Author: guedouari
 */

#ifndef ARIA2MAN_H_
#define ARIA2MAN_H_

#include "../libs/jsonrpc/jsonrpc.h"

namespace Aria2 {

class Aria2Man {
public:
	Aria2Man();
	std::string Aria2Add(std::string url);
	std::string Aria2Add(std::string url,std::string filename);
	virtual ~Aria2Man();
};

} /* namespace Aria2 */
#endif /* ARIA2MAN_H_ */
