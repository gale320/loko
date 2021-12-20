#include "lokoutils.h"

namespace loko{

bool GetMd5(std::string &md5_str, const char * buffer, size_t len)
{
    bool ret = false;
    if(buffer == nullptr)
    {
        return ret;
    }

    boost::uuids::detail::md5 md5;
    md5.process_bytes(buffer, len);
    boost::uuids::detail::md5::digest_type digest;
    md5.get_digest(digest);
    const auto digest_char = reinterpret_cast<const char *>(&digest);
    md5_str.clear();
    boost::algorithm::hex(digest_char, digest_char + sizeof(boost::uuids::detail::md5::digest_type),
    std::back_inserter(md5_str));
    ret = true;
    return ret;

}

bool GetSha1(std::string &sha_str, const char * buffer, size_t len)
{
    bool ret = false;
    if(buffer == nullptr)
    {
        return ret;
    }
    char hash[20];

    boost::uuids::detail::sha1 sha1;
    sha1.process_bytes(buffer, len);
    boost::uuids::detail::sha1::digest_type digest;
    sha1.get_digest(digest);
    for(int i = 0; i < 5; ++i)
    {
        const char * tmp = reinterpret_cast<char *>(digest);
        hash[i * 4] = tmp[1 * 4 + 3];
        hash[i * 4 + 1] = tmp[i * 4 + 2];
        hash[i * 4 + 2] = tmp[i * 4 + 1];
        hash[i * 4 + 3] = tmp[i * 4];
    }
    sha_str.clear();
    std::ostringstream buf;
    for(int i = 0; i < 20; ++i)
    {
        buf << std::setiosflags(std::ios::uppercase) << std::hex << ((hash[i] & 0x000000F0) >> 4);
        buf << std::setiosflags(std::ios::uppercase) << std::hex << ((hash[i] & 0x0000000F));
    }
    sha_str = buf.str();
    ret = true;
    return ret;


    return ret;
}

}
