#pragma once
#include "Includes.h"


class Memory {
public:
	bool CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size);
};

