//
// Copyright (c) 2009-2010 Mikko Mononen memon@inside.org
//
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
//

#ifndef RECAST_DUMP_H
#define RECAST_DUMP_H
#include "config.h"

struct duFileIO
{
	virtual ~duFileIO() = 0;
	virtual bool isWriting() const = 0;
	virtual bool isReading() const = 0;
	virtual bool write(const void* ptr, const size_t size) = 0;
	virtual bool read(void* ptr, const size_t size) = 0;
};

bool duDumpPolyMeshToObj(struct rcPolyMesh& pmesh, duFileIO* io);
bool duDumpPolyMeshDetailToObj(struct rcPolyMeshDetail& dmesh, duFileIO* io);

bool duDumpContourSet(struct rcContourSet& cset, duFileIO* io);
bool duReadContourSet(struct rcContourSet& cset, duFileIO* io);

bool duDumpCompactHeightfield(struct rcCompactHeightfield& chf, duFileIO* io);
bool duReadCompactHeightfield(struct rcCompactHeightfield& chf, duFileIO* io);

/// stdio file implementation.
class FileIO : public duFileIO
{
	FILE* fp_;
	int mode_;
public:
	FileIO();
	virtual ~FileIO();
	bool openForWrite(const char* path);
	bool openForRead(const char* path);
	virtual bool isWriting() const;
	virtual bool isReading() const;
	virtual bool write(const void* ptr, const size_t size);
	virtual bool read(void* ptr, const size_t size);
};

#endif // RECAST_DUMP_H