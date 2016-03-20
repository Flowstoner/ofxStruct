/*
#include "ofxStruct.h"
#include "struct.h"
#include <stdarg.h>

ofxStruct::Packet::Packet()
{
}

ofxStruct::Packet::~Packet()
{
}

int ofxStruct::Packet::pack(void * buf, const char * fmt, ...) {
	// how avoid this va_list?
	va_list args;
	va_start(args, fmt);
	return struct_pack(buf, fmt, args);
}


int ofxStruct::Packet::pack_into(int offset, void * buf, const char * fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	return struct_pack_into(offset, buf, fmt, args);
}


int ofxStruct::Packet::unpack(const void * buf, const char * fmt,...)
{
	va_list args;
	va_start(args, fmt);
	return struct_unpack(buf, fmt, args);	
}

int ofxStruct::Packet::unpack_from(int offset, const void * buf, const char * fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	return struct_unpack_from(offset,buf, fmt, args);
}

int ofxStruct::Packet::calcsize(const char * fmt)
{
	return struct_calcsize(fmt);
}
*/

