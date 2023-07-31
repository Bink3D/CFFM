#include "Memory.h"

bool Memory::CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size) {

	std::ofstream file_ofstream(desired_file_path.c_str(), std::ios_base::out | std::ios_base::binary);

	if (!file_ofstream.write(address, size))
	{
		file_ofstream.close();
		return false;
	}

	file_ofstream.close();
	return true;
}
