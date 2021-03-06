/***************************************************************************
    copyright            : (C) 2002-2008 by Stefano Barbato
    email                : stefano@codesink.org

    $Id: stdfile.h,v 1.9 2008-10-07 11:06:26 tat Exp $
 ***************************************************************************/
#ifndef _MIMETIC_OS_STDFILE_H
#define _MIMETIC_OS_STDFILE_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstdio>
#include <string>
#include <iterator>
#include <mimetic/os/fileop.h>
#include <mimetic/os/file_iterator.h>

namespace mimetic
{

// File class
struct StdFile: public FileOp
{
    typedef ifile_iterator iterator;
    StdFile();
    StdFile(const std::string&, int mode = O_RDONLY|O_BINARY);
    ~StdFile();
    operator bool() const;
    void open(const std::string&, int mode = O_RDONLY|O_BINARY);
    void close();
    uint read(char*, int);

    iterator begin();
    iterator end();
protected:
    void open(int flags);
    bool stat();

#ifdef _WIN32	//如果在windows系统下，则使用UNICODE编码路径，要求入参路径是UTF8编码
    std::wstring m_fqn;
    struct _stat64i32 m_st;
#else
    std::string m_fqn;
    struct stat m_st;
#endif // _WIN32
    bool m_stated;
    int m_fd;
};

}


#endif

