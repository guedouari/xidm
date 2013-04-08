/*
 * Aria2Man.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: guedouari
 */

#include "Aria2Man.h"
#include "Aria2Rqst.h"

namespace Aria2 {

Aria2Man::Aria2Man() {
	// TODO Auto-generated constructor stub

}

std::string Aria2Man::Aria2Add(std::string url) {
	Json::Value query;
	query.append(url);
	return Aria2Rqst(1,Json::StaticString("aria2.addUri"),query).write();
}
std::string Aria2Man::Aria2Add(std::string url,std::string filename) {
	Json::Value query;
	query.append(url);
	Json::Value options;
	options["out"]=filename;
	//query.append(options);
	return Aria2Rqst(1,Json::StaticString("aria2.addUri"),query,options).write();
}

Aria2Man::~Aria2Man() {
	// TODO Auto-generated destructor stub
}

} /* namespace Aria2 */
