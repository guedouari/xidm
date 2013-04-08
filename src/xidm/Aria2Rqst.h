/*
 * Aria2Rqst.h
 *
 *  Created on: Jan 22, 2013
 *      Author: guedouari
 */

#ifndef Aria2Rqst_H_
#define Aria2Rqst_H_

#include "../libs/jsonrpc/jsonrpc.h"

namespace Aria2 {

class Aria2Rqst {
private:
	Json::Value query;
public :
	std::string write()
	{
		Json::FastWriter writer;
		return writer.write(query);
	}
	Aria2Rqst(){}
	Aria2Rqst(int id,Json::StaticString fnct)
	{
		query["jsonrpc"] = "2.0";
		query["id"] = id;
		query["method"] = fnct;
	}
	Aria2Rqst(int id,Json::StaticString fnct, Json::Value av )
	{
		query["jsonrpc"] = "2.0";
		query["id"] = id;
		query["method"] = fnct;
		query["params"].append(av);
	}
	Aria2Rqst(int id,Json::StaticString fnct, Json::Value av ,Json::Value opt )
	{
		query["jsonrpc"] = "2.0";
		query["id"] = id;
		query["method"] = fnct;
		query["params"].append(av);
		query["params"].append(opt);
	}
	Aria2Rqst(int id,Json::StaticString fnct, Json::Value av ,Json::Value opt ,Json::Value oth )
	{
		query["jsonrpc"] = "2.0";
		query["id"] = id;
		query["method"] = fnct;
		query["params"].append(av);
		query["params"].append(opt);
		query["params"].append(oth);
	}
	//virtual ~Aria2Rqst();
};

} /* namespace Aria2 */
#endif /* Aria2Rqst_H_ */
