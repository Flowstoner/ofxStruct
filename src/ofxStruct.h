#pragma once

// ofxStruct
namespace ofxStruct {

	class Packet {
	public:
		Packet();
		virtual ~Packet();

		int pack(void *buf, const char *fmt, ...);
		//int struct_pack_into(int offset, void *buf, const char *fmt, ...);


	private:
		char* buffer;
	};

} // namespace ofxStruct
