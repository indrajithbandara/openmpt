/*
 * unrar.h
 * -------
 * Purpose: Header file for .rar loader
 * Notes  : (currently none)
 * Authors: OpenMPT Devs
 * The OpenMPT source code is released under the BSD license. Read LICENSE for more details.
 */

#pragma once

#include "archive.h"

OPENMPT_NAMESPACE_BEGIN

#ifdef UNRAR_SUPPORT

struct RARData;

//====================================
class CRarArchive : public ArchiveBase
//====================================
{
protected:
	friend struct RARData;
	RARData *rarData;

public:
	CRarArchive(FileReader &file);
	virtual ~CRarArchive();
	
	virtual bool ExtractFile(std::size_t index);
};

#endif // UNRAR_SUPPORT

OPENMPT_NAMESPACE_END
