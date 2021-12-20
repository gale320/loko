#pragma once

#include "lokoinc.h"

#include <boost/algorithm/hex.hpp>
#include <boost/uuid/detail/md5.hpp>
#include <boost/uuid/detail/sha1.hpp>

namespace loko{

bool GetMd5(std::string &md5_str, const char * buffer, size_t len);
bool GetSha1(std::string &sha_str, const char * buffer, size_t len);

}
