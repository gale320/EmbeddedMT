/*
 * socketInterface.hpp
 *
 *  Created on: Apr 28, 2014
 *      Author: Bart Verhagen
 */

#ifndef SOCKETINTERFACE_HPP_
#define SOCKETINTERFACE_HPP_

#include "outputMethodInterface.hpp"

namespace OutputMethod {
class SocketInterface : public OutputMethodInterface {
public:
	SocketInterface(uint16_t _portNo);
	virtual GBL::CmRetCode_t open(const char* filename);
	virtual GBL::CmRetCode_t write(const GBL::Displacement_t& displacement);
	virtual GBL::CmRetCode_t write(const GBL::Frame_t);
	virtual GBL::CmRetCode_t close();
private:
	int32_t _sockfd;
	const uint16_t _portNo;
};
}

#endif /* SOCKETINTERFACE_HPP_ */
