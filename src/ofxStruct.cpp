
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
	va_list args;
	va_start(args, fmt);
	return struct_pack(buf, fmt, args);
}

/*
int ofxStruct::Packet::struct_pack_into(int offset, void * buf, const char * fmt, va_list arg)
{
	return 0;
}

int ofxStruct::Packet::struct_unpack(const void * buf, const char * fmt, va_list arg)
{
	return 0;
}

int ofxStruct::Packet::struct_unpack_from(int offset, const void * buf, const char * fmt, va_list arg)
{
	return 0;
}

int ofxStruct::Packet::struct_calcsize(const char * fmt)
{
	return 0;
}
*/

